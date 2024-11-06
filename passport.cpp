#include "passport.h"
#include <iostream>
using namespace std;

Passport::Passport(const string& series, int number, const string& surname, const string& name, const string& patronymic,
    const string& birth_date, const string& birth_place, const string& issue_date, const string& issued_by, const string& registration)
    : series(series), number(number), surname(surname), name(name), patronymic(patronymic),
    birth_date(birth_date), birth_place(birth_place), issue_date(issue_date), issued_by(issued_by), registration(registration) {}

void Passport::displayPassportInfo() const {
    cout << "Passport Information:\n";
    cout << "Series: " << series << "\n";
    cout << "Number: " << number << "\n";
    cout << "Surname: " << surname << "\n";
    cout << "Name: " << name << "\n";
    cout << "Patronymic: " << patronymic << "\n";
    cout << "Birth Date: " << birth_date << "\n";
    cout << "Birth Place: " << birth_place << "\n";
    cout << "Issue Date: " << issue_date << "\n";
    cout << "Issued By: " << issued_by << "\n";
    cout << "Registration: " << registration << "\n";
}
