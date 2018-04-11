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
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){
	float pago[13]={pago_estacionamiento(-1), pago_estacionamiento(3), pago_estacionamiento(6),pago_estacionamiento(17), pago_estacionamiento(26),
	pago_estacionamiento(0),pago_estacionamiento(1),pago_estacionamiento(5), pago_estacionamiento(6),pago_estacionamiento(10), pago_estacionamiento(11),pago_estacionamiento(24), pago_estacionamiento(25)};
	string verificacion[13];
	verificacion[0]= (pago[0]==-1)? "Pass":"Fail";
	verificacion[1]= (pago[1]==30)? "Pass":"Fail";
	verificacion[2]= (pago[2]==54)? "Pass":"Fail";
	verificacion[3]= (pago[3]==119)? "Pass":"Fail";
	verificacion[4]= (pago[4]==-1)? "Pass":"Fail";
	verificacion[5]= (pago[5]==-1)? "Pass":"Fail";
	verificacion[6]= (pago[6]==10)? "Pass":"Fail";
	verificacion[7]= (pago[7]==50)? "Pass":"Fail";
	verificacion[8]= (pago[8]==54)? "Pass":"Fail";
	verificacion[9]= (pago[9]==90)? "Pass":"Fail";
	verificacion[10]= (pago[10]==77)? "Pass":"Fail";
	verificacion[11]= (pago[11]==168)? "Pass":"Fail";
	verificacion[12]= (pago[12]==-1)? "Pass":"Fail";

    cout << "TEST CASES" << endl;
    cout << "Equivalence Partitioning" << endl;
    cout << "Test data  Expected  Actual  Pass/Fail"<<endl;
    cout << "-1 hora      ERROR    " << pago[0] << "       " <<verificacion[0] << endl;
    cout << "3 horas      30       " << pago[1] << "      " <<verificacion[1] << endl;
    cout << "6 horas      54       " << pago[2] << "      " <<verificacion[2] << endl;
    cout << "17 horas     119      " << pago[3] << "     " <<verificacion[3] << endl;
    cout << "26 horas     ERRO     " << pago[4] << "     " <<verificacion[4] << endl;
    cout << endl;
    cout << "Boundary Value Analysis"<< endl;
    cout << "Test data  Expected  Actual  Pass/Fail"<<endl;
    cout << "0 horas      ERROR    " << pago[5] << "       " <<verificacion[5] << endl;
    cout << "1 hora       10       " << pago[6] << "      " <<verificacion[6] << endl;
    cout << "5 horas      50       " << pago[7] << "      " <<verificacion[7] << endl;
    cout << "6 horas      54       " << pago[8] << "      " <<verificacion[8] << endl;
    cout << "10 horas     90       " << pago[9] << "      " <<verificacion[9] << endl;
    cout << "11 horas     77       " << pago[10] << "       " <<verificacion[10] << endl;
    cout << "24 horas     168      " << pago[11] << "     " <<verificacion[11] << endl;
    cout << "25 horas     ERROR    " << pago[12] << "     " <<verificacion[12] << endl;
    
    cout << endl;
}

int main()
{

    casos_de_prueba();

	return 0;
}
