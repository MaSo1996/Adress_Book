#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>
#include <vector>

using namespace std;

class Adresat
{
    int id, idUzytkownika;
    string imie, nazwisko, numerTelefonu, email, adres;

public:
    void ustawId(int noweId);
    void ustawIdUzytkownika(int noweIdUzytkownika);
    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string nowyNumerTelefonu);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);

    int pobierzId();
    int pobierIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();

    Adresat(int ID = 0, int ID_UZYTKOWNIKA = 0, string IMIE = "", string NAZWISKO = "", string NUMER_TELEFONU = "", string EMAIL = "", string ADRES = "")
    {
        id = ID;
        idUzytkownika = ID_UZYTKOWNIKA;
        imie = IMIE;
        nazwisko = NAZWISKO;
        numerTelefonu = NUMER_TELEFONU;
        email = EMAIL;
        adres = ADRES;
    }
};

#endif
