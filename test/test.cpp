//
// Created by Tommaso Bucaioni on 19/02/21.
//


#include "/Users/tommasobucaioni/CLionProject/Laboratorio/IniFile.cpp"
#include "/Users/tommasobucaioni/CLionProject/Laboratorio/IniFile.h"
#include "/Users/tommasobucaioni/CLionProject/Laboratorio/test/lib/google_tests/googletest/include/gtest/gtest.h"

//constructor tester
TEST(IniFileTest, ConstructorTest) {
    IniFile constructorTester("IniFile.ini");
    ASSERT_EQ(constructorTester.getFileName(), "IniFile.ini");
}

TEST(IniFileTest, StringGetterSetterTest){
    IniFile file("IniFile.ini");
    file.setString("Sezione 1", "Parametro 1", "presente");
    ASSERT_EQ(file.getString("Sezione 1", "Parametro 1"), "presente");
}

