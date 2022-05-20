#include "Payment.h"
#include<cstring>

Payment::Payment()
{
	strcpy(payID, "");
	strcpy(cardType, "");
	strcpy(cardName, "");
}

void Payment::generatePayId(const char ppayId)
{
	strcpy(payID, "ppayId");
}

void Payment::displayPaydetails(const char ppayId[], const char pcardType[], const char pcardName[])
{
	strcpy(payID, "");
	strcpy(cardType, "");
	strcpy(cardName, "");
}

Payment::~Payment()
{
	//Destructor
}
