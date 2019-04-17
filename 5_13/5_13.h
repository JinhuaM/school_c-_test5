#ifndef 5_13
#define 5_13

class X;
class Y{
public:
	void g(X*);
};

class X{
private:
	int i;
public:
	X(){i=0;}
	friend void h(X*);
	friend void Y::g(X*);
	friend class Z;
}

void h(X* x){x-> =+10}

void Y::g(X* x){x->i++;}

class Z{
public :
	vodi f(X* x){x->i+=5;}
};

#endif