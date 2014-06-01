#include "GuestImpl.h"
#include "HCM.h"
#include "HEQ.h"


GuestImpl* GuestImpl::Factory(const std::string& name,int guestType)
{
	GuestImpl* guestImpl = 0;
	if (guestType == 0)
		guestImpl = new HCM(name);
	else if (guestType == 1)
		guestImpl = new HEQ(name);
	return guestImpl;
}
