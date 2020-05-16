#ifndef LISTAELEM_H_INCLUDED
#define LISTAELEM_H_INCLUDED

#include "Szemely.h"


class ListaElem{

protected:
    Szemely adat;
    ListaElem *kov;

public:


    ListaElem(Szemely adat);        //Konstruktor
    ~ListaElem();               //Destruktor
    ListaElem* getkov() const;

    void setKov(ListaElem* kov);
};



#endif // LISTAELEM_H_INCLUDED
