#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <random>
#include <chrono>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
    char name[50];

    cout << "\nEnter your name: ";
    cin.get(name, 50);

    cout << "\n\n\t[+]Card Holder :: " << name << endl;

    cout << "\nGenerating Number Card.... \n";
    Sleep(1500);
    srand(time(NULL));
    cout << "\t[+]Number Card :: ";
    int n1 = rand() % 9999;
    int n2 = rand() % 9999;
    int n3 = rand() % 9999;
    int n4 = rand() % 9999;
    cout << setw(4) << setfill('0') << n1 << ' '
      << setw(4) << n2 << ' '
      << setw(4) << n3 << ' '
      << setw(4) << n4 << endl;

    cout << "\nGenerating Exp. Date....\n";
    Sleep(1500);
    mt19937_64 mt{static_cast<unsigned long>(chrono::high_resolution_clock::now().time_since_epoch().count())};
    uniform_int_distribution<int> dist{1, 12};
    mt19937 mt1{static_cast<unsigned long>(chrono::high_resolution_clock::now().time_since_epoch().count())};
    uniform_int_distribution<int> dist1{23, 31};
    for (auto i{0}; i < 1; ++i) {
        cout << "\t[+]Expiration Date M/Y :: " << setw(2) << setfill('0') << dist(mt) << "/" << setw(2) << setfill('0') << dist1(mt1) << endl;
    }

    cout << "\nGenerating CVC code....\n";
    Sleep(1500);
    int cvc2 = rand() % 200;
    cout << "\t[+]CVC code :: " << setw(3) << setfill('0') << cvc2 << endl;


    return 0;
}
