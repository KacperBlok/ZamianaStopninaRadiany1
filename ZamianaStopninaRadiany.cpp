#include <iostream>
#include <math.h>

using namespace std;//Kacper Blok

int main()
{
    double stopnie;
cout << "Podaj kat w stopniach: ";
cin >> stopnie;
double radiany =( stopnie * M_PI ) / 180.0f;
cout << stopnie << "  stopni w radianach wynosi  "<<  radiany<<endl;
}
