#ifndef  GUEST_H
#define  GUEST_H

#include "Observer.h"
#include <string>

//base class that represents a Hotel guest
class Guest : public Observer{
public:
	~Guest(){}
	virtual void update(Subject * s) = 0;
	std::string getName() { return name; }

protected:
	Guest(const std::string &name) :name(name){}

private:
	std::string name;
};
#endif