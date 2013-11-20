#include "Foo.h"
#include <windows.h>


int main(const int argc, const char **argv){

	HANDLE foo = NULL;
	getFoo(&foo);

	printFoo(foo);

	destroyFoo(foo);

	return (0);
}