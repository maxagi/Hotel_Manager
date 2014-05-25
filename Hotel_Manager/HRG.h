
#include "Guest.h"
class Hotel;

//Hotel Regular Guest
class HRG : public Guest{
	friend class GuestFactory;

public:
	virtual void update(Subject * s);

private:
	HRG(Hotel * hotel);
};