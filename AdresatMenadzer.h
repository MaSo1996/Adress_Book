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
    int idOstatniegoAdresata;

public:
    int pobierzidZalogowanegoUzytkownika();
    void ustawIdZalogowanegoUzytkownika(int noweId);
    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata(int noweId);

    AdresatMenadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {}

    void dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void wczytajAdresatowZPliku();
    void wypiszWszystkichAdresatow();
};

#endif // ADRESATMENADZER
