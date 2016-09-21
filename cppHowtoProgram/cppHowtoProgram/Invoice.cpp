#include <iostream>
#include "Invoice.h"


void Invoice::setPartNo(std::string p_partNo) {
	partNumber = p_partNo;
}

std::string Invoice::getPartNo() {
	return partNumber;
}

void Invoice::setPartDesc(std::string p_partDesc) {
	partDescription = p_partDesc;
}

std::string Invoice::getPartDesc() {
	return partDescription;
}

void Invoice::setQuantity(int p_quantity) {
	if (p_quantity < 0) {
		p_quantity = 0;
	}
	quantity = p_quantity;
}

int Invoice::getQuantity() {
	return quantity;
}

void Invoice::setPrice(int p_price) {
	if (p_price < 0) {
		p_price = 0;
	}
	price = p_price;
}

int Invoice::getPrice() {
	return price;
}

int Invoice::getInvoiceAmount() {
	return quantity * price;
}

Invoice::Invoice(std::string p_partNo, std::string p_partDesc, int p_quantity, int p_price) {
	setPartNo(p_partNo);
	setPartDesc(p_partDesc);
	setQuantity(p_quantity);
	setPrice(p_price);
}