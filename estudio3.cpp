#include <iostream>
using namespace std;
int main (void){

    int anito;

    cout <<"Ingresa un numero del año. " <<endl;

    cin >> anito;

    if (anito%4 == 0){

        cout << "El año seleccionado es Bisiesto" <<endl;
    }

else{
    cout << "El Año seleccionado no esBisiesto" <<endl;
}


    return 0;
}