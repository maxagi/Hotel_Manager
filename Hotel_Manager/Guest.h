#ifndef  GUEST_H
#define  GUEST_H

#include "Observer.h"
#include <string>

//base class that represents a Hotel guest
class Guest : public Observer{
public:
	~Guest(){}
	Guest(const std::string &name) :name(name){}

	virtual void update(Subject * s) = 0;
	std::string getName() { return name; }

private:
	std::string name;
};
#endif