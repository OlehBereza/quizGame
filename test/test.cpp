
#include <cstdlib>
#include <iostream>
#include <ctime>



using namespace std;

class gracz {
public:

    string imie;
    string nazwisko;
    int wybranaTema;
    int wybranaTrudnosc;
    void wybierzTemat()
    {
        cout << " Wybierz Nr tematu\n";
        cout << "1-Temat nr.1: Morze Baltyckie i Polska\n";
        cout << "2-Temat nr.2: Zabawne pytania\n";
        cout << "3-Temat nr.3: Wiedza o samochodzie\n";
        cout << "Wybierasz quiz: ";
        cin >> wybranaTema;
    }
    void wybierzTrudnosc()
    {
        cout << "Podaj Nr trudosci \n ";
        cout << "1-light: dostajesz 5 zyc \n";
        cout << "2-light: dostajesz 3 zyc \n";
        cout << "3-light: dostajesz 1 zycie \n";
        cin >> wybranaTrudnosc;
    }
   
};

class trudnosc{

public:
    int level;
    int iloscZycia;


    void pzydzielanieZycia()
    {

        if (level == 1) {
            iloscZycia = 5;

        }
        else if (level == 2) {
            iloscZycia = 3;
        }
        else if (level == 3) {
            iloscZycia = 1;
     }
    }

    void wyswietlZycia()
    {
        cout << "Masz " << iloscZycia << endl;
    }
};
class tematyka {
public:
    int temat;
    void przydzielanieTematu() {
        if (temat == 1) {
            temat = 1;
        }
        else if (temat == 2) {
            temat = 2;
        }
        else if (temat == 3) {
            temat = 3;
        }
    }
    
    


};
class pytania
{
public:
    int pomocPyt = 1;
    int l;
    int odp;
    int pkt = 0;
    void temat1() {
         
          while (pomocPyt <= 8) {
           
                switch (pomocPyt) {
                case 1:
                    if (l > 0) {
                        cout << "Pytanie 1: Morze Baltyckie laczy sie z Morzem Polnocnym?\n";
                        cout << "Odp 1: Tak, laczy sie\n";
                        cout << "Odp 2:  Nie laczy sie\n";
                       
                        cin >> odp;
                        if (odp == 1) {
                            cout << "Odpowiedz prawidlowa , dostajesz punkta\n";
                            pkt++;
                        }
                        else {
                            cout << "Zla odpowiedz , minusa dostajesz\n";
                            l--;
                        }
                        pomocPyt++;
                        break;
                    } pomocPyt = 9;

                        
                case 2:
                    if (l > 0) {
                    cout << "Pytanie 2: Bałtyk jest bardziej zasolony niż Morze Martwe?\n";
                    cout << "Odp 1: Tak\n";
                    cout << "Odp 2: Nie\n";
                    cout << "Odp 3:Pol na pol\n";
                    cin >> odp;
                    if (odp == 2) {
                        cout <<" Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;
                    
                    break;
                    } pomocPyt = 9;
                case 3:
                    if (l > 0) {
                        cout << "Pytanie 3: Jurata jest najdalej wysynięta miejscowość na Mierzei Helskiej";
                        cout << "Odp 1: Tak\n";
                        cout << "Odp 2: Nie\n";
                        cout << "Odp 3:Nie ma takiej miejscowości\n";
                        cin >> odp;
                        if (odp == 2) {
                            cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                            pkt++;
                        }
                        else {
                            cout << "Zla odpowiedz , minusa dostajesz\n";
                            l--;
                        }
                        pomocPyt++;

                        break;
                    } pomocPyt = 9;
                case 4:
                    if (l > 0) {
                        cout << "Pytanie 4: Klif Orłowski znajduje się w:";
                        cout << "Odp 1:  Gdynia\n";
                        cout << "Odp 2: Sopot\n";
                        cout << "Odp 3:Gdańsk\n";
                        cout << "Odp 4: Nie ma poprawnej odpowiedzi\n";
                        cin >> odp;
                        if (odp == 1) {
                            cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                            pkt++;
                        }
                        else {
                            cout << "Zla odpowiedz , minusa dostajesz\n";
                            l--;
                        }
                        pomocPyt++;

                        break;
                    } pomocPyt = 9;
                case 5:
                    if (l > 0) {
                        cout << "Pytanie 5: Latarnia Morska Stilo znajduje sie w miejscowości :";
                        cout << "Odp 1:Jurata\n";
                        cout << "Odp 2:Osetnik\n";
                        cout << "Odp 3:Gdańsk\n";
                        cout << "Odp 4: Nie ma poprawnej odpowiedzi\n";
                        cin >> odp;
                        if (odp == 2) {
                            cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                            pkt++;
                        }
                        else {
                            cout << "Zla odpowiedz , minusa dostajesz\n";
                            l--;
                        }
                        pomocPyt++;

                        break;
                    } pomocPyt = 9;
                case 6:
                    if (l > 0) {
                        cout << "Pytanie 6:Krajami bałtyckimi nazywa się  :";
                        cout << "Odp 1: Danię i Finlandię\n";
                        cout << "Odp 2: Finlandię i Szwecję\n";
                        cout << "Odp 3:Wszystkie\n";
                        cout << "Odp 4: Nie ma poprawnej odpowiedzi\n";
                        cin >> odp;
                        if (odp == 4) {
                            cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                            pkt++;
                        }
                        else {
                            cout << "Zla odpowiedz , minusa dostajesz\n";
                            l--;
                        }
                        pomocPyt++;

                        break;
                    } pomocPyt = 9;
                case 7:
                    if (l > 0) {
                        cout << "Pytanie 7: Mierzeja Wiślana:";
                        cout << "Odp 1:częściowo znajduje się na terytorium Polski, a częściowo - na terenie Rosji\n";
                        cout << "Odp 2: częściowo znajduje się na terenie Rosji, a częściowo - na terytorium Polski\n";
                        cout << "Odp 3:Całkiem na terytorium Polski\n";
                        cout << "Odp 4: Całkiem na terenie Rosji\n";
                        cin >> odp;
                        if (odp == 1) {
                            cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                            pkt++;
                        }
                        else {
                            cout << "Zla odpowiedz , minusa dostajesz\n";
                            l--;
                        }
                        pomocPyt++;

                        break;
                    } pomocPyt = 9;
                case 8:
                    if (l > 0) {
                        cout << "Pytanie 8: Zatoka Botnicka jest największa zatoka Morza Bałtyckiego";
                        cout << "Odp 1: To jest Prawda\n";
                        cout << "Odp 2: To jest Fałsz\n";
                        cout << "Odp 3: Nie ma takiej zatoki\n";
                        
                        cin >> odp;
                        if (odp == 1) {
                            cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                            pkt++;
                        }
                        else {
                            cout << "Zla odpowiedz , minusa dostajesz\n";
                            l--;
                        }
                        pomocPyt++;

                        break;
                    } pomocPyt = 9;
              

                }
           
           }
          cout << "----Koniec testu----\n";
         
    }
    void temat2() {
        while (pomocPyt <= 8) {

            switch (pomocPyt) {
            case 1:
                if (l > 0) {
                    cout << "Pytanie 1: Gdzie są rzeki bez wody?\n";
                    cout << "Odp 1:  Na mapach, globusach i obrazkach\n";
                    cout << "Odp 2:   W Afryce. Wyschnięte koryta rzek\n";
                    cout << "Odp 3: Gdzieś w Europie\n";

                    cin >> odp;
                    if (odp == 1) {
                        cout << "Odpowiedz prawidlowa , dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;
                    break;
                } pomocPyt = 9;


            case 2:
                if (l > 0) {
                    cout << "Pytanie 2:  Który miesiąc ma 28 dni?\n";
                    cout << "Odp 1:  Żaden\n";
                    cout << "Odp 2:  Luty\n";
                    cout << "Odp 3:Każdy\n";
                    cin >> odp;
                    if (odp == 3) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;
            case 3:
                if (l > 0) {
                    cout << "Pytanie 3: Które koło najmniej się zużywa na zakrętach?";
                    cout << "Odp 1: Prawe przednie\n";
                    cout << "Odp 2:  Lewe tylne\n";
                    cout << "Odp 3:Zapasowe\n";
                    cin >> odp;
                    if (odp == 3) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;
            case 4:
                if (l > 0) {
                    cout << "Pytanie 4: Co jest szare i kopie? ";
                    cout << "Odp 1: Cień koparki\n";
                    cout << "Odp 2: Szpadel\n";
                    cout << "Odp 3:Jakaś szara maszyna\n";
           
                    cin >> odp;
                    if (odp == 1) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;
            case 5:
                if (l > 0) {
                    cout << "Pytanie 5: Jak najlepiej stracić na wadze? ";
                    cout << "Odp 1:Zdrowo jeść\n";
                    cout << "Odp 2:Kupić wagę drogo i sprzedać tanio\n";
                    cout << "Odp 3: Zepsuć wagę\n";
                   
                    cin >> odp;
                    if (odp == 2) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;
            case 6:
                if (l > 0) {
                    cout << " Jakie polskie słowo pisze się inaczej, a mówi się inaczej? :";
                    cout << "Odp 1: Inaczej\n";
                    cout << "Odp 2: Nie ma takiego słowa\n";
                    cout << "Odp 3:Jest mnóstwo takich słów\n";
                    
                    cin >> odp;
                    if (odp == 1) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;
            case 7:
                if (l > 0) {
                    cout << "Pytanie 7: Czym się je? Rękami czy rękoma? ";
                    cout << "Odp 1:Rękami\n";
                    cout << "Odp 2: Rękoma\n";
                    cout << "Odp 3:Ustami\n";
                 
                    cin >> odp;
                    if (odp == 3) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;
            case 8:
                if (l > 0) {
                    cout << "Pytanie 8: Jakich kamieni w morzu jest najwięcej?";
                    cout << "Odp 1: Jasnych\n";
                    cout << "Odp 2:Mokrych\n";
                    cout << "Odp 3:  Bursztynów\n";

                    cin >> odp;
                    if (odp == 2) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;


            }

        }
        cout << "----Koniec testu----\n";
    }
    void temat3() {
        while (pomocPyt <= 8) {

            switch (pomocPyt) {
            case 1:
                if (l > 0) {
                    cout << "Pytanie 1: Numer VIN składa się z\n";
                    cout << "Odp 1: 12 znaków\n";
                    cout << "Odp 2: 15 znaków\n";
                    cout << "Odp 3: 17 znaków\n";
                    cout << "Odp 4: 20 znaków\n";

                    cin >> odp;
                    if (odp == 3) {
                        cout << "Odpowiedz prawidlowa , dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;
                    break;
                } pomocPyt = 9;


            case 2:
                if (l > 0) {
                    cout << "Pytanie 2: Ile wynosi minimalna głębokość bieżnika opony samochodowej w Polsce ?\n";
                    cout << "Odp 1: 1,2 mm\n";
                    cout << "Odp 2: 1,6 mm\n";
                    cout << "Odp 3:1,8 mm\n";
                    cin >> odp;
                    if (odp == 2) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;
            case 3:
                if (l > 0) {
                    cout << "Pytanie 3: Jakie miasto w Polsce jako pierwsze zakupiło całkowicie elektryczne autobusy ?";
                    cout << "Odp 1: Kraków\n";
                    cout << "Odp 2: Ostrołęka\n";
                    cout << "Odp 3:Warszawa\n";
                    cin >> odp;
                    if (odp == 2) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;
            case 4:
                if (l > 0) {
                    cout << "Pytanie 4:  Do pomiaru spadku napięcia podczas rozruchu na akumulatorze należy użyć woltomierza o zakresienpomiarowym ";
                    cout << "Odp 1:  2VDC\n";
                    cout << "Odp 2: 2 VAC\n";
                    cout << "Odp 3:20 VAC\n";
                    cout << "Odp 4:: 20VDC\n";

                    cin >> odp;
                    if (odp == 4) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;
            case 5:
                if (l > 0) {
                    cout << "Pytanie 5: Prąd elektryczny to? ";
                    cout << "Odp 1:Ukierunkowany przepływ ładunków obojętnych.\n";
                    cout << "Odp 2:Swobodny przepływ ładunków ujemnych.\n";
                    cout << "Odp 3: Uporządkowany ruch ładunków elektrycznych.\n";

                    cin >> odp;
                    if (odp == 3) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;
            case 6:
                if (l > 0) {
                    cout << " Pytanie 6: Jak często wg polskich przepisów należy wykonywać badanie techniczne autobusu ? ";
                    cout << "Odp 1: pierwsze badanie po upływie 3 lat od momentu pierwszej rejestracji, kolejne po 2 latach, następnie co roku\n";
                    cout << "Odp 2: pierwsze badanie po upływie 3 lat od momentu pierwszej rejestracji, kolejne co roku\n";
                    cout << "Odp 3:pierwsze badanie po upływie 2 lat od momentu pierwszej rejestracji, kolejne co roku\n";
                    cout << "Odp 4:pierwsze badanie po upływie roku od momentu pierwszej rejestracji, kolejne co pół roku\n";
                    cin >> odp;
                    if (odp == 4) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;
            case 7:
                if (l > 0) {
                    cout << "Pytanie 7:Według klasyfikacji SAE (Society of Automotive Engineers) 10W to olej  ";
                    cout << "Odp 1: Zimowy \n";
                    cout << "Odp 2: Wielosezonowy\n";
                    cout << "Odp 3:Specjalny\n";

                    cin >> odp;
                    if (odp == 1) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;
            case 8:
                if (l > 0) {
                    cout << "Pytanie 8: Która żarówka jest jednocześnie źródłem światła mijania i drogowego ?";
                    cout << "Odp 1: H4\n";
                    cout << "Odp 2:H3\n";
                    cout << "Odp 3: H7\n";

                    cin >> odp;
                    if (odp == 1) {
                        cout << " Odpowiedz prawidlowa, dostajesz punkta\n";
                        pkt++;
                    }
                    else {
                        cout << "Zla odpowiedz , minusa dostajesz\n";
                        l--;
                    }
                    pomocPyt++;

                    break;
                } pomocPyt = 9;


            }

        }
        cout << "----Koniec testu----\n";
    }
    void wynik() {
        cout << pkt;
    }
};
class  paragon{
public:

    string name;
    string surname;
    int punkty;
    int ocena = 1;
    void wyswitlInfo() {
        if (punkty == 1) {
            ocena = 1;
        }
        else if (punkty == 2) {
            ocena = 1;
        }
        else if (punkty == 3) {
            ocena = 2;
        }
        else if (punkty == 4 ) {
            ocena = 3;
        }
        else if (punkty == 5) {
            ocena = 3;
        }
        else if (punkty == 6) {
            ocena = 4;
        }
        else if (punkty == 7 ) {
            ocena = 5;
        }
        else if (punkty == 8) {
            ocena = 5;
        }

        cout << "====================================" << endl;
        cout << "|Twoje imie: " << name << endl;
        cout << "|Twoje nazwisko:" << surname << endl;
        cout << "|Twoje punkty:" << punkty << endl;
        cout << "|Twoja ocena:" << ocena << endl;
        cout << "====================================" << endl;
    }
    
};

int main()
{
    int m;
    
    gracz gracz1;
    trudnosc trudnosc1;
    tematyka tematyka1;
    pytania pytania1;
    paragon paragon1;

   
    cout << "Wpisz swoje imie\n ";
    cin >> gracz1.imie;
    cout << "Wpisz swoje nazwisko\n ";
    cin >> gracz1.nazwisko;
    //rejestarcja

    cout << " |-------------MENU----------------------|" << endl;
    cout << " | \t START \t \t wybierz - 1 \t |" << endl;
    cout << " | \t KONIEC \t wybierz - 4 \t |" << endl;
    cout << " |---------------------------------------|" << endl;

    cin >> m;
    if (m == 1) {



        cout << "Wybierz trudnosc(1,2,3)\n ";
        gracz1.wybierzTrudnosc();
        trudnosc1.level = gracz1.wybranaTrudnosc;
        trudnosc1.pzydzielanieZycia();
        trudnosc1.wyswietlZycia();
        cout << "Wybierz tematyke(1,2,3)\n ";
        gracz1.wybierzTemat();
        tematyka1.temat = gracz1.wybranaTema;
        tematyka1.przydzielanieTematu();

        //koniec rejestracji w szpitalu
        
        
        if (tematyka1.temat == 1) {
            pytania1.l = trudnosc1.iloscZycia;
            pytania1.temat1();
        }
        else if (tematyka1.temat == 2) {
            pytania1.l = trudnosc1.iloscZycia;
            pytania1.temat2();
        }
        else if (tematyka1.temat == 3) {
            pytania1.l = trudnosc1.iloscZycia;
            pytania1.temat3();
        }
       
       
        //wynik sranej gierki

        if (pytania1.l > 0) {
            cout << "Easy win\n";
            paragon1.punkty = pytania1.pkt;
            paragon1.name = gracz1.imie;
            paragon1.surname = gracz1.nazwisko;
            paragon1.wyswitlInfo();

        }
        else {
            cout << "game over \n ";
            paragon1.punkty = pytania1.pkt;
            paragon1.name = gracz1.imie;
            paragon1.surname = gracz1.nazwisko;
            paragon1.wyswitlInfo();
        }
      
    }
    else if (m == 4) {
        exit(1);
    }
    exit(1);
}
