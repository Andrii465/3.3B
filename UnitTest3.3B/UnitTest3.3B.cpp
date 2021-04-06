#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3B/Money.h"
#include "../3.3B/Money.cpp"
#include "../3.3B/Pair.h"
#include "../3.3B/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33B
{
	TEST_CLASS(UnitTest33B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a;
			bool t;
			t = a.Init(1000, 500, 200, 100, 50, 20, 10, 5, 2, 1, 0.50, 0.10);
			Assert::AreEqual(t, true);
		}
	};
}
