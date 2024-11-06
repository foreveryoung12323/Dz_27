#include "foreignpassport.h"
#include <iostream>
using namespace std;

ForeignPassport::ForeignPassport(const string& series, int number, const string& surname, const string& name, const string& patronymic,
    const string& birth_date, const string& birth_place, const string& issue_date, const string& issued_by, const string& registration)
    : Passport(series, number, surname, name, patronymic, birth_date, birth_place, issue_date, issued_by, registration) {}

void ForeignPassport::addVisa(const Visa& visa) {
    visas.push_back(visa);
}

void ForeignPassport::displayForeignPassportInfo() const {
    displayPassportInfo();
    cout << "\nVisas:\n";
    for (const auto& visa : visas) {
        visa.displayVisaInfo();
        cout << "\n";
    }
}
