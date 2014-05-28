#include "GuestFactory.h"
#include <list>

using namespace std;

list<Guest*> GuestFactory::mGuests;

Guest*	GuestFactory::create(const int & guestType, const std::string & name){	//create a guest
	Guest* g=NULL;
	if (guestType == HCM_TYPE)
		g = new HCM(name);
	else
		g = new HEQ(name);
	mGuests.push_back(g);
	return g;
}

void GuestFactory::destroy_all()
{
	//free memory
	for (list<Guest*>::iterator it = mGuests.begin(); it != mGuests.end(); it++){
		delete *it;
	}

	//clear list 
	mGuests.clear();
}


void GuestFactory::destroy(Guest * g)
{
	mGuests.remove(g);
	delete g;
}