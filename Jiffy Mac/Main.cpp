#include "JiffyMac.h"

#include <vector>
#include <string>

int main( int argc, const char * argv[] ){
	declare array_of(std::string *) things
	also do_many_(20)
		when _it_ less_than 10 then_
			things.push_back(new std::string(std::to_string(_it_)))
		_end
		otherwise
			things.push_back(nullptr)
		_end
	_end
	when 1 isnt 2 and 1 is 1 then_ 
		println("Hello")
		also do_many_(10)
			let i be _it_
			also println(i)
			also println("done")
			also set i to 10
			also for_each(c, things)
				let f be nullptr
				also let x be nc_p(c, new std::string("C is Null Pointer")) 
				also println(*x)
			_end
		_end
	_end
	otherwise_when 1 is 2 then_
		println("Thats wrong")
	_end	
	otherwise
		println("huh")
	_end
}