#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>10)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){
	float pago[5]={pago_estacionamiento(-1), pago_estacionamiento(3), pago_estacionamiento(6),pago_estacionamiento(17)};
	string verificacion[4];
	verificacion[0]= (pago[0]==-1)? "Pass":"Fail";
	verificacion[1]= (pago[1]==30)? "Pass":"Fail";
	verificacion[2]= (pago[2]==54)? "Pass":"Fail";
	verificacion[3]= (pago[3]==119)? "Pass":"Fail";

    cout << "TEST CASES" << endl;
    cout << "Test data  Expected  Actual  Pass/Fail"<<endl;
    cout << "-1 hora      ERROR    " << pago[0] << "       " <<verificacion[0] << endl;
    cout << "3 horas      30       " << pago[1] << "      " <<verificacion[1] << endl;
    cout << "6 horas      54       " << pago[2] << "      " <<verificacion[2] << endl;
    cout << "17 horas     119      " << pago[3] << "     " <<verificacion[3] << endl;
    cout << endl;
}

int main()
{

    casos_de_prueba();

	return 0;
}
