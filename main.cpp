#include <iostream>
#include "IniFile.h"
int main() {
    IniFile file("/Users/tommasobucaioni/Desktop/ciao.ini");

    std::cout << "File Name: " << file.getFileName() << std::endl;

    file.setString("Sezione 1", "Parametro 1", "presente");
    file.setFloat("Sezione 2", "Parametro 1", 3.23);
    file.setString("Sezione 1", "Parametro 2", "avvio eseguito");
    file.addComment("onFile", "ciao", "questo è un commento sul file");
    file.checkIsOpen();
    file.setBool("Sezione 2", "Parametro 1", true);
    file.addComment("Sezione 3", "Parametro 1", "commento sul parametro 1 della sezione 3");
    file.printFile();

    file.end();

}
