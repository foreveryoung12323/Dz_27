#include "visa.h"
#include <iostream>
using namespace std;

Visa::Visa(const string& country, const string& date_of_issue, const string& date_of_expiry)
    : country(country), date_of_issue(date_of_issue), date_of_expiry(date_of_expiry) {}

void Visa::displayVisaInfo() const {
    cout << "Visa Information:\n";
    cout << "Country: " << country << "\n";
    cout << "Date of Issue: " << date_of_issue << "\n";
    cout << "Date of Expiry: " << date_of_expiry << "\n";
}
