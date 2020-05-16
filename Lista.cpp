#include <iostream>
#include <fstream>
#include <stdlib.h>

#include "Szemely.h"
#include "cim.h"
#include "lista.h"
#include "ListaElem.h"

using namespace std;

Lista::~Lista(){}

void Lista::felszabadit(){}

void Lista::felvesz(const Szemely& ujszemely){}

void Lista::listaz() {}

void Lista::torol(const string &vezeteknev, const string &keresztnev) {}

void Lista::keres(const string& vezeteknev, const string& keresztnev) {}

void Lista::fir(Lista *lista) {}


void Lista::folvas(Lista *lista) {}

