#include <cstdlib>
// Integer class 

class Integer{
	public:
		Integer(int);
		int Fib(int n)
		int get();
		void set(int);
		
	private:
		int val;
	};


Integer::Integer(int n){
	val = n;
	}

int Integer::Fib(int n){
	
    if (n <= 1) {
        return n;
    } else {
        return Fib(n-1) + Fib(n-2);
    }
	
}

int Integer::get(){
	return val;
	}
 
void Integer::set(int n){
	val = n;
	}


extern "C"{
	Integer* Integer_new(int n) {return new Integer(n);}
	int Integer_get(Integer* integer) {return integer->get();}
	void Integer_set(Integer* integer, int n) {integer->set(n);}
	void Integer_delete(Integer* integer){
		if (integer){
			delete integer;
			integer = nullptr;
			}
		}
	}