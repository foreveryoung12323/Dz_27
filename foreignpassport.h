#pragma once

#include "passport.h"
#include "visa.h"
#include <vector>

class ForeignPassport : public Passport {
private:
    vector<Visa> visas;

public:
    ForeignPassport(const string& series, int number, const string& surname, const string& name, const string& patronymic,
        const string& birth_date, const string& birth_place, const string& issue_date, const string& issued_by, const string& registration);

    void addVisa(const Visa& visa);
    void displayForeignPassportInfo() const;
};
