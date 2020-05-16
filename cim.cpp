#include <iostream>

#include <string>
#include "string.h"
#include "cim.h"

using namespace std;


//Másoló konstruktor
Cim::Cim(const Cim& rhs) {
    iranyitoszam = rhs.iranyitoszam;
    orszag = rhs.orszag;
    varos = rhs.varos;
    utca = rhs.utca;
    hazszam = rhs.hazszam;
}


//Operator>>
std::istream& operator>>(std::istream& is, Cim& cim) {
    string temp;
    cout << "Adja meg az iranyitoszamot: ";
    is >> temp;
    cim.setIranyitoszam(temp);
    cout << "Adja meg a varost: ";
    is >> temp;
    cim.setVaros(temp);
    cout << "Adja meg az utcat: ";
    is >> temp;
    cim.setUtca(temp);
    cout << "Adja meg a hazszamot: ";
    is >> temp;
    cim.setHazszam(temp);
    return is;
}

//Operator<<
std::ostream& operator<<(std::ostream& os, Cim& cim) {
    os << cim.getIranyitoszam() << " " << cim.getVaros() << " " << cim.getUtca() << " " << cim.getHazszam();
    return os;
}
