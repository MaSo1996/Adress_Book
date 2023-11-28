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
    int id, idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres;

    cout << "Podaj imie: ";
    imie = MetodyPomocnicze::wczytajLinie();
    //adresat.ustawImie(zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.imie));

    cout << "Podaj nazwisko: ";
    nazwisko = MetodyPomocnicze::wczytajLinie();
    //adresat.ustawNazwisko(zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.nazwisko));

    cout << "Podaj numer telefonu: ";
    numerTelefonu = MetodyPomocnicze::wczytajLinie();

    cout << "Podaj email: ";
    email = MetodyPomocnicze::wczytajLinie();

    cout << "Podaj adres: ";
    adres = MetodyPomocnicze::wczytajLinie();

    Adresat adresat(plikZAdresatami.pobierzIdOstatniegoAdresata() + 1,idZalogowanegoUzytkownika,imie,nazwisko,numerTelefonu,email,adres);

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
