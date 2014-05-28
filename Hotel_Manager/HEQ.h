#ifndef HEQ_H
#define  HEQ_H

#include "Guest.h"
#include "Hotel.h"

//Hotel Regular Guest
class HEQ : public Guest{
	friend class GuestFactory;

public:
	virtual ~HEQ(){}
	virtual void update(Subject * s){}

protected:
	HEQ(const std::string & name) :Guest(name){}
	HEQ(const HEQ & other);
	HEQ operator=(const HEQ & other);
};
#endif