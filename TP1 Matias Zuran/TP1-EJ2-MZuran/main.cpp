#include <iostream>

using namespace std;

int main()
{
    float m1 = 0;
    float m2 = 0;
    float b1 = 0;
    float b2 = 0;
    cout << "rectas:" << endl << "y1 = m1 * x + b1" << endl << "y2 = m2 * x + b2" << endl << endl;

    cout << "ingrese el valor de m1" << endl;
    cin >> m1;

    cout << "ingrese el valor de m2" << endl;
    cin >> m2;

    cout << "ingrese el valor de b1" << endl;
    cin >> b1;

    cout << "ingrese el valor de b2" << endl;
    cin >> b2;

    if (m1 != m2 && b1!= b2)
    {
        cout << "Las rectas se intersectaran en x= " << (b2 - b1) * 1/(m1 - m2);
    }
    else
    {
        if (m1 == m2 && b1 != b2)
        {
            cout << "Las rectas no tienen interseccion";
        }
        else
        {
            cout << "Las rectas se interseccionan en todos sus puntos, son iguales";
        }
    }
}
