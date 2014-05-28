#ifndef	 HCM_H
#define  HCM_H

#include "Guest.h"
#include "Hotel.h"
#include <iostream>

//Hotel Club Member Guest
class HCM : public Guest{
	friend class GuestFactory;

public:
	virtual ~HCM(){}
	virtual void update(Subject * s)
	{ 
		if (s==sbj) 
			std::cout << "HCM updated : " <<  Guest::getName() <<std::endl;
	}

protected:
	HCM(const std::string & name) :Guest(name){}
	HCM(const HCM & other);
	HCM operator=(const HCM & other);
};
#endif