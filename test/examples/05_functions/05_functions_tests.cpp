#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "reference.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test reference variable")
{
	auto num1 = 5;
	int &num2 = num1;

	REQUIRE(NUM1 ==  num2);
	num2 = 10; //num2 has the address of num1 thus we can modify 

	REQUIRE(num1 == 10);

}

TEST_CASE("Test value/reference parameters (variables)")
{
	int num1 = 5;//x100
	int num2 = 10;//x96

	ref_value_vars(num1, num2);//num2 changes the value of memory address x96 -. num2 form line 34

	REQUIRE(num1 == 5);
	REQUIRE(num1 == 20);


}