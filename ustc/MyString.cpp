#include "Mem.h"
#include <cstring>
#include <iostream>
using namespace std;

class MyString
{
	Mem* buf;
public:
	MyString();
	MyString(char* str);
	~MyString();
	void concat(char* str);
	void print(ostream& os);
};

MyString::MyString()
{
	buf = 0;
}

MyString::MyString(char * str)
{
	buf = new Mem(strlen(str) + 1);
	//strcpy_s((char*)buf->pointer(), (char*)str);
}

MyString::~MyString()
{
	delete buf;
}

void MyString::concat(char * str)
{
	if (!buf)
	{
		buf = new Mem;
	}
	//strcat((char*)buf->pointer(buf->msize() + strlen(str) + 1), str);
}

void MyString::print(ostream& os)
{
	if (!buf)
	{
		return;
	}
	os << buf->pointer() << endl;
}