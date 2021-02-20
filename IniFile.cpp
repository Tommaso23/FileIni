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
    file[sName][pName] = " ";
    if(&(file[sName][pName]) != nullptr)
        return true;
    else
        return false;

}

void IniFile::setString(string sName, string pName, string element) {
    file[sName][pName] = element;
}

string IniFile::getString(string sName, string pName) {
    return file[sName][pName];
}

bool IniFile::deleteSection(string sName) {
    auto it = file.find(sName);
    if(it != file.end())
        file.erase(sName);
    else
        throw std::runtime_error("Sezione inesistente");

}

bool IniFile::deleteParameter(string sName, string pName) {
    auto it = file[sName].find(pName);
    if( it != file[sName].end())
        file[sName].erase(pName);
    else
        throw std::runtime_error("Parametro inesistente");
}
void IniFile::printString(string sName, string pName) {
    std::cout << file[sName][pName] << std::endl;
}

void IniFile::printSection(string sName) {
    for(auto &it:file)
        std::cout << it.first << std::endl;
}

void IniFile::printParameter(string sName) {
    for(auto &it:file[sName])
        std::cout << it.first << std::endl;
}

bool IniFile::searchSection(string sName) {
    bool search = false;
    auto it = file.find(sName);
    if(it != file.end())
        search = true;
    return search;
}

bool IniFile::searchParameter(string sName, string pName) {
    bool search = false;
    auto it = file[sName].find(pName);
    if(it != file[sName].end())
        search = true;
    return search;
}

void IniFile::clearFile() {
    file.clear();
}
void IniFile::clearString(string sName, string pName) {
    file[sName][pName] = " ";
}