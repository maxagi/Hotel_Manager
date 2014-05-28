#ifndef  OBSERVER_H
#define  OBSERVER_H


class Subject;

class Observer{
public:
	virtual ~Observer(){/* don't implement */ }
	virtual void	update(Subject * s) = 0;

	void			setSbj(Subject*const  s) { sbj = s; }

protected:
	Observer() {}
	Subject* sbj;
};

#endif 