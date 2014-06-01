#ifndef  GUESTIMPL_H
#define  GUESTIMPL_H

#include "Observer.h"
#include <string>

class GuestImpl:public Observer{
public:
	virtual ~GuestImpl(){}

	virtual void		update(Subject * s) = 0;
	static GuestImpl*	Factory(const std::string& name,int guestType);
	std::string			getName()const { return name; }

protected:
	GuestImpl(const std::string & name):name(name){}
	GuestImpl&operator=(const GuestImpl&);
	GuestImpl(const GuestImpl&);

	std::string		name;

};
#endif