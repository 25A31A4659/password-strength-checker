#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    int strength = 0;
    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;

    // Check conditions
    for (char ch : password) {
        if (islower(ch)) hasLower = true;
        else if (isupper(ch)) hasUpper = true;
        else if (isdigit(ch)) hasDigit = true;
        else hasSpecial = true;
    }

    if (password.length() >= 8) strength++;
    if (hasLower) strength++;
    if (hasUpper) strength++;
    if (hasDigit) strength++;
    if (hasSpecial) strength++;

    // Result
    if (strength <= 2)
        cout << "Weak Password ";
    else if (strength <= 4)
        cout << "Medium Password ";
    else
        cout << "Strong Password ";

    return 0;
}
