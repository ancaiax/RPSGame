#include "pch.h"
#include "CppUnitTest.h"
#include <string.h> 

extern "C" char* rpsOutcome(char*, char*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTests
{
	TEST_CLASS(RockPaperScissorsTests)
	{
	public:

		TEST_METHOD(RPSOUTCOME_P1_INVALIDINPUT_)
		{
			//Arrange
			char* p1_input = "123";
			char* p2_input = "Rock";
			char* expected = "Invalid";
			//Act
			char* actual = rpsOutcome(p1_input, p2_input);
			//Assert
			Assert::IsTrue(strcmp(actual, expected) == 0);
		}

	};
}
