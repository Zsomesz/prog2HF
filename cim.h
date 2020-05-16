#ifndef CIM_H_INCLUDED
#define CIM_H_INCLUDED

#include <iostream>
#include "string.h"
#include <string>

class Cim
{
protected:
    std::string iranyitoszam;
    std::string orszag;
    std::string varos;
    std::string utca;
    std::string hazszam;
public:
    Cim()
    {
        this->iranyitoszam = "";
        this->varos = "";
        this->utca = "";
        this->hazszam = "";
    }
    Cim(std::string iranyitoszam, std::string varos, std::string utca, std::string hazszam)
    {
        this->iranyitoszam = iranyitoszam;
        this->varos = varos;
        this->utca = utca;
        this->hazszam = hazszam;
    }
    //Másoló konstruktor
    Cim(const Cim& rhs);
    //Destruktor
    ~Cim() {}

    std::string getIranyitoszam ()  const
    {
        return this->iranyitoszam;
    }

    std::string getOrszag ()  const
    {
        return this->orszag;
    }

    std::string getVaros ()  const
    {
        return this->varos;
    }

    std::string getUtca ()  const
    {
        return this->utca;
    }

    std::string getHazszam ()  const
    {
        return this->hazszam;
    }

    void setIranyitoszam (std::string iranyitoszam)
    {
        this->iranyitoszam = iranyitoszam;
    }

    void setOrszag (std::string orszag)
    {
        this->orszag = orszag;
    }

    void setVaros (std::string varos)
    {
        this->varos = varos;
    }

    void setUtca (std::string utca)
    {
        this->utca = utca;
    }

    void setHazszam (std::string hazszam)
    {
        this->hazszam = hazszam;
    }

    void operator=(const Cim& rhs);

    bool operator==(const Cim& rhs);
};

//Operator>> (folvas)
std::istream& operator>>(std::istream& is, Cim& cim);

//Operator<<(fir)
std::ostream& operator<<(std::ostream& os, Cim& cim);

#endif // CIM_H_INCLUDED


