#include "Hotel.h"
#include<iostream>
//#include <vld.h>
using namespace std;

int main(){



	unsigned int c, c1;
	bool cont = true;
	string str;

	Hotel& hotel = Hotel::getInstance();


	while (cont){
		cout << "\n";
		cout << "Hotel system " << endl
			<< "0: changes the price of the rooms " << endl
			<< "1: notifies that HCM clients have to upgrade membership" << endl
			<< "2: add new HCM guest" << endl
			<< "3: add new HEQ guest" << endl
			<< "4: quit the system" << endl
			<< "Enter your choice : ";
		cin >> c;


		switch (c) {
		case 0:
			hotel.notify_all();
			break;
		case 1:
			hotel.notify(Guest::HCM);
			break;
		case 2:
			cin.sync();
			cout << "please enter the HCM guest name" << endl;
			getline(cin, str);
			hotel.addGuest(Guest::HCM, str);

			break;

		case 3:
			cin.sync();
			cout << "please enter the HEQ guest name" << endl;
			getline(cin, str);
			hotel.addGuest(Guest::HEQ, str);
			break;

		default:
			cont = false;
		}
	}
}