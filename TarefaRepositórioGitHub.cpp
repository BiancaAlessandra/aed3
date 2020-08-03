#include <iostream>

using namespace std;

int main(){
	string nome;
	int ano;
	string resposta;

	cout << "Hello world!" << endl;
	cout << "Qual o seu nome?" << endl;
	cin >> nome;
	cout << "Que ano nasceu?" << endl;
	cin >> ano;
	cout << "Nasceu antes de 03 de Agosto? [s/n]" << endl;
	cin >> resposta;
	
	if (resposta == "n"){
	cout << nome << " tem " << 2019-ano << " anos" << endl; 
	} else {
		cout << nome << " tem " << 2020-ano << " anos" << endl; 
	}
		return 0; 
}