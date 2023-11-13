#include <iostream>
#include "KsiazkaAdresowa.h"
#include "UzytkownikMenadzer.h"

using namespace std;

int main()
{
    int idZalogowanego;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt","Adresaci.txt");
    ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    idZalogowanego = ksiazkaAdresowa.logowanieUzytkownika();
    cout << idZalogowanego;
    system("pause");
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.dodajAdresata(idZalogowanegoUzytkownika,0);
    return 0;
}
