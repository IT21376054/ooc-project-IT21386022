#pragma once
class Payment
{
private:
	char payID[20];
	char cardType[40];
	char cardName[50];

public:
	Payment();
	void generatePayId(const char ppayId);
	void displayPaydetails(const char ppayId[], const char pcardType[], const char pcardName[]);
	~Payment();
};
