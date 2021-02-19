//
// Created by Tommaso Bucaioni on 19/02/21.
//

#ifndef LABORATORIO_INIFILE_H
#define LABORATORIO_INIFILE_H

#include "string"
#include "map"
#include "iostream"

using namespace std;


class IniFile {
public:
    IniFile( string fileName); //costruttore

    void setFileName(string fileName);
    string getFileName();

    bool addSection(string sName); //add section
    bool addParameter(string sName, string pName); //add parameter

    void setString(string sName, string pName, string element);
    string getString(string sName, string pName);

    string getSection(string sName);
    string getParameter(string sName, string pName);

    bool deleteSection(string sName); //delete section
    bool deleteParameter(string sName, string pName); //delete parameter

    void printString(string sName, string pName);
    void printSection(string sName);
    void printParameter(string sName, string pName);







    virtual ~IniFile(); //distruttore







private:
    string fileName;
    map<string, map<string, string>> file;




};


#endif //LABORATORIO_INIFILE_H
