#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include "invoice.h"

using namespace std;

int main()
{
	invoice myInvoice("09AZZQR7", "6pk Caulk", 2, 7.99);

	//--display invoice
	cout << setw(12) << right  << "Part Number:"	
		 << setw(12) << right << myInvoice.getPartNum()  << endl

		 << setw(12) << right  << "Description:"
		 << setw(12) << right << myInvoice.getPartDesc() << endl

		 << setw(12) << right << "Quantity:"		
		 << setw(12) << right << myInvoice.getQntSold()  << endl

		 << setw(12) << right << "Unit Price:"
		 << setw(12) << right << myInvoice.getPricePer() << endl

		 << "------------------------"<< endl

		 << setw(12) << right << "Total Cost: "
		 << setw(12) << right << myInvoice.getInvoiceAmount()
		 << endl << endl;
	//--

	// = myInvoice("09AZZQR7", "6pk Caulk", 2, 7.99);


	_getch;
	return 0;
}