
#include <iostream>
#include <fstream>
#include "memoria.h"
#include "leerArchivo.h"
using namespace std;

struct Etiqueta{
    string etiqueta;
    unsigned position;
};

void quitarEspBlanco(string & s){
    for(unsigned i = 0; i< s.size(); i++){
        if (s[i]==' ') {
            s.erase(i,i+1);
        }
    }
}


bool separateFile(string name, string &textName, string &dataName){
    bool estoyText = false;
    bool estoyData = false;
    string line;
    fstream fr(name, ios::in);
    fstream fileText(textName, ios::out);
    fstream fileData(dataName, ios::out);

    if(fr.is_open())
        return true;
    while (getline(fr, line)) {
        if (line.empty())
            continue;

        if (line.find('#')!=string::npos) {
            line.erase(line.find('#')+1, line.size());
        }
        
    
    }


    return false;
}

// nombre del fichero y memoria que se obtendrá al final
bool readFile(string name, Memoria &m){
    /**
     *
     *                      separateFile
     * se obtiene la parte de data y la parte del texto por separado
     * limpiandose de comentarios y espacios en blanco antes y después
     * ficheroData ficheroText 
     *
     *                      getLabel
     * -- ficheroText
     *  se lee para obtener las etiquetas y pasarlo a un vector de dichas 
     *  etiquetas (nombre y posicion) se comprueba de que todas las etiquetas 
     *  en j o en beq tengan etiquetas
     *
     * -- TODO pensar el ficheroData
     *
     **/


    string s = "texto.txt";
    string s2 = "data.txt";

    separateFile(name, s, s2);

    return true;
}









bool tipor(string &s, int &reg1, int &reg2, int &reg3){

    if(s.find_first_of('$') == string::npos)
        return true;

    s.erase(0, s.find_first_of('$')+1);

    if (s.find_first_of(',') == string::npos)
        return true;
    reg1 = atoi(s.substr(0, s.find_first_of(',')).c_str());

    if(s.find_first_of('$') == string::npos)
        return true;
    s.erase(0, s.find_first_of('$')+1);

    if (s.find_first_of(',') == string::npos)
        return true;
    reg2 = atoi(s.substr(0, s.find_first_of(',')).c_str());

    if(s.find_first_of('$') == string::npos)
        return true;
    s.erase(0, s.find_first_of('$')+1);

    reg3 = atoi(s.c_str());

    return false;
}

bool cond(string &s, int &reg1, int &reg2){

    if(s.find_first_of('$') == string::npos)
        return true;
    s.erase(0, s.find_first_of('$')+1);

    reg1 = atoi(s.c_str());

    if(s.find_first_of('$') == string::npos)
        return true;

    s.erase(0, s.find_first_of('$')+1);

    reg2 = atoi(s.c_str());

    if(s.find_first_of(' ') == string::npos)
        return true;

    s.erase(0, s.find_first_of(' ')+1);

    if(s.find_first_of(' ')!=string::npos)
        s.erase( s.find_first_of(' '), s.size());


    if(s.find_first_of('#')!=string::npos)
        s.erase( s.find_first_of('#'), s.size());

    return false;
}

bool mem(string &s, int &reg1, int &reg2, int & inmediato){

    if(s.find_first_of('$') == string::npos)
        return true;

    s.erase(0, s.find_first_of('$')+1);

    if(s.find_first_of(',') == string::npos)
        return true;

    reg1 = atoi(s.substr(0, s.find_first_of(',')).c_str());

    if(s.find_first_of(' ') == string::npos ){
        s.erase(0, s.find_first_of(',')+1);
    }else {
        s.erase(0, s.find_first_of(' ')+1);
    }


    if(s.find_first_of('(') == string::npos)
        return true;

    inmediato = atoi(s.substr(0, s.find_first_of('(')).c_str());

    if(s.find_first_of('$') == string::npos)
        return true;

    s.erase(0, s.find_first_of('$')+1);

    if(s.find_first_of(')') == string::npos)
        return true;

    s.erase(s.find_first_of(')')+1, s.size());
    reg2 = atoi(s.c_str());

    return false;
}

bool jump(string &s){
    if(s.find_first_of('#') != string::npos){
        s.erase(s.find_first_of('#'), s.size());
    }

    if(s.find_first_of(' ') != string::npos){
        s.erase(s.find_first_of(' '), s.size());
    }

    return true;
}





bool readInstructions(string name, Memoria &m){
    ifstream fr;
    fr.open(name);
    string line;
    string aux;
    int reg1;
    int reg2;
    int reg3;
    int inmediato;

    bool r1;
    bool r2;
    bool r3;
    bool inm;

    int32_t cont = 0x00400000;

    while(getline(fr, line)){
        r1 = false;
        r2 = false;
        r3 = false;
        inm = false;
        int lineNum = ((cont-0x00400000)/4);

        aux = line.substr(0, line.find(' '));
        line.erase(0, line.find(' '+1));

        if (aux == S_LW) {
            if(mem(line, reg1, reg2, inmediato))
                cout << "error: " << lineNum << " del log"<<endl;

        } else if (aux == S_SW) {
            if(mem(line, reg1, reg2, inmediato))
                cout << "error: " << lineNum << " del log"<<endl;
        } else if (aux == S_ADD) {
            if (tipor(line, reg1, reg2, reg3))
                cout << "error: " << lineNum << " del log"<<endl;

        } else if (aux == S_ADDI) { // TODO hacer la funcion de este formato
            if(mem(line, reg1, reg2, inmediato))
                cout << "error: " << lineNum << " del log"<<endl;

        } else if (aux == S_AND) {
            if (tipor(line, reg1, reg2, reg3))
                cout << "error: " << lineNum << " del log"<<endl;

        } else if (aux == S_OR) {
            if (tipor(line, reg1, reg2, reg3))
                cout << "error: " << lineNum << " del log"<<endl;

        } else if (aux == S_BEQ) {
            if (cond(line, reg1, reg2))
                cout << "error: " << lineNum << " del log"<<endl;

        } else if (aux == S_J) {
            if(jump(line))
                cout << "error: " << lineNum << " del log"<<endl;

        } else if (aux == S_SRL) {

        } else if (aux == S_SLL) {

        } else if (aux == S_SUB) {
            if (tipor(line, reg1, reg2, reg3))
                cout << "error: " << lineNum << " del log"<<endl;

        } 

        cont+=4;
    }
    return 1;
}
