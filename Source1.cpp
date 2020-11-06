#include <iostream>
#include <string>
#include <math.h>
#include "Points.cpp"

using namespace std;







int main()
{   
    debut:
	Points A,B;
    cout << "SAISIE DU POINT A" << endl;
    cout << "Tapez l'abscisse : ";
    cin >> A.x;
    cout << "Tapez l'ordonnee : ";
    cin >> A.y;
    cout << endl;
    cout << "SAISIE DU POINT B" << endl;
    cout << "Tapez l'abscisse : ";
    cin >> B.x;
    cout << "Tapez l'ordonnee : ";
    cin >> B.y ;
    cout << endl;
    
    float resultat = A.calcul(B);
    cout << resultat;
    cout << endl;
    cout << endl;
    cout << endl;
    if (resultat != 1) { goto debut; }
	return 0;
}