#include <iostream>
#include <sstream>
#include <iomanip>
#include <stdint.h>
#include <windows.h>

#include "foo.h"

Foo::Foo(){
	printf("Creating foo\n");
}

Foo::~Foo(){
	printf("Deleting foo\n");
}

void Foo::printFoo(){
	printf("Printing foo\n");
}


void getFoo( HANDLE* foo){
	*foo = (HANDLE *)new Foo();   
}

void destroyFoo(HANDLE foo){
   delete (((Foo*)foo));
}

void printFoo( HANDLE foo){
	((Foo *)foo)->printFoo();
}



