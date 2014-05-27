#ifndef HEQ_H
#define  HEQ_H
#include "Guest.h"
class Hotel;

//Hotel Regular Guest
class HEQ : public Guest{
	friend class GuestFactory;

public:
	virtual ~HEQ(){}
	virtual void update(Subject * s);

protected:
	HEQ(Hotel * const hotel,const std::string & name);
	HEQ(const HEQ & other);
	HEQ operator=(const HEQ & other);
};
#endif