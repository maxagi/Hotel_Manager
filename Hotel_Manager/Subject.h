#include <list>
#include "Observer.h"

#ifndef SUBJECT_H
#define  SUBJECT_H

class Subject{

public:
	virtual ~Subject();
	virtual void attach(Observer* o,const int eventType);	//attach an observer for events of type:  eventType
	virtual void notify(const int eventType);				//notify only Observers that observe events of type: eventType										
	virtual void notify_all();								//notify all observers

protected:
	Subject(){}
	Subject(const Subject &);
	Subject operator=(const Subject&);

private:
	struct ObserverRecord{
		Observer * o;
		int eventType;
	};

	typedef std::list<ObserverRecord*>::const_iterator obs_rec_citer;
	typedef std::list<ObserverRecord*>::iterator obs_rec_iter;

	std::list<ObserverRecord *> mObserevers;
};

#endif