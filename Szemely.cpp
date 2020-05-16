
#include "Szemely.h"
#include <iostream>
#include "string.h"
#include "Phones.h"

using namespace std;

//Szemely::Szemely(string vezeteknev, string keresztnev, string becenev,PrivateTelefonszam pszam,OtthoniTelefonszam oszam) {}



Szemely::Szemely(const Szemely& rhs) {

    this->vezeteknev = rhs.vezeteknev;
    this->keresztnev = rhs.keresztnev;
    this->becenev = rhs.becenev;
    //this->cim = rhs.cim;
    this->oszam = rhs.oszam;
    this->pszam = rhs.pszam;


}




void Szemely::operator=(const Szemely& rhs) {}

bool Szemely::operator==(const Szemely& rhs) {}

