#ifndef PHONES_H_INCLUDED
#define PHONES_H_INCLUDED

#include "string.h"
#include <string>

using namespace std;

class Telefonszam
{
protected:
    string Szam;
public:
    Telefonszam(const string inSzam);   //Konstruktor
    Telefonszam( const Telefonszam& inTf);  //másoló konstruktor
    void setSzam(string inSzam) const;
    string getSzam() const;
    ~Telefonszam(); //Destruktor
};

class PrivateTelefonszam :Telefonszam
{



public:
    PrivateTelefonszam(const string iNSzam);    //konstruktor
    PrivateTelefonszam(const PrivateTelefonszam& inTf);     //Másoló konstruktor
    ~PrivateTelefonszam();      //Destruktor
};

class OtthoniTelefonszam :Telefonszam
{

public:
    OtthoniTelefonszam(const string inSzam);        //Konstruktor
    OtthoniTelefonszam(const OtthoniTelefonszam& inTf);     //Másoló konstruktor
    ~OtthoniTelefonszam();  //Destruktor
};

#endif // PHONES_H_INCLUDED
