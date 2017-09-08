#include <iostream>
#include <string>
#include "invoice.h"

using namespace std;

//****************constructors
invoice::invoice()
{
	partNum  = "000000";
	partDesc = "No Item Selected";
	qntSold  = 0;
	pricePer = 0.00;
}

invoice::invoice(string newPartNum, string newPartDesc, int newQntSold, double newPricePer)
{
	partNum  = newPartNum;
	partDesc = newPartDesc;
	qntSold  = newQntSold;
	pricePer = newPricePer;
}

//****************get / set PART NUMBER
string invoice::getPartNum()
{
	return partNum;
}

void invoice::setPartNum(string newPartNum)
{
	partNum = newPartNum;
}

//****************get / set PART DESCRIPTION
string invoice::getPartDesc()
{
	return partDesc;
}
void invoice::setPartDesc(string newPartDesc)
{
	partDesc = newPartDesc;
}

//****************get / set QUANTITY SOLD
int invoice::getQntSold()
{
	return qntSold;
}

void invoice::setQntSold(int newQntSold)
{
	qntSold = newQntSold;
}

//****************get / set PRICE PER UNIT
double invoice::getPricePer()
{
	return pricePer;
}
void invoice::setPricePer(double newPricePer)
{
	pricePer = newPricePer;
}

//****************CALCULATE INVOICE
double invoice::getInvoiceAmount()
{
	return (getPricePer() * getQntSold());
}