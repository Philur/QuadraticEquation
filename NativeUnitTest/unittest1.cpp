#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace NativeUnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			int a, b;
			a = 1;
			b = 2;

			Assert::AreEqual (a+1, b);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: Your test code here
			int a, b;
			a = 1;
			b = 2;

			Assert::AreEqual(a, b);
		}
	};
}