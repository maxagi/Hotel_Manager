#ifndef	 HCM_H
#define  HCM_H

#include "Guest.h"
#include "Hotel.h"

//Hotel Club Member Guest
class HCM : public Guest{
	friend class GuestFactory;

public:
	virtual ~HCM(){}
	virtual void update(Subject * s){}

protected:
	HCM(const std::string & name) :Guest(name){}
	HCM(const HCM & other);
	HCM operator=(const HCM & other);
};
#endif