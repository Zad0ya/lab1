#include <iostream>
#include <locale>

using namespace std;

int main(int argc, const char* argv[]) {

setlocale(LC_CTYPE, "rus");

// case 1

struct Derevo {
	float height;
		int color;
		int live;
 };
Derevo dub{ 4.56, 'b', 75};
cout << dub.live << endl;


// or 

struct car {
	float engine_l;
	int engine_power;
		int engine_torque;
		float lght;
};
car porche;
	porche.engine_power = 415;
	porche.lght = 4.32;
	porche.engine_torque = 815;
	porche.engine_l = 3.8;

car audi;
    audi.engine_power = 385;
    audi.lght = 4.74;
    audi.engine_torque = 765;
    audi.engine_l = 2.5;

car merc;
    merc.engine_power = 512;
    merc.lght = 5.61;
    merc.engine_torque = 884;
    merc.engine_l = 5.5;

car bmw;
	bmw.engine_power = 495;
	bmw.lght = 4.44;
	bmw.engine_torque = 853;
	bmw.engine_l = 4.1;

//	where to use?

	int automarka1, automarka2;
	cout << "����� ���������� � Autopodbor.ua!" << "\n" << "������� ������� ����� ����������:" << "\n" << "Audi 1 | Porche 2 | Mercedes-Benz 3 | BMW |" << endl;
	  cout << "���� ���������� 1: ";
	   cin >> automarka1;
	   cout << "���� ���������� : ";
	   cin >> automarka2;
	switch (automarka1) {
	   case 1: 
		   cout << "���������� Audi ����� ����� " << audi.engine_l << " �����, ������� �������� ������ " << audi.engine_power << " ��������� ���, � ��������� �";
		   break; 
	   case 2: 
		   cout << "���������� Porche ����� ����� " << porche.engine_l << " �����, ������� �������� ������ " << porche.engine_power << " ��������� ���, � ��������� �";
		   break;
	   case 3:
		   cout << "���������� Mercedes-Benz ����� ����� " << merc.engine_l << " �����, ������� �������� ������ " << merc.engine_power << " ��������� ���, � ��������� �";
		   break;
	   case 4:
		   cout << "���������� BMW ����� ����� " << bmw.engine_l << " �����, ������� �������� ������ " << bmw.engine_power << " ��������� ���, � ��������� �";
	   }
	switch (automarka2) {
	   case 1: 
		cout << " ����������� ����� Audi, � �������� ����� " << audi.engine_l << " �����, �������� " << audi.engine_power << " ���������� ���." << endl;
	    	break;
	   case 2:
		cout << " ����������� ����� Porche, � �������� ����� " << porche.engine_l << " �����, �������� " << porche.engine_power << " ���������� ���." << endl;
	  	    break;
	   case 3:
		cout << " ����������� ����� Mercedes-Benz, � �������� ����� " << merc.engine_l << " �����, �������� " << merc.engine_power << " ���������� ���." << endl;
	    	break;
	   case 4:
		cout << " ����������� ����� BMW, � �������� ����� " << bmw.engine_l << " �����, �������� " << bmw.engine_power << " ���������� ���." << endl;
		    break;
	}
	

	cout << "���� �� �� ������� � ����� ������ - ne �������!" << "\n" << "+3809535959993 ������ | ������� �� �����������";


	cin.get();
		return 0;
}