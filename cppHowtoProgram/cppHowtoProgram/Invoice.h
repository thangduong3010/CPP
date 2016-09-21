#pragma once
#include <string>


class Invoice {
public:
	void setPartNo(std::string);

	std::string getPartNo();

	void setPartDesc(std::string);

	std::string getPartDesc();

	void setQuantity(int);

	int getQuantity();

	void setPrice(int);

	int getPrice();

	int getInvoiceAmount();

	Invoice(std::string, std::string, int, int);

private:
	std::string partNumber;
	std::string partDescription;
	int quantity, price;
};