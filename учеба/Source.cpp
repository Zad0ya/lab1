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
	cout << "Добро пожаловать в Autopodbor.ua!" << "\n" << "Давайте выберем марку автомобиля:" << "\n" << "Audi 1 | Porche 2 | Mercedes-Benz 3 | BMW |" << endl;
	  cout << "Ввод автомобиля 1: ";
	   cin >> automarka1;
	   cout << "Ввод автомобиля : ";
	   cin >> automarka2;
	switch (automarka1) {
	   case 1: 
		   cout << "Автомобиль Audi имеет мотор " << audi.engine_l << " литра, который способен выдать " << audi.engine_power << " лошадиных сил, в сравнении с";
		   break; 
	   case 2: 
		   cout << "Автомобиль Porche имеет мотор " << porche.engine_l << " литра, который способен выдать " << porche.engine_power << " лошадиных сил, в сравнении с";
		   break;
	   case 3:
		   cout << "Автомобиль Mercedes-Benz имеет мотор " << merc.engine_l << " литра, который способен выдать " << merc.engine_power << " лошадиных сил, в сравнении с";
		   break;
	   case 4:
		   cout << "Автомобиль BMW имеет мотор " << bmw.engine_l << " литра, который способен выдать " << bmw.engine_power << " лошадиных сил, в сравнении с";
	   }
	switch (automarka2) {
	   case 1: 
		cout << " автомобилем марки Audi, у которого мотор " << audi.engine_l << " литра, выдающий " << audi.engine_power << " лошадинных сил." << endl;
	    	break;
	   case 2:
		cout << " автомобилем марки Porche, у которого мотор " << porche.engine_l << " литра, выдающий " << porche.engine_power << " лошадинных сил." << endl;
	  	    break;
	   case 3:
		cout << " автомобилем марки Mercedes-Benz, у которого мотор " << merc.engine_l << " литра, выдающий " << merc.engine_power << " лошадинных сил." << endl;
	    	break;
	   case 4:
		cout << " автомобилем марки BMW, у которого мотор " << bmw.engine_l << " литра, выдающий " << bmw.engine_power << " лошадинных сил." << endl;
		    break;
	}
	

	cout << "Если вы не уверены в вашем выборе - ne звоните!" << "\n" << "+3809535959993 Максим | Эксперт по автоподбору";


	cin.get();
		return 0;
}