#ifndef HOTEL_H
#define HOTEL_H


#include "Subject.h"
#include <list>
#include <string>
#include "Guest.h"


//singleton class
class Hotel : public Subject{

public:
	~Hotel();

	static Hotel&	getInstance() { return instance; }

	void			addGuest(const int  guestType, const std::string & name);
	void			removeGuest(Guest* guest);

	void			changeRoomPrice(const float NewPrice);		//change room price and notify ALL guests
	void			upgradeMembership() { notify(Guest::HCM); }		//notify only HCMs


protected:
	std::list<Guest*>	mGuests;

private:
	static Hotel		instance;
	float				roomPrice;

	Hotel(){}
	Hotel(const Hotel&);
	Hotel& operator=(Hotel&);
};

#endif