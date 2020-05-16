#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED


#include "string.h"
#include "Szemely.h"
#include "cim.h"
#include "ListaElem.h"

class Lista{

    Szemely *eleje;
public:
      Lista(); //Konstruktor
      ~Lista();  //Destruktor
      void felszabadit();

    //Személy felvétele
    void felvesz(const Szemely& szemely);
    //Törlés
    void torol(const string& vezeteknev, const string& keresztnev);
    //Adatok kilistázása
    void listaz();
    //Keresés
    void keres(const string& vezeteknev, const string& keresztnev);
    //Fájlkezelés
    void fir(Lista *lista);
    void folvas(Lista *lista);





};





#endif // LISTA_H_INCLUDED
