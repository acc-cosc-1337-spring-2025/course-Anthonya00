#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "for.h"
#include "do_while.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test get sum of squares while")

{
	REQUIRE(get_sum_of_squares(3) == 14);
	REQUIRE(get_sum_of_squares(4) == 30);
	REQUIRE(get_sum_of_squares(5) == 55);
}

TEST_CASE("Test get sum of square for")
{
	REQUIRE(get_sum_of_squares_for(3) == 14);
	REQUIRE(get_sum_of_squares_for(3) == 14);
	REQUIRE(get_sum_of_squares_for(3) == 14);
}

TEST_CASE(" Test get sum of sqares do")
{

	REQUIRE(get_sum_of_squares_do(3) == 14);
	REQUIRE(get_sum_of_squares_do(4) == 30);
	REQUIRE(get_sum_of_squares_do(5) == 55);

}

TEST_CASE(" Test get sum of sqares do")

{}



TEST_CASE("Test copy/value variable")
{
	auto num1 = 5, num2 = 10;

	REQUIRE(Num1 , num2);

	num1 = num2;

	REQUIRE(num1 == num2)

}

TEST_CASE("Test reference variable")
{
	auto num1 = 5;
	int &num2 = num1;

	REQUIRE(NUM1 ==  num2);
	num2 = 10; //num2 has the address of num1 thus we can modify 

	REQUIRE(num1 == 10);

}

