#include "Hotel.h"
#include<iostream>
using namespace std;

int main(){


	Hotel& hotel = Hotel::getInstance();

	hotel.addGuest(Hotel::HEQ, "max");
	hotel.addGuest(Hotel::HEQ, "hussam");
	hotel.addGuest(Hotel::HCM, "Yossi Halachmi");



	unsigned int c, c1;
	bool cont = true;

	while (cont){
		cout << "\n";
		cout << "Hotel system " << endl
			<< "0: changes the price of the rooms " << endl
			<< "1: notifies that HCM clients have to upgrade membership" << endl
			<< "2: quit the system" << endl
			<< "Enter your choice : ";
		cin >> c;


		switch (c) {
		case 0:

			break;
		case 1:

			break;


		default:
			cont = false;
		}
	}
}