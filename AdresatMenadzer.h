#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenadzer.h"

class AdresatMenadzer
{
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    int idZalogowanegoUzytkownika;

public:
    int pobierzidZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int noweId);

    AdresatMenadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {}

    void dodajAdresata(int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);
    void wypiszWszystkichAdresatow();
};

#endif // ADRESATMENADZER
