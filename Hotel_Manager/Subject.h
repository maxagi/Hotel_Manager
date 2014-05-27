#include <list>

class Observer;

class Subject{

public:
	virtual ~Subject();
	virtual void attach(Observer* o,const int eventType);	//attach an observer for events of type:  eventType

	virtual void notify(const int eventType);				//notify only Observers that observe events of type: eventType
															//implementation : iterate over mObserevers , if ObserverRecord->eventType == eventType
															//call ObserverRecord->o->update , else do nothing

	virtual void notify_all();								//notify all observers

protected:
	Subject();
	Subject(const Subject &);
	Subject operator=(const Subject&);

private:

	struct ObserverRecord{
		Observer * o;
		int eventType;
	};

	std::list<ObserverRecord *> mObserevers;
};