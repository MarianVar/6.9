#include "pch.h"
#include "CppUnitTest.h"
#include "../6.9/6.9.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Node* root = NULL;
			bool found = false;
			Node* i = BinarySearchInsert(root,0, found);
			int j = i->info;
			Assert::AreEqual(j, 0);
		}
	};
}
