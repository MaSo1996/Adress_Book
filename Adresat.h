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

    Adresat(int ID = 0, int IDUZYTKOWNIKA = 0, string IMIE = "", string NAZWISKO = "", string NUMERTELEFONU = "", string EMAIL = "", string ADRES = "")
    {
        id = ID;
        idUzytkownika = IDUZYTKOWNIKA;
        imie = IMIE;
        nazwisko = NAZWISKO;
        numerTelefonu = NUMERTELEFONU;
        email = EMAIL;
        adres = ADRES;
    }
};

#endif
