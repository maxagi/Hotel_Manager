#ifndef HCM_H
#define  HCM_H


#include "Guest.h"
class Hotel;

//Hotel Club Member Guest
class HCM : public Guest{
	friend class GuestFactory;

public:
	virtual ~HCM(){}
	virtual void update(Subject * s);

protected:
	HCM(Hotel * const hotel, const std::string & name);
	HCM(const HCM & other);
	HCM operator=(const HCM & other);
};

#endif