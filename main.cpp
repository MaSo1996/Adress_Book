#include <iostream>
#include "KsiazkaAdresowa.h"
#include "UzytkownikMenadzer.h"

using namespace std;

int main()
{
    int idZalogowanego;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichAdresatow();
    return 0;
}
