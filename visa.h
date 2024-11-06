#pragma once

#include <string>
using namespace std;

class Visa {
public:
    string country;
    string date_of_issue;
    string date_of_expiry;

    Visa(const string& country, const string& date_of_issue, const string& date_of_expiry);

    void displayVisaInfo() const;
};
