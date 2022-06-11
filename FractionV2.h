#pragma once
class FractionV2
{
	int numerator;
	int denominator;
	int gcd(int a, int b);
	void reduce();
public:
	FractionV2(int num, int denom)
		: numerator{ num }, denominator{ denom ? denom : 1 }
	{
		reduce();
	};
	FractionV2() : FractionV2(1, 1) {};
	void setNumerator(int num) { numerator = num; reduce(); };
	int getNumerator() const { return numerator; };
	void setDenominator(int denom) { denominator = denom ? denom : 1; reduce(); };
	int getDenominator() const { return denominator; }
	void print() const;

	friend FractionV2 operator+(const FractionV2& left, const FractionV2& right);
	friend FractionV2 operator+(const FractionV2& left, int right);
	friend FractionV2 operator+(int left, const FractionV2& right);
	friend FractionV2 operator-(const FractionV2& left, const FractionV2& right);
	friend FractionV2 operator-(const FractionV2& left, int right);
	friend FractionV2 operator-(int left, const FractionV2& right);
	friend FractionV2 operator*(const FractionV2& left, const FractionV2& right);
	friend FractionV2 operator*(const FractionV2& left, int right);
	friend FractionV2 operator*(int left, const FractionV2& right);
	friend FractionV2 operator/(const FractionV2& left, const FractionV2& right);
	friend FractionV2 operator/(const FractionV2& left, int right);
	friend FractionV2 operator/(int left, const FractionV2& right);
};

