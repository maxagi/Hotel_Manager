#ifndef  HEQ_H
#define  HEQ_H

#include  "GuestImpl.h"
#include <iostream>

//Hotel Regular Guest
class HEQ : public GuestImpl{
	friend class GuestImpl;

public:
	virtual ~HEQ(){}
	virtual void update(Subject * s)
	{
		if (s == sbj)
			std::cout << "HEQ updated : " << name << std::endl;
	}

protected:
	HEQ(const std::string & name) :GuestImpl(name){}
	HEQ(const HEQ & other);
	HEQ operator=(const HEQ & other);
};
#endif