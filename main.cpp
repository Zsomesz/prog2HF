#include <iostream>

using namespace std;

#include <iostream>
#include <stdlib.h>            //exit, sleep


int main()
{
    system("chcp 65001");       //Kódolás

    int menupontok = 6;


    while( menupontok != 0 )
    {
        system("cls");

        cout << "Telefonkonyv" << endl;
        cout << "[1] Listaz" << endl;
        cout << "[2] Kereses" << endl;
        cout << "[3] Felvesz" << endl;
        cout << "[4] Torol" << endl;
        cout << "[5] Tesztesetek" << endl;

        cout << "[0] Kilepes" << endl;
        cin >> menupontok;
        switch(menupontok)                                                   //Egyszeru switch case menü
        {
        case 0 :
            system("cls");
            cout << "Viszontlatasra!" << endl << endl;
            system("pause");
            return 0;
        case 1 :
            system("cls");

            system("pause");
            break;
        case 2 :
            system("cls");

            cout << "Keresett szemely vezetekneve:" << endl;

            cout << "Keresett szemely keresztneve:" << endl;



            system("pause");
            break;
        case 3 :
            system("cls");

            system("pause");
            break;
        case 4 :  //Törlés
            system("cls");

            cout << "Törlendő személy vezetékneve::" << endl;

            cout << "Törlendő személy keresztneve:" << endl;

            system("pause");
            break;

        case 5 :
            system("cls");

            system("pause");
            break;
        default :
            break;                      //Más gombra nem reagál
        }
    }
    return 0;
}


