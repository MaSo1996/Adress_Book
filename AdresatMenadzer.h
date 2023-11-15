#ifndef ADRESATMENADZER.H
#define ADRESATMENADZER.H

#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenadzer.h"

class AdresatMenadzer
{
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

public:
    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresata(int noweId);
    AdresatMenadzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {}
    void dodajAdresata(int idZalogowanegoUzytkownika);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    void wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);
    void wypiszWszystkichAdresatow();
};

#endif // ADRESATMENADZER
