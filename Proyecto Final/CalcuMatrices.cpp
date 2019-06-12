#include<iostream>
#include<windows.h>
#include<math.h>
#include<string>
using namespace std;

int op;
int m, n, a, b;
float Mat1[10][10], Mat2[10][10], Mat3[10][10], MatV[4][4], MatVR[4][4], Puntos[4][4];
void IngresarMatriz();
void ValidarDiezFilas1();
void ValidarDiezColumnas1();
void ValidarDiezFilas2();
void ValidarDiezColumnas2();
void OperarMatrices();
void SumarMatrices();
void RestarMatrices();
void MultiplicarMatrices();
void MatrizVector();




int main() {
	locale::global(locale("Spanish"));
	cout << "Programa para operar matrices" << endl;
	cout << "¿Qué deseas hacer? \n 1.-Ingresar matrices para operar \n 2.-Ingresar matriz para punto vector \n 3.-Salir" << endl;
	cin >> op;

	switch (op) {

	case 1:
		MessageBox(NULL, "Se ingresara una nueva matriz", "Recordatorio", NULL);
		IngresarMatriz();
		break;
	case 2:
		MatrizVector();
		break;
	case 3:
		exit(1);
		break;
	default:
		system("cls");
		main();
	}
	return 0;
}

void IngresarMatriz() {
	//Este ciclo sirve para ingresar los datos de la primera matriz
	cout << "Ingrese el número de filas de la primera matriz (No debe ser mayor a diez)" << endl;
	ValidarDiezFilas1();
	cout << "Ingrese el número de Columnas de la primera matriz (No debe ser mayor a diez)" << endl;
	ValidarDiezColumnas1();
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "Matriz 1" << endl;
			cout << "Inserte el valor en la posición " << i << "," << j << endl;
			cin >> Mat1[i][j];
			system("cls");
		}
	}
	//Este ciclo sirve para ingresar los datos de la segunda matriz
	cout << "Ingrese el número de filas de la segunda matriz (No debe ser mayor a diez)" << endl;
	ValidarDiezFilas2();
	cout << "Ingrese el número de Columnas de la segunda matriz (No debe ser mayor a diez)" << endl;
	ValidarDiezColumnas2();
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "Matriz 2" << endl;
			cout << "Inserte el valor en la posición " << i << "," << j << endl;
			cin >> Mat2[i][j];
			system("cls");
		}
	}
	//Este ciclo imprime la primera matriz
	cout << "Matriz 1" << endl;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << Mat1[i][j] << "\t";
		}
		cout << endl;
	}
	//Este ciclo imprime la segunda Matriz
	cout << "Matriz 2" << endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << Mat2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "_______________________________________________________" << endl;
	cout << "¿Esta todo correcto? 1.-Sí 2.-No" << endl;
	cin >> op;
	if (op == 2) {
		cout << "Se volveran a ingresar los datos de la matriz" << endl;
		cout << "Cargando";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		cout << ".";
		Sleep(1000);
		IngresarMatriz();
	}

	OperarMatrices();
}
void ValidarDiezFilas1() {
	cin >> m;
	if (10 < m) {

		MessageBox(NULL, "No se pueden poner más de 10 filas :(", "Sorry bro", NULL);
		cout << "¿Quieres continuar? 1.-Si 2.-No" << endl;
		cin >> op;
		if (op == 2) {
			main();
		}
		ValidarDiezFilas1();
	}
	if (m <= 0) {
		MessageBox(NULL, "No te pases de listo, poner 0 filas o menos no se puede -_-", "No se puede", NULL);
		cout << "¿Quieres continuar? 1.-Si 2.-No" << endl;
		cin >> op;
		if (op == 2) {
			main();
		}
		ValidarDiezFilas1();
	}
}
void ValidarDiezColumnas1() {
	cin >> n;
	if (10 < n) {
		MessageBox(NULL, "No se pueden poner más de 10 Columnas :(", "Sorry bro", NULL);
		cout << "¿Quieres continuar? 1.-Si 2.-No" << endl;
		cin >> op;
		if (op == 2) {
			main();
		}
		ValidarDiezColumnas1();
	}
	if (n <= 0) {
		MessageBox(NULL, "No te pases de listo, poner 0 columnas o menos es como sostener un edificio sin ellas -_-", "No se puede", NULL);
		cout << "¿Quieres continuar? 1.-Si 2.-No" << endl;
		cin >> op;
		if (op == 2) {
			main();
		}
		ValidarDiezColumnas1();
	}
}
void ValidarDiezFilas2() {
	cin >> a;
	if (10 < a) {

		MessageBox(NULL, "No se pueden poner más de 10 filas :(", "Sorry bro", NULL);
		cout << "¿Quieres continuar? 1.-Si 2.-No" << endl;
		cin >> op;
		if (op == 2) {
			main();
		}
		ValidarDiezFilas2();
	}
	if (a <= 0) {
		MessageBox(NULL, "No te pases de listo, poner 0 filas o menos no se puede -_-", "No se puede", NULL);
		cout << "¿Quieres continuar? 1.-Si 2.-No" << endl;
		cin >> op;
		if (op == 2) {
			main();
		}
		ValidarDiezFilas2();
	}
}
void ValidarDiezColumnas2() {
	cin >> b;
	if (10 < b) {
		MessageBox(NULL, "No se pueden poner más de 10 Columnas :(", "Sorry bro", NULL);
		cout << "¿Quieres continuar? 1.-Si 2.-No" << endl;
		cin >> op;
		if (op == 2) {
			main();
		}
		ValidarDiezColumnas2();
	}
	if (b <= 0) {
		MessageBox(NULL, "No te pases de listo, poner 0 columnas o menos es como sostener un edificio sin ellas -_-", "No se puede", NULL);
		cout << "¿Quieres continuar? 1.-Si 2.-No" << endl;
		cin >> op;
		if (op == 2) {
			main();
		}
		ValidarDiezColumnas2();
	}
}
void OperarMatrices() {
	cout << "¿Qué desea hacer con las matrices? \n1.-Sumar \n2.-Restar \n3.-Multiplicar \n4.-Matriz por Vector" << endl;
	cin >> op;
	cout << endl;
	switch (op) {
	case 1:
		SumarMatrices();
		break;
	case 2:
		RestarMatrices();
		break;
	case 3:
		MultiplicarMatrices();
		break;
	case 4:
		MatrizVector();
		break;
	}
}

void SumarMatrices() {
	bool Hola = true;
	if (m == a && n == b) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << Mat1[i][j] + Mat2[i][j] << "\t";
			}
			cout << endl;
		}
		Hola = false;
		system("pause");
	}
	else if (Hola) {
		MessageBox(NULL, "Ups",
			"Las matrices no pueden ser sumadas debido a que no tienen las mismas dimensiones", NULL);
		cout << "¿Quieres repetir el proceso del llenado de matrices?" << endl;
		cout << "1.-Si 2.-No (Salir)" << endl;
		cin >> op;
		if (op == 1) IngresarMatriz();
		if (op == 2) exit(1);
	}
	cout << "¿Desea hacer otra operación? ó ¿Desea salir?" << endl;
	cout << "1.-Hacer otra operacion con las mismas matrices \n2.-Salir" << endl;
	cin >> op;
	if (op == 1) OperarMatrices();
	if (op == 2) exit(1);
}
void RestarMatrices() {
	bool Hola = true;
	if (m == a && n == b) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << Mat1[i][j] - Mat2[i][j] << "\t";
			}
			cout << endl;
		}
		Hola = false;
		system("pause");
	}
	else if (Hola) {
		MessageBox(NULL, "Ups",
			"Las matrices no pueden ser restadas debido a que no tienen las mismas dimensiones", NULL);
		cout << "¿Quieres repetir el proceso del llenado de matrices?" << endl;
		cout << "1.-Si 2.-No (Salir)" << endl;
		cin >> op;
		if (op == 1) IngresarMatriz();
		if (op == 2) exit(1);
	}
	cout << "¿Desea hacer otra operación? ó ¿Desea salir?" << endl;
	cout << "1.-Hacer otra operacion con las mismas matrices \n2.-Salir" << endl;
	cin >> op;
	if (op == 1) OperarMatrices();
	if (op == 2) exit(1);

}
void MultiplicarMatrices() {

	bool Hola = true;
	if (n == a) {
		Hola = false;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < n; k++) {
					Mat3[i][j] += Mat1[i][k] * Mat2[k][j];
				}
			}
		}
	}
	system("cls");

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "\t" << Mat3[i][j] << "\t";
		}
		cout << endl;
	}

	if (Hola) cout << "No se puede multiplicar esta matriz" << endl;
	system("pause");

}

void MatrizVector() {

	cout << "Ingrese la matriz que se multiplicara por el vector" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Inserte el valor en la posición " << i << "," << j << endl;
			cin >> MatV[i][j];
			system("cls");
		}
	}
	cout << "Ingrese los valores de cada punto (x,y,z)" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 1; j++) {
			cin >> Puntos[i][j];
			/*if (i = 4) Puntos[i][j] = 1;*/
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				MatVR[i][j] += MatV[i][k] * Puntos[k][j];
			}
		}
	}
	cout << "El resultado es: " << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 1; j++) {
			cout << "[" << "\t";
			cout << MatVR[i][j] << "\t\t";
			cout << "]" << endl;
		}
		cout << endl;
	}
	
	system("pause");
}
