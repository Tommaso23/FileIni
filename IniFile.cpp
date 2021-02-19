//
// Created by Tommaso Bucaioni on 19/02/21.
//

#include "IniFile.h"
using namespace std;

IniFile::IniFile(string fileName) {
    this->fileName = fileName;
}

IniFile::~IniFile() {}

string IniFile::getFileName() {
    return this->fileName;
}

void IniFile::setFileName(string fileName) {
    this->fileName = fileName;
}

bool IniFile::addSection(string sName) {
    file[sName];
    if(&(file[sName]) != nullptr)
        return true;
    else
        return false;
}

bool IniFile::addParameter(string sName, string pName) {
    file[sName][pName] = "empty";
    if(&(file[sName][pName]) != nullptr)
        return true;
    else
        return false;

}

void IniFile::setString(string sName, string pName, string element) {
    file[sName][pName] = element
}

string IniFile::getString(string sName, string pName) {
    return file[sName][pName];
}

string IniFile::getParameter(string sName, string pName) {
    return file[sName][pName];
}

bool IniFile::deleteSection(string sName) {

}
