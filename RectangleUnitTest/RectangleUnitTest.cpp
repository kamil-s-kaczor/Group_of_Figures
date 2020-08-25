#include "pch.h"
#include "CppUnitTest.h"
#include "../Group_of_Figures/Rectangle.h"
#include "../Group_of_Figures/Figure.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectangleUnitTest
{
	TEST_CLASS(RectangleUnitTest)
	{
	public:
		
		TEST_METHOD(ConstructorTest)
		{
			Rectangle (Point(0.0f, 0.0f), Point(1.0f, 1.0f));
		}
	};
}
