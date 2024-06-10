#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    const string monthNames[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", 
                                   "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

public:
    // No argument constructor
    Date() : day(1), month(1), year(2000) {}

    // Parameterized constructor
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Function to accept date from users
    void acceptDate() {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    // Function to display date in different formats
    void displayDate() {
        // Format: dd-mm-yyyy
        cout << setfill('0') << setw(2) << day << "-" << setw(2) << month << "-" << year << endl;

        // Format: dd-MMM-yyyy
        cout << setfill('0') << setw(2) << day << "-" << monthNames[month - 1] << "-" << year << endl;

        // Format: dd/mm/yy
        cout << setfill('0') << setw(2) << day << "/" << setw(2) << month << "/" << setw(2) << (year % 100) << endl;
    }

    // Function to calculate difference between two dates
    int dateDifference(const Date& other) {
        struct tm a = {0,0,0, other.day, other.month - 1, other.year - 1900};
        struct tm b = {0,0,0, day, month - 1, year - 1900};
        time_t x = mktime(&a);
        time_t y = mktime(&b);
        return difftime(y, x) / (60 * 60 * 24);
    }

    // Function to increment the day
    void incrementDay() {
        day++;
        if (day > daysInMonth()) {
            day = 1;
            incrementMonth();
        }
    }

    // Function to increment the month
    void incrementMonth() {
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }

private:
    // Helper function to get the number of days in the current month
    int daysInMonth() const {
        switch (month) {
            case 4: case 6: case 9: case 11: return 30;
            case 2: return (isLeapYear() ? 29 : 28);
            default: return 31;
        }
    }

    // Helper function to check if the current year is a leap year
    bool isLeapYear() const {
        if (year % 4 != 0) return false;
        if (year % 100 == 0 && year % 400 != 0) return false;
        return true;
    }
};

int main() {
    Date date1;
    date1.acceptDate();
    Date date2(15, 6, 2023);

    cout << "Date 1: " << endl;
    date1.displayDate();
    
    cout << "Date 2: " << endl;
    date2.displayDate();

    int diff = date1.dateDifference(date2);
    cout << "Difference between date1 and date2: " << diff << " days" << endl;

    cout << "Incrementing date1 by one day:" << endl;
    date1.incrementDay();
    date1.displayDate();

    cout << "Incrementing date1 by one month:" << endl;
    date1.incrementMonth();
    date1.displayDate();

    return 0;
}
