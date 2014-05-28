#ifndef GUEST_FACTORY_H
#define GUEST_FACTORY_H

#include <string>
#include <list>
#include "Guest.h"
#include "HCM.h"
#include "HEQ.h"

class GuestFactory{

public:
	static Guest*	create(const int & guestType, const std::string & name);	//create a guest
	static void		destroy(Guest * g);											//destroy guest g
	static void		destroy_all();												//destroy all built guests

protected:
	static std::list<Guest*> mGuests;											//all created guests

private:
	GuestFactory();
	GuestFactory(const GuestFactory&);
	GuestFactory& operator=(const GuestFactory&);

};
#endif