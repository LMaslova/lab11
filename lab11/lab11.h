#pragma once

#include <iostream>

void showStructuralMethodPatern();

class SystemPacade
{
public:
	void purchase();
	void changeTicketInfo();
};

class System
{
public:
	void paymentCheck();
	void sendTicket();
};

class Seller
{
public:
	void ticketChange();
};

class Operator
{
public:
	void changeOrder();
};