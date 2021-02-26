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

TEST(IniFileTest, IntGetterSetterTest){
    IniFile file("IniFile.ini");
    file.setInt("Sezione 1", "Parametro 1", 5);
    ASSERT_EQ(stoi(file.getString("Sezione 1", "Parametro 1")), 5);
}

TEST(IniFileTest, FloatGetterSetterTest){
    IniFile file("IniFile.ini");
    file.setFloat("Sezione 1", "Parametro 1", 3.23);
    ASSERT_TRUE(abs(stof(file.getString("Sezione 1", "Parametro 1")) - 3.23 < 0.0001));
}

TEST(IniFileTest, BoolGetterSetterTest){
    IniFile file("IniFile.ini");
    file.setBool("Sezione 1", "Parametro 1", true);
    ASSERT_EQ(file.getString("Sezione 1", "Parametro 1"), "true");
}

TEST(IniFileTest, clearStringTest) {
    IniFile file("IniFile.ini");
    file.setString("Sezione 5", "Parametro 5", "ciao");
    file.clearString("Sezione 5", "Parametro 5");
    ASSERT_EQ(file.getString("Sezione 5", "Parametro 5"), " ");
}

TEST(IniFileTest, changeStringTest) {
    IniFile file("IniFile.ini");
    file.setString("Sezione 5", "Parametro 5", "ciao");
    file.changeString("Sezione 5", "Parametro 5", "SI");
    ASSERT_EQ(file.getString("Sezione 5", "Parametro 5"), "SI");
}


//SECTIONS E PARAMETERS TESTER
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

TEST(IniFileTest, searchParameterTestFail) {
    IniFile file("IniFile.ini");
    file.addParameter("Sezione 2", "Parametro 6");
    EXPECT_THROW(file.searchParameter("Sezione 2", "Parametro 14"), std::runtime_error);
}

TEST(IniFileTest, deleteSectionTestFail) {
    IniFile file("IniFile.ini");
    file.addSection("Sezione 6");
    EXPECT_THROW(file.deleteSection("Sezione 9"), std::runtime_error);
}

TEST(IniFileTest, deleteParameterTestFail) {
    IniFile file("IniFile.ini");
    file.addParameter("Sezione 3", "Parametro 5");
    EXPECT_THROW(file.deleteParameter("Sezione 3", "Parametro 23"), std::runtime_error);
}

//COMMENT GETTER E SETTER TESTER
TEST(IniFileTest, addCommentTest) {
    IniFile file("IniFile.ini");
    file.addComment("Sezione 1", "Parametro 1", "commento");
    ASSERT_EQ(file.getString("Sezione 1", "Parametro 1"), ";commento");
}

TEST(IniFileTest, changeCommentTest) {
    IniFile file("IniFile.ini");
    file.addComment("Sezione 1", "Parametro 1", "commento");
    file.changeComment("Sezione 1", "Parametro 1", "ciao");
    ASSERT_EQ(file.getString("Sezione 1", "Parametro 1"), ";ciao");
}

TEST(IniFileTest, deleteCommentTest) {
    IniFile file("IniFile.ini");
    file.addComment("Sezione 1", "Parametro 1", "commento");
    file.deleteComment("Sezione 1", "Parametro 1");
    ASSERT_EQ(file.getString("Sezione 1", "Parametro 1"), " ");
}

TEST(IniFileTest, addCommentonFileTest) {
    IniFile file("IniFile.ini");
    file.addComment("onFile", "Parametro 1", "commento");
    ASSERT_EQ(file.getComment(), ";commento");
}



