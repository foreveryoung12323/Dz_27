#pragma once

#include <string>
using namespace std;

class Passport {
protected:
    string series;
    int number;
    string surname;
    string name;
    string patronymic;
    string birth_date;
    string birth_place;
    string issue_date;
    string issued_by;
    string registration;

public:
    Passport(const string& series, int number, const string& surname, const string& name, const string& patronymic,
        const string& birth_date, const string& birth_place, const string& issue_date, const string& issued_by, const string& registration);

    void displayPassportInfo() const;
};
