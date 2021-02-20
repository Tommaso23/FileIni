#include <iostream>
#include "IniFile.h"
int main() {
    IniFile file("ciao.ini");
    std::cout << "File Name: " << file.getFileName() << std::endl;

    file.setString("Sezione 1", "Parametro 1", " ciao ");
    file.addParameter("Sezione 1", "Parametro 2");
    file.printSection("Sezione 1");
    file.printString("Sezione 1", "Parametro 1");
    file.printString("Sezione 1", "Parametro 2");
    file.addComment("Sezione 1", "Parametro 1", "commento");
    file.printString("Sezione 1", "Parametro 1");


}
