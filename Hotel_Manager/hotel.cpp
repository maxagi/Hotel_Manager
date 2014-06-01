#include "hotel.h"


Hotel Hotel::instance;

void Hotel::addGuest(const int  guestType, const std::string & name)
{
	Guest* guest = new Guest(name, guestType);
	mGuests.push_back(guest);
	attach(guest->Impl(), guestType);
	(guest->Impl())->setSbj(this);
}

void Hotel::removeGuest(Guest* guest){
	mGuests.remove(guest);
}

void Hotel::changeRoomPrice(const float NewPrice){
	roomPrice = NewPrice;
	notify_all();
}

Hotel::~Hotel()
{
	for (std::list<Guest*>::const_iterator iter = mGuests.cbegin(); iter != mGuests.cend(); ++iter)
	{
		delete *iter;
	}
}