#include "CppLib.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	Stash intStash = Stash(1000);
	
	for (int i = 0; i < 100; i++)
	{
		intStash.add(&i);
	}
	for (int j = 0; j < intStash.count(); j++)
	{
		cout << "intStash.fetch(" << j << ") = "
			<< *(int*)intStash.fetch(j)
			<< endl;
	}
	system("pause");
	getchar();
}
