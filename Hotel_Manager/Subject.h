#include <list>

class Observer;

class Subject{

public:
	virtual ~Subject();
	virtual void attach(Observer* o,const int eventType);	//attach an observer for events of type:  eventType
	virtual void notify(const int eventType);				//notify only Observers that observe events of type: eventType
	virtual void notify_all();								//notify all observers

protected:
	Subject();

private:
	std::list<Observer *> mObserevers;
};