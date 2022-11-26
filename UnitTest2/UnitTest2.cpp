#include "pch.h"
#include "CppUnitTest.h"
#include "D:/Lviv Politechnic/Algoritmizaciya ta programuvannya/Theme 5/Laboratorna robota 5.1/Project1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = h(2, 3);
			Assert::AreEqual(t, 0);
		}
	};
}
