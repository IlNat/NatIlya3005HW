#include "FractionV2.h"

int FractionV2::gcd(int a, int b)
{
	int copy;
	while (b)
	{
		a %= b;
		copy = a;
		a = b;
		b = copy;
	}
	return a;
}

void FractionV2::reduce()
{
	int gcdVal{ gcd(numerator, denominator) };
	numerator /= gcdVal;
	denominator /= gcdVal;

	if (denominator < 0 and numerator < 0)
	{
		denominator *= -1;
		numerator *= -1;
	}
}

void FractionV2::print() const
{
	std::cout << '(' << numerator << " / " << denominator << ")";
	std::cout << '(' << numerator << " / " << denominator << ")";
}

FractionV2 operator+(const FractionV2& left, const FractionV2& right)
{
	return FractionV2{ left.numerator * right.denominator + right.numerator * left.denominator, left.denominator * right.denominator };
}

FractionV2 operator+(const FractionV2& left, int right)
{
	return FractionV2{ left.numerator + right * left.denominator, left.denominator };
}

FractionV2 operator+(int left, const FractionV2& right)
{
	return right + left;
}

FractionV2 operator-(const FractionV2& left, const FractionV2& right)
{
	return FractionV2{ left.numerator * right.denominator - right.numerator * left.denominator, left.denominator * right.denominator };
}

FractionV2 operator-(const FractionV2& left, int right)
{
	return FractionV2{ left.numerator - right * left.denominator, left.denominator };
}

FractionV2 operator-(int left, const FractionV2& right)
{
	return FractionV2{ left * right.denominator - right.numerator, right.denominator };
}

FractionV2 operator*(const FractionV2& left, const FractionV2& right)
{
	return FractionV2{ left.numerator * right.numerator, left.denominator * right.denominator };
}

FractionV2 operator*(const FractionV2& left, int right)
{
	return FractionV2{ left.numerator * right, left.denominator };
}

FractionV2 operator*(int left, const FractionV2& right)
{
	return right * left;
}

FractionV2 operator/(const FractionV2& left, const FractionV2& right)
{
	return FractionV2{ left.numerator * right.denominator, left.denominator * right.numerator };
}

FractionV2 operator/(const FractionV2& left, int right)
{
	return FractionV2{ left.numerator , left.denominator * right };
}

FractionV2 operator/(int left, const FractionV2& right)
{
	return FractionV2{ left * right.denominator, right.numerator };
}
