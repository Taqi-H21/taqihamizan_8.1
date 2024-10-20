#include <iostream>
#include <string>

using namespace std;

struct person {
    string name;
    int month;
    int date;
    int year;
};

const int QUANTITY = 1;

void inPerson(person arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Input Name : ";
        cin.ignore();
        getline(cin, arr[i].name);

        cout << "Input Birthdate" << endl;
        cout << "Date: ";
        cin >> arr[i].date;
        cout << "Month (in numbers) : ";
        cin >> arr[i].month;
        cout << "Year : ";
        cin >> arr[i].year;
    }
}

void viewPerson(person arr[], int size) {
    cout << "\nResult\n";
    for (int i = 0; i < size; ++i) {

        cout << "Name : " << arr[i].name << endl;
        cout << "Date of Birth : " << arr[i].date << "-"  << arr[i].month << "-" << arr[i].year << endl;

        if (((arr[i].date >= 21) && (arr[i].month == 3)) || ((arr[i].date <= 19) && (arr[i].month == 4))) {
            cout << "Your Zodiac : Aries" << endl;
        } else if (((arr[i].date >= 20) && (arr[i].month == 4)) || ((arr[i].date <= 20) && (arr[i].month == 5))) {
            cout << "Your Zodiac : Taurus" << endl;
        } else if (((arr[i].date >= 21) && (arr[i].month == 5)) || ((arr[i].date <= 20) && (arr[i].month == 6))) {
            cout << "Your Zodiac : Gemini" << endl;
        } else if (((arr[i].date >= 21) && (arr[i].month == 6)) || ((arr[i].date <= 22) && (arr[i].month == 7))) {
            cout << "Your Zodiac : Cancer" << endl;
        } else if (((arr[i].date >= 23) && (arr[i].month == 7)) || ((arr[i].date <= 22) && (arr[i].month == 8))) {
            cout << "Your Zodiac : Leo" << endl;
        } else if (((arr[i].date >= 23) && (arr[i].month == 8)) || ((arr[i].date <= 22) && (arr[i].month == 9))) {
            cout << "Your Zodiac : Virgo" << endl;
        } else if (((arr[i].date >= 23) && (arr[i].month == 9)) || ((arr[i].date <= 22) && (arr[i].month == 10))) {
            cout << "Your Zodiac : Libra" << endl;
        } else if (((arr[i].date >= 23) && (arr[i].month == 10)) || ((arr[i].date <= 22) && (arr[i].month == 11))) {
            cout << "Your Zodiac : Scorpio" << endl;
        } else if (((arr[i].date >= 23) && (arr[i].month == 11)) || ((arr[i].date <= 21) && (arr[i].month == 12))) {
            cout << "Your Zodiac : Sagittarius" << endl;
        } else if (((arr[i].date >= 22) && (arr[i].month == 12)) || ((arr[i].date <= 19) && (arr[i].month == 1))) {
            cout << "Your Zodiac : Capricorn" << endl;
        } else if (((arr[i].date >= 20) && (arr[i].month == 1)) || ((arr[i].date <= 18) && (arr[i].month == 2))) {
            cout << "Your Zodiac : Aquarius" << endl;
        } else if (((arr[i].date >= 19) && (arr[i].month == 2)) || ((arr[i].date <= 20) && (arr[i].month == 3))) {
            cout << "Your Zodiac : Pisces" << endl;
        } else {
            cout << "Your Zodiac : -" << endl;
        }
    }
}

int main() {
    person listPerson[QUANTITY];

    inPerson(listPerson, QUANTITY);

    viewPerson(listPerson, QUANTITY);

    return 0;
}
