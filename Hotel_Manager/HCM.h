
#include "Guest.h";
class Hotel;

//Hotel Club Member Guest
class HCM : public Guest{
	friend class GuestFactory;

public:
	virtual void update(Subject * s);

private:
	HCM(Hotel* hotel);
};