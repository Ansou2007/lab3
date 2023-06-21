#include <iostream>
using namespace std;
int main()
{

    int a;
    int b;
    cout << "Donne le premier chiffre" << endl;
    cin >> a;
    cout << "Donne le deuxieme chiffre" << endl;
    cin >> b;
    cout << "La somme de a + b donne: " << a + b << endl;
    cout << "Le produit de a x b donne : " << a * b << endl;
    cout << "Le quotient de a : b donne : " << a / b << endl;
    cout << "Le reste du quotient donne : " << a % b << endl;
    return 0;
}