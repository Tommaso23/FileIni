#include <iostream>
#include "IniFile.h"
int main() {
    IniFile file("ciao.ini");
    std::cout << "File Name: " << file.getFileName() << std::endl;

    file.setString("Sezione 1", "Parametro 1", "ciao");
    file.setString("Sezione 2", "Parametro 1", "NO");
    file.setString("Sezione 1", "Parametro 2", "avvio");
    file.addComment("onFile", "ciao", "tommaso");
    file.printSection("Sezione 1");


}
