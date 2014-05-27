
#include "Subject.h"
#include <list>
#include <string>

class Guest;

//singleton class 
class Hotel: public Subject{

public:
	static Hotel&			getInstance()		{ return instance; }
	
	void					addGuest(const std::string & guestType);
	void					removeGuest(Guest* guest);

	void					changeRoomPrice();						//change room price and notify ALL guests
	void					upgradeMembership();					//notify only HCMs


protected:
	std::list<Guest*> mGuests;

private:
	static Hotel	instance;
	float			roomPrice;

	Hotel(){}
	Hotel(const Hotel&);
	Hotel& operator=(Hotel&);
};