
class Subject;
class Observer{
public:
	virtual ~Observer();
	virtual void update(Subject * s) = 0;

protected:
	Observer() {}
	Subject* sbj;
};