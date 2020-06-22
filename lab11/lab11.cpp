#include "lab11.h"

using namespace std;

void SystemPacade::purchase()
{
	cout << "purchase:" << endl;
	System system;
	system.paymentCheck();
	system.sendTicket();
}

void SystemPacade::changeTicketInfo()
{
	cout << "changeTicketInfo:" << endl;
	Seller seller;
	Operator oper;
	seller.ticketChange();
	oper.changeOrder();
}


void System::paymentCheck()
{
	cout << "payment checked" << endl;
}


void System::sendTicket()
{
	cout << "ticket sent" << endl;
}


void Seller::ticketChange()
{
	cout << "seller changed tickets" << endl;
}


void Operator::changeOrder()
{
	cout << "operator changed order" << endl;
}



void showStructuralMethodPatern()
{
	SystemPacade pacade;
	pacade.purchase();
	pacade.changeTicketInfo();
}
