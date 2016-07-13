// Friend allows special access
struct X;

struct Y
{
	void f(X*);
};

struct X
{
private:
	int i;
public:
	void initialize();
	friend void g(X*, int);
	friend void Y::f(X*);
	friend struct Z;
	friend void h();
};

void X::initialize()
{
	i = 0;
}

void g(X* x, int i)
{
	x->i = i;
}

void Y::f(X* x)
{
	x->i = 47;
}

struct Z
{
private:
	int j;
public:
	void initialize();
	void g(X* x);
};

void h()
{
	X x;
	x.i = 100;
}

void Z::initialize()
{
	j = 99;
}

void Z::g(X * x)
{
	x->i += j;
}
