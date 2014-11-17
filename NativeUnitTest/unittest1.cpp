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
			// TODO: Your test code here 1:1
			int a, b;
			a = 1;
			b = 2;

			Assert::AreEqual (a+1, b);
		}

		TEST_METHOD(TestMethod2)
		{
			// TODO: Your test code here 1:2
			int a, b;
			a = 1;
			b = 2;

			Assert::AreEqual(a, b);
		}
	};
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethodA)
		{
			// TODO: Your test code here 2:A
			int a, b;
			a = 1;
			b = 2;

			Assert::AreEqual(a + 1, b);
		}

		TEST_METHOD(TestMethodB)
		{
			// TODO: Your test code here 2:B
			int a, b;
			a = 1;
			b = 2;

			//Assert::AreEqual(a, b);
			Assert::AreNotEqual(a, b);
		}
	};
}