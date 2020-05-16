#include <iostream>

#include <stdlib.h>
#include "Phones.h"



Telefonszam::Telefonszam(const string inSzam){}
Telefonszam::Telefonszam( const Telefonszam& inTf){}
void Telefonszam::setSzam(string inSzam) const{}
string Telefonszam::getSzam() const{}
Telefonszam::~Telefonszam(){}



PrivateTelefonszam::PrivateTelefonszam(const string inSzam):Telefonszam(inSzam){}
PrivateTelefonszam::PrivateTelefonszam( const PrivateTelefonszam& inTf):Telefonszam(inTf){}
PrivateTelefonszam::~PrivateTelefonszam(){}



OtthoniTelefonszam::OtthoniTelefonszam(const string inSzam):Telefonszam(inSzam){}
OtthoniTelefonszam::OtthoniTelefonszam(const OtthoniTelefonszam& inTf):Telefonszam(inTf){}
OtthoniTelefonszam::~OtthoniTelefonszam(){}

