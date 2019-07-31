#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\basiccpp\Array.cpp"
#include <functional>
#include <assert.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace basicTest
{
	TEST_CLASS(ArrayTest)
	{
	public:

		//test creation, size and [] operators.
		TEST_METHOD(ArrayTest_Size)
		{
			int size = 5;
			Array<int> mArray{ size };
			for (int i = 0; i < size; i++) {
				mArray[i] = i;
			}
			Assert::AreEqual(size, mArray.Size());
			Assert::IsTrue(mArray[0] == 0);
			Assert::IsTrue(mArray[4] == 4);
		}

		//test the empty function
		TEST_METHOD(ArrayTest_Empty)
		{
			int size = 5;
			Array<int> mArray0{ 0 };
			Assert::IsTrue(mArray0.IsEmpty());

			Array<int> mArray{ size };
			for (int i = 0; i < size; i++) {
				mArray[i] = i;
			}
			Assert::IsFalse(mArray.IsEmpty());
		}

		//test  isValidIndex function
		TEST_METHOD(ArrayTest_IsValidIndex)
		{
			int size = 5;
			Array<int> mArray{ size };
			Assert::AreEqual(size, mArray.Size());
			Assert::IsTrue(mArray.IsValidIndex(1));
			Assert::IsFalse(mArray.IsValidIndex(5));
		};

		//Test the method indexoutofbount by passing the invalid index and checking
		//if the exception is thrown
		TEST_METHOD(ArrayTest_IndexoutOfBound)
		{
			int size = 5;
			Array<int> mArray{ size };
			auto func = [mArray, size] {
				mArray[size + 100]; };
			Assert::ExpectException<IndexOutOfBoundsException>(func);
		}

		//test copy constructor
		TEST_METHOD(ArrayTest_CopyConstructor)
		{
			int size = 5;
			Array<int> mArray{ size };
			for (int i = 0; i < size; i++) {
				mArray[i] = i;
			}
			Array<int> cArray = mArray;
			cArray[0] = 100;
			Assert::IsTrue(cArray[0] != mArray[0]);
		}
	};
}