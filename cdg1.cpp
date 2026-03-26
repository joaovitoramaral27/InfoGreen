#include <iostream>
using namespace std;

int main() {
	int Cont = 0; {};
	float tensao;
	float resistencia;
		cout << "Defina a Tensao" << endl;
		cin >> tensao;
		system("cls");
		cout << "Defina a Resistencia" << endl;
		cin >> resistencia;
		system("cls");
		float corrente(tensao / resistencia);
		if (corrente > 1500) {
			cout << "Corrente de Alta Tensao Detectada: " << corrente << "Voltz" << endl;
		}
		else if (corrente == 0) {
			cout << "Corrente Inesistente" << endl;
		}
		else {
			cout << "Corrente de Baixa Tensao Detectada: " << corrente << "Voltz" << endl;
		}

		//---------------------------------------|
		//Parar aqui ao importar para o ARDUINO. |
		//---------------------------------------|

		char confirm;
		cout << "Continuar (S)" << endl;
		cin >> confirm;
		if (confirm == 's'){
			Cont = 1;
		}
		system("cls");
		while (Cont > 0) {
			cout << "Defina a Tensao" << endl;
			cin >> tensao;
			system("cls");
			cout << "Defina a Resistencia" << endl;
			cin >> resistencia;
			system("cls");
			float corrente(tensao / resistencia);
			if (corrente > 1500) {
				cout << "Corrente de Alta Tensao Detectada: " << corrente << endl;
			}
			else if (corrente == 0) {
				cout << "Corrente Inesistente" << endl;
			}
			else {
				cout << "Corrente de Baixa Tensao Detectada: " << corrente << endl << endl;
			}
		}
		return 0;

}