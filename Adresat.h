#ifndef ADRESAT.H
#define ADRESAT.H

#include <iostream>
#include <vector>

using namespace std;

class Adresat
{
    int id;
    string imie, nazwisko, numerTelefonu, email, adres;

public:
    void ustawId();
    void ustawImie();
    void ustawNazwisko();
    void ustawNumerTelefonu();
    void ustawEmail();
    void ustawAdres();

    int pobierzId();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();
};

#endif
