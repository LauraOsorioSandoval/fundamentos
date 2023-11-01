#pragma once
#include <string>
//lauraosorio
using namespace std;
class Usuario
{
private: 
	string login;
	string password; 
public:
	Usuario(string _login, string _password);
	bool Verificarlogin(string _login, string _password);
};

