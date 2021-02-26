//
// Created by Tommaso Bucaioni on 19/02/21.
//

#ifndef LABORATORIO_INIFILE_H
#define LABORATORIO_INIFILE_H

#include "string"
#include "map"
#include "iostream"
#include "fstream"

using namespace std;


class IniFile {
public:
    IniFile( string fileName); //costruttore

    void setFileName(string fileName);
    string getFileName();

    bool addSection(string sName); //add section
    bool addParameter(string sName, string pName); //add parameter

    void setString(string sName, string pName, string element);
    void setInt(string sName, string pName, int element);
    void setFloat(string sName, string pName, float element);
    void setBool(string sName, string pNAme, bool element);

    string getString(string sName, string pName);

    void searchSection(string sName);
    void searchParameter(string sName, string pName);

    void deleteSection(string sName); //delete section
    void deleteParameter(string sName, string pName); //delete parameter
    void clearString(string sName, string pName);

    void printSection(string sName);
    void printParameters(string sName);
    void printFile();

    void clearFile();

    void end();

    void addComment(string sName, string pName, string comment);

    void changeString(string sNAme, string pName, string element);








    virtual ~IniFile(); //distruttore







private:
    string fileName;
    map<string, map<string, string>> file;
    string comment;
    bool comm;
    fstream projectFile;

};


#endif //LABORATORIO_INIFILE_H
