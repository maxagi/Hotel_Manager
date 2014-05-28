#ifndef HEQ_H
#define  HEQ_H

#include "Guest.h"
#include "Hotel.h"
#include <iostream>

//Hotel Regular Guest
class HEQ : public Guest{
	friend class GuestFactory;

public:
	virtual ~HEQ(){}
	virtual void update(Subject * s)
	{
		if (s == sbj)
			std::cout << "HEQ updated : " << Guest::getName() << std::endl;
	}

protected:
	HEQ(const std::string & name) :Guest(name){}
	HEQ(const HEQ & other);
	HEQ operator=(const HEQ & other);
};
#endif