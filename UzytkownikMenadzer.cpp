#include "UzytkownikMenadzer.h"

void UzytkownikMenadzer::ustawIdZalogowanegoUzytkownika(int noweId)
{
    idZalogowanegoUzytkownika = noweId;
}

int UzytkownikMenadzer::pobierzIdZalogowanegoUzytkownika()
{
    return idZalogowanegoUzytkownika;
}

void UzytkownikMenadzer::rejestracjaUzytkownika()
{
    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

void UzytkownikMenadzer::wypiszWszystkichUzytkownikow()
{
    for (size_t i = 0; i < uzytkownicy.size(); i++)
    {
        cout << uzytkownicy[i].pobierzId() << endl;
        cout << uzytkownicy[i].pobierzLogin() << endl;
        cout << uzytkownicy[i].pobierzHaslo() << endl;
    }
}

Uzytkownik UzytkownikMenadzer::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());

    string login;
    do
    {
        cout << "Podaj login: ";
        login = MetodyPomocnicze::wczytajLinie();
        uzytkownik.ustawLogin(login);
    }
    while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    cout << "Podaj haslo: ";
    uzytkownik.ustawHaslo(MetodyPomocnicze::wczytajLinie());

    return uzytkownik;
}

int UzytkownikMenadzer::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
    {
        return 1;
    }
    else
    {
        return uzytkownicy.back().pobierzId() + 1;
    }
}

bool UzytkownikMenadzer::czyIstniejeLogin(string login)
{
    for (size_t i = 0; i < uzytkownicy.size(); i++)
    {
        if (uzytkownicy[i].pobierzLogin() == login)
        {
            cout << "Istnieje uzytkownik z takim loginem." << endl;
            return true;
        }
    }
    return false;
}

void UzytkownikMenadzer::wczytajUzytkownikowZPliku()
{
    uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
}

int UzytkownikMenadzer::logowanieUzytkownika()
{
    if (uzytkownicy.empty())
    {
        cout << "W ksiazce nie ma zadnych uzytkownikow!" << endl << endl;
        system("pause");
        return 0;
    }

    Uzytkownik uzytkownik;
    string login = "", haslo = "";

    cout << endl << "Podaj login: ";
    login = MetodyPomocnicze::wczytajLinie();

    vector <Uzytkownik>::iterator itr = uzytkownicy.begin();
    while (itr != uzytkownicy.end())
    {
        if (itr -> Uzytkownik::pobierzLogin() == login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = MetodyPomocnicze::wczytajLinie();

                if (itr -> Uzytkownik::pobierzHaslo() == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    return idZalogowanegoUzytkownika = (itr -> Uzytkownik::pobierzId());
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return idZalogowanegoUzytkownika = 0;
        }
        itr++;
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");
    return idZalogowanegoUzytkownika = 0;
}

int UzytkownikMenadzer::wylogujUzytkownika()
{
    return idZalogowanegoUzytkownika = 0;
}

void UzytkownikMenadzer::zmianaHaslaZalogowanegoUzytkownika()
{
    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    noweHaslo = MetodyPomocnicze::wczytajLinie();

    for (vector <Uzytkownik>::iterator itr = uzytkownicy.begin(); itr != uzytkownicy.end(); itr++)
    {
        if (itr -> pobierzId() == idZalogowanegoUzytkownika)
        {
            itr -> ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }
    plikZUzytkownikami.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}

bool UzytkownikMenadzer::czyUzytkownikJestZalogowany()
{
    if (idZalogowanegoUzytkownika != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
