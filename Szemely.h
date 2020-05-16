#ifndef SZEMELY_H_INCLUDED
#define SZEMELY_H_INCLUDED


#include "string.h"
#include "Phones.h"
#include <string>



class Szemely
{
protected:
    string vezeteknev;
    string keresztnev;
    string becenev;
    //Cim cim;
    PrivateTelefonszam pszam;
    OtthoniTelefonszam oszam;
public:
    Szemely()
    {
        this->vezeteknev = "";
        this->keresztnev = "";
        this->becenev = "";
        //this->cim = Cim();
        //this->pszam = "";
        //this->oszam = "";
    }
    Szemely(string vezeteknev, string keresztnev, string becenev,PrivateTelefonszam pszam,OtthoniTelefonszam oszam)
    {

        this->vezeteknev = vezeteknev;
        this->keresztnev = keresztnev;
        this->becenev = becenev;
        //this->cim = cim;
        this->oszam = oszam;
        this->pszam = pszam;
    }
    Szemely(const Szemely& rhs);

    ~Szemely() {}

    //getterek

    string getVezeteknev() const
    {
        return this->vezeteknev;
    }
    //string& getVezeteknev();

    string getKeresztnev() const
    {
        return this->keresztnev;
    }
    //string& getKeresztnev();

    string getBecenev()  const
    {
        return this->becenev;
    }

    //Cim& getCim();
    // Cim getCim() const;


    PrivateTelefonszam getPtelszam() const;
    OtthoniTelefonszam getOtelszam() const;


    //setterek
    void setVezeteknev(string vezeteknev) {this->vezeteknev = vezeteknev;}

    void setKeresztnev(string keresztnev) {this->keresztnev = keresztnev;}

    void setBecenev(string becenev) {this->becenev = becenev;}




    void operator=(const Szemely& rhs);

    bool operator==(const Szemely& rhs);



};

#endif // SZEMELY_H_INCLUDED
