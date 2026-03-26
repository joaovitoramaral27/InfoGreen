#include<iostream>
using namespace std;

int main() {
	float KWh;
	float tarifaMG = 0.87;
	float bandeira;
	float CIP = 60.0;
	float disp{};
	cout << "Valor do KWh" << endl;
	cin >> KWh;
	system("cls");
	if (KWh <= 100 and KWh > -1) {
		bandeira = 1.885;
	} else if (KWh > 100 and KWh <= 200) {
		bandeira = 4.463;
	} else if (KWh > 200) {
		bandeira = 7.877;
	} else {
		cout << "Impossivel de se calcular" << endl;
		return 0;
	}
	if (KWh >= 30 and KWh < 50) {
		disp = 25.0;
	}
	else if (KWh >= 50 and KWh < 100) {
		disp = 42.0;
	}
	else if (KWh >= 100) {
		disp = 85;
	}
	float valorTOTAL = KWh * tarifaMG + bandeira + CIP + disp;
	cout << "O valor da sua conta eh igual a: R$" << valorTOTAL;
	return 0;
}