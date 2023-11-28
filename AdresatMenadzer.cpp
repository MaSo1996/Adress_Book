#include "AdresatMenadzer.h"

int AdresatMenadzer::pobierzidZalogowanegoUzytkownika()
{
    return idZalogowanegoUzytkownika;
}
void AdresatMenadzer::ustawIdZalogowanegoUzytkownika(int noweId)
{
    idZalogowanegoUzytkownika = noweId;
}

void AdresatMenadzer::dodajAdresata()
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    system("pause");
}

Adresat AdresatMenadzer::podajDaneNowegoAdresata()
{
    Adresat adresat;

    adresat.ustawId(plikZAdresatami.pobierzIdOstatniegoAdresata() + 1);
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
        cout << "Id: " << adresaci[i].pobierzId() << endl;
        cout << "Imie: " << adresaci[i].pobierzImie() << endl;
        cout << "Nazwisko: " << adresaci[i].pobierzNazwisko() << endl;
        cout << "Numer Telefonu: " << adresaci[i].pobierzNumerTelefonu() << endl;
        cout << "Adres: " << adresaci[i].pobierzAdres() << endl;
        cout << "Email:" << adresaci[i].pobierzEmail() << endl << endl;
    }
    system("pause");
}

void AdresatMenadzer::wczytajAdresatowZPliku()
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}
