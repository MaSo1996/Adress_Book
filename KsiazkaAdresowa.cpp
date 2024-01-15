#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenadzer.logowanieUzytkownika();
    if (czyUzytkownikJestZalogowany())
    {
        adresatMenadzer = new AdresatMenadzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenadzer.wylogujUzytkownika();
    delete adresatMenadzer;
    adresatMenadzer = NULL;
}

void KsiazkaAdresowa::wczytajAdresatowZalogowanegoUzytkownikaZPliku()
{
    adresatMenadzer->wczytajAdresatowZPliku();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{
    adresatMenadzer->dodajAdresata();
}

void KsiazkaAdresowa::wypiszWszystkichAdresatow()
{
    adresatMenadzer->wypiszWszystkichAdresatow();
}

void KsiazkaAdresowa::edytujAdresata()
{
    adresatMenadzer->edytujAdresata();
}

void KsiazkaAdresowa::usunAdresata()
{
    adresatMenadzer->usunAdresata();
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    return uzytkownikMenadzer.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresatMenadzer->wyszukajAdresatowPoImieniu();
}
void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresatMenadzer->wyszukajAdresatowPoNazwisku();
}
