#include "add.h"
#include <iostream>
void areEquals(double expected, double actual)
{
	if( expected != actual )
		std::cout <<"Expected: "<<expected <<" and got " <<actual <<std::endl;
	}

int main()
{
	areEquals(4,add(2,2));
	areEquals(6,add(4,4));
	areEquals(27,pow(3,3));
	std::cout<<"Test ends"<<std::endl;
	return 0;
}
