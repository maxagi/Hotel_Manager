#include "hotel.h"
#include "GuestFactory.h"

Hotel Hotel::instance;

void Hotel::addGuest(const int & guestType, const std::string & name)
{
	Guest* guest = GuestFactory::create(guestType,name);
	mGuests.push_back(guest);
	attach(guest, guestType);
	guest->setSbj(this);
}

void Hotel::removeGuest(Guest* guest){
	mGuests.remove(guest);
}

void Hotel::changeRoomPrice(const float NewPrice){
	roomPrice = NewPrice;
	notify_all();
}

Hotel::~Hotel(){
	GuestFactory::destroy_all();
}