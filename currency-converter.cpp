#include <iostream>
using namespace std;
int main() {
// Declare variables
double exchangeRate, amountInPKR, amountInUSD;
// Get the exchange rate from the user
cout << "Enter the exchange rate (1 PKR to USD): ";
cin >> exchangeRate;
// Get the amount in PKR from the user
cout << "Enter the amount in PKR: ";
cin >> amountInPKR;
// Convert PKR to USD
amountInUSD = amountInPKR * exchangeRate;
// Display the result
cout << amountInPKR << " PKR is equal to " << amountInUSD << " USD" << endl;
return 0;
}
