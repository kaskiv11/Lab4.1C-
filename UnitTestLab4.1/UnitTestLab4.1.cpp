#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab4.1/Lab4.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab41
{
	TEST_CLASS(UnitTestLab41)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = ProcessTXT("../t.txt");
			Assert::AreEqual(t, 8);
		}
	};
}




