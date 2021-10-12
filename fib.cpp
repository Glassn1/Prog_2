#include <cstdlib>
// Fib class 

int fib (int n)
{
    if (n<=1){
        return n;
    }else{
        return fib(n-1) + fib(n-1);
    }
}

extern "C"{
	int fib_cpp(int n){return fib(n);}
	}