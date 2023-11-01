// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
//laura osorio
#include <iostream>
#include <string>
#include "Usuario.h "

using namespace std;

int main()
{
	string usuario, contrasenia;
	Usuario usuario1("lauraosorio", "micontra");
	cout << "ingresar usuario: ";
	cin>> usuario;
	cout << "ingresar password: ";
	cin >> contrasenia ;
	if (usuario1.Verificarlogin(usuario, contrasenia))
		cout << "puedes pasar" << endl;
	else
		cout << "no puedes pasar" << endl;

}