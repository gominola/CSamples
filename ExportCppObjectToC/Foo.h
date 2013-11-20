#include <stdint.h>
#include <Windows.h>

#ifdef FOO_EXPORTS
#define FOO_API __declspec(dllexport) 
#else
#define FOO_API __declspec(dllimport) 
#endif

#ifdef __cplusplus

class Foo{
	    public:
			Foo();
			~Foo();
			void printFoo();
		      
		private:					
};

 #endif

 #ifdef __cplusplus
 extern "C" {
 #endif
	 FOO_API void   getFoo(HANDLE * foo);
	 FOO_API void   destroyFoo(HANDLE foo);
	 FOO_API void   printFoo(HANDLE foo);
	 #ifdef __cplusplus
		 }
 #endif

