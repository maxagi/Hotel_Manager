#ifndef HOTEL_H
#define  HOTEL_H

#include "Subject.h"
#include <list>
#include <string>
#include "Guest.h"


#define HCM_TYPE 1
#define HEQ_TYPE 2


//singleton class
class Hotel : public Subject{

public:
	static Hotel&	getInstance() { return instance; }

	void			addGuest(const int & guestType, const std::string & name);
	void			removeGuest(Guest* guest);

	void			changeRoomPrice(const float NewPrice); //change room price and notify ALL guests
	void			upgradeMembership() { notify(HCM_TYPE); } //notify only HCMs


protected:
	std::list<Guest*> mGuests;

private:
	static Hotel instance;
	float roomPrice;

	Hotel(){}
	Hotel(const Hotel&);
	Hotel& operator=(Hotel&);
};

#endif