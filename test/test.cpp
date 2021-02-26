//
// Created by Tommaso Bucaioni on 19/02/21.
//


#include "/Users/tommasobucaioni/CLionProject/Laboratorio/IniFile.cpp"
#include "/Users/tommasobucaioni/CLionProject/Laboratorio/IniFile.h"
#include "/Users/tommasobucaioni/CLionProject/Laboratorio/test/lib/google_tests/googletest/include/gtest/gtest.h"

//CONSTRUCTOR TESTER
TEST(IniFileTest, ConstructorTest) {
    IniFile constructorTester("IniFile.ini");
    ASSERT_EQ(constructorTester.getFileName(), "IniFile.ini");
}
//GETTER SETTER TESTER
TEST(IniFileTest, StringGetterSetterTest){
    IniFile file("IniFile.ini");
    file.setString("Sezione 1", "Parametro 1", "presente");
    ASSERT_EQ(file.getString("Sezione 1", "Parametro 1"), "presente");
}

TEST(IniFileTest, addSectionTest) {
    IniFile file("IniFile.ini");
    file.addSection("Sezione 2");
    ASSERT_EQ(file.addSection("Sezione 2"), true);
}

TEST(IniFileTest, addParameterTest){
    IniFile file("IniFile.ini");
    file.addParameter("Sezione 1", "Parametro 4");
    ASSERT_EQ(file.addParameter("Sezione 1", "Parametro 4"), true);
}

TEST(IniFileTest, searchSectionTestFail) {
    IniFile file("IniFile.ini");
    file.addSection("Sezione 4");
    EXPECT_THROW(file.searchSection("Sezione 9"), std::runtime_error);
}
