#ifndef KSIAZKAADRESOWA.H
#define KSIAZKAADRESOWA.H

#include <iostream>

#include "UzytkownikMenadzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenadzer uzytkownikMenadzer;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenadzer(nazwaPlikuZUzytkownikami)
    {
        uzytkownikMenadzer.wczytajUzytkownikowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void wylogujUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
};

#endif
