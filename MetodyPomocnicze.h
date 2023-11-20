#ifndef METODYPOMOCNICZE.H
#define METODYPOMOCNICZE.H

#include <iostream>

using namespace std;

class MetodyPomocnicze
{
public:
    static string konwerjsaIntNaString(int liczba);
    static string wczytajLinie();
    static int konwersjaStringNaInt(string liczba);
    static char wczytajZnak();
    static char wybierzOpcjeZMenuGlownego();
    static char wybierzOpcjeZMenuUzytkownika();
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
};

#endif
