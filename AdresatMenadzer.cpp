#include "AdresatMenadzer.h"

void AdresatMenadzer::dodajAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika, plikZAdresatami.pobierzIdOstatniegoAdresata());

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    plikZAdresatami.ustawIdOstatniegoAdresata(plikZAdresatami.pobierzIdOstatniegoAdresata() + 1);
}

Adresat AdresatMenadzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());
    //adresat.ustawImie(zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.imie));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());
    //adresat.ustawNazwisko(zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.nazwisko));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}

void AdresatMenadzer::wypiszWszystkichAdresatow()
{
    for (size_t i = 0; i < adresaci.size(); i++)
    {
        cout << adresaci[i].pobierzId() << endl;
        cout << adresaci[i].pobierzImie() << endl;
        cout << adresaci[i].pobierzNazwisko() << endl;
        cout << adresaci[i].pobierzNumerTelefonu() << endl;
        cout << adresaci[i].pobierzAdres() << endl;
        cout << adresaci[i].pobierzEmail() << endl;
    }
}

void AdresatMenadzer::wczytajAdresatowZPliku(int idZalogowanegoUzytkownika)
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}
