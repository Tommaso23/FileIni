//
// Created by Tommaso Bucaioni on 19/02/21.
//

#include "IniFile.h"
using namespace std;

IniFile::IniFile(string fileName) {
    this->fileName = fileName;
    comment = "inserisci qui i commenti";
    comm = false;
    this->projectFile.open(fileName);

}

IniFile::~IniFile() {}

string IniFile::getFileName() {
    return this->fileName;
}

string IniFile::getComment() {
    return this->comment;
}

void IniFile::setFileName(string fileName) {
    this->fileName = fileName;
}

bool IniFile::addSection(string sName) {
    file[sName];
    if(&(file[sName]) != nullptr) //indirizzo di file[name]diverso da nullptr
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

void IniFile::setInt(string sName, string pName, int element) {
    string e = to_string(element);
    setString(sName, pName, e);
}

void IniFile::setFloat(string sName, string pName, float element) {
    string e = to_string(element);
    setString(sName, pName, e);
}

void IniFile::setBool(string sName, string pNAme, bool element) {
    if(element){
        setString(sName, pNAme, "true");
    } else
        setString(sName, pNAme, "false");
}

void IniFile::deleteSection(string sName) {
    auto it = file.find(sName); //ritorna un iteratore all'elemento o a end()
    if(it != file.end()) {
        file.erase(sName);

    }
    else {
        throw std::runtime_error("Sezione inesistente");
    }

}

void IniFile::deleteParameter(string sName, string pName) {
    auto it = file[sName].find(pName);
    if( it != file[sName].end())
        file[sName].erase(pName);
    else
        throw std::runtime_error("Parametro inesistente");
}

void IniFile::printSection(string sName) {
    std::cout << "[" << sName << "]" << std::endl;
    printParameters(sName);
}

void IniFile::printParameters(string sName) {
    for(auto &it:file[sName]) {
        std::cout << it.first << " = " << file[sName][it.first] << std::endl;
    }
}

void IniFile::searchSection(string sName) {
    auto it = file.find(sName);
    if(it != file.end()) {
        std::cout << "Sezione: " << "[" << sName << "]" << " TROVATA" << std::endl;
    }
    else{
        throw std::runtime_error("Sezione non presente");
    }
}

void IniFile::searchParameter(string sName, string pName) {
    auto it = file[sName].find(pName);
    if(it != file[sName].end()) {
        std::cout << "Sezione: "<< "[" << sName << "]" << std::endl;
        std::cout << "Parametro: " << pName << " TROVATO" <<std::endl;
    }
    else{
        throw std::runtime_error("Parametro non presente");
    }
}

void IniFile::clearFile() {
    file.clear();
}

void IniFile::clearString(string sName, string pName) {
    file[sName][pName] = " ";
}

void IniFile::addComment(string sName, string pName, string comment) {
    if(sName == "onFile") {
        this->comment = ";" + comment;
        comm = true;
    }
    else {
        file[sName][pName] = ";" + comment;
    }
}

void IniFile::deleteComment(string sName, string pName) {
    if(sName == "onFile"){
        this->comment = "";
        comm = false;
    } else {
        file[sName][pName] = " ";
    }
}

void IniFile::changeComment(string sName, string pName, string comment) {
    deleteComment(sName, pName);
    addComment(sName, pName, comment);
}

void IniFile::printFile() {
        if(comm) {
            std::cout << comment << std::endl;
        }
        for(auto &it:file){
            printSection(it.first);
        }
}

void IniFile::changeString(string sNAme, string pName, string element) {
    file[sNAme][pName].clear();
    setString(sNAme, pName, element);
}

void IniFile::end() {
    projectFile.close();
}



