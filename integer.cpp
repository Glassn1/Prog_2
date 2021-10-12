#include <cstdlib>
// Integer class 

class Integer{
	public:
		Integer(int);
		int get();
		void set(int);
		
	private:
		int val;
	};


Integer::Integer(int n){
	val = n;
	}


int Integer::get(){
	return val;
	}
 
void Integer::set(int n){
	int previous = 1;
    int current = 1;
    int next = 1;
    for (int i = 3; i <= val; ++i) 
    {
        next = current + previous;
        previous = current;
        current = next;
    }
    val = next;
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