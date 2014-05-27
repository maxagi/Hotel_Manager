#include "Subject.h"
using namespace  std;


void Subject::attach(Observer* obs, const int eventType)
{
	ObserverRecord * rec;
	rec->eventType = eventType;
	rec->o = obs;
	mObserevers.push_back(rec);
}



void Subject::notify(const int eventType)
{

	for (obs_rec_citer obs_recs = mObserevers.cbegin(); obs_recs != mObserevers.cend(); ++obs_recs)
	{
		if ((*obs_recs)->eventType==eventType)
		{
			((*obs_recs)->o)->update(this);
		}
	}
}


void Subject:: notify_all(){

	for (obs_rec_citer obs_recs = mObserevers.cbegin(); obs_recs != mObserevers.cend(); ++obs_recs)
	{
		((*obs_recs)->o)->update(this);
	}
}

Subject::~Subject()
{
	for (obs_rec_citer obs_recs = mObserevers.cbegin(); obs_recs != mObserevers.cend(); ++obs_recs)
	{
		delete *obs_recs;
	}
}