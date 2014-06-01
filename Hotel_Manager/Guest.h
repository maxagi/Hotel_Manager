#ifndef  GUEST_H
#define  GUEST_H

#include <iostream>
#include "Observer.h"
#include "GuestImpl.h"
#include <string> 

//base class that represents a Hotel guest
class Guest :public Observer{
public:
	~Guest(){ delete g_impl; }
	Guest(const std::string &name, const int  guestType) :g_impl(GuestImpl::Factory(name,guestType)){}

	enum GuestType{ HCM, HEQ };

	void			update(Subject * s){g_impl->update(s);}

	std::string		getName()const		{ return g_impl->getName(); }
	GuestImpl*		Impl() const		{ return g_impl; }

private:
	GuestImpl*		g_impl;

	//non copyable:
	Guest&operator=(const Guest&);
	Guest(const Guest&);
};
#endif