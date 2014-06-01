#ifndef	 HCM_H
#define  HCM_H

#include "GuestImpl.h"
#include <iostream>

//Hotel Club Member Guest
class HCM : public GuestImpl{
	friend class GuestImpl;

public:
	virtual ~HCM(){}
	virtual void update(Subject * s)
	{

		std::cout << "HCM updated : " << name << std::endl;
	}

protected:
	HCM(const std::string & name) :GuestImpl(name){}
	HCM(const HCM & other);
	HCM operator=(const HCM & other);
};
#endif