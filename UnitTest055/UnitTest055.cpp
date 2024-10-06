#include "pch.h"
#include "CppUnitTest.h" 
#include "../Lab_05.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest055
{
    TEST_CLASS(UnitTest055)
    {
    public:

        // ���� ��� �������� ������� ���������� ���� ����
        TEST_METHOD(TestSumDigits)
        {
            int num = 2457;  // ������� �����
            int expectedSum = 18;  // ��������� ���� ����: 2 + 4 + 5 + 7 = 18

            Assert::AreEqual(expectedSum, sumDigits(num));  // ���������� ��������� �������
        }

        // ���� ��� �������� ������� ������� ����
        TEST_METHOD(TestCountDigits)
        {
            int num = 2457;
            int expectedCount = 4;  // ʳ������ ���� � ���� 2457

            Assert::AreEqual(expectedCount, countDigits(num));
        }

        // ���� ��� �������� ������� ����������� ����������� �����
        TEST_METHOD(TestMaxDigit)
        {
            int num = 2457;
            int expectedMax = 7;  // �������� ����� � ���� 2457

            Assert::AreEqual(expectedMax, maxDigit(num));
        }

        // ���� ��� �������� ������� ����������� �������� �����
        TEST_METHOD(TestMinDigit)
        {
            int num = 2457;
            int expectedMin = 2;  // �������� ����� � ���� 2457

            Assert::AreEqual(expectedMin, minDigit(num));
        }

        // ���� ��� �������� ������� ������� ������
        TEST_METHOD(TestRecursionDepth)
        {
            int num = 2457;
            int expectedDepth = 4;  // ������� ������, �� ������� ������� ����

            Assert::AreEqual(expectedDepth, recursionDepth(num));
        }
    };
}
