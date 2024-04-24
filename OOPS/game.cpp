#include<iostream>
#include<vector>
using namespace std;
class game{
    private:
        string name;
        string gun;
        int noOfplayer;
        int alive;
        int health;

    public:

        void setn(string name){
            this->name = name;
        }
        void setg(string gun){            // all data members are set
            this->gun = gun;                          //    1.
        }
        void setnOp(int noOfplayer){
            this->noOfplayer = noOfplayer;
        }
        void setg(int alive){
            this->alive = alive;
        }
        void setg(int health){
            this->health = health;
        }


        //       nested class for helmet
        class helmet{
            private: 
                int hp;
                int level;
            public:
                void setn(int hp){
                    this->hp = hp;
                }
                void setn(int level){
                    this->level = level;
                }
        };
        //         nested class for waste
        class jacket{
            private: 
                int hp;
                int level;
            public:
                void setn(int hp){
                    this->hp = hp;
                }
                void setn(int level){
                    this->level = level;
                }
        };
};

// int main(){

// }
#include <stdio.h>  

// Define a union named AccountData that contains a structure with fields for the account holder's name, account number, and balance
union AccountData {
    struct {
        char name[50];
        int number;
        float balance;
    } account;
};

// Define a function to deposit money to the account
void deposit(union AccountData *a, float amount) {
    a->account.balance += amount; // Add the amount to the balance
    printf("Amount deposited successfully.\n"); // Print a success message
}

// Define a function to withdraw money from the account
void withdraw(union AccountData *a, float amount) {
    if (a->account.balance >= amount) { // Check if the balance is sufficient
        a->account.balance -= amount; // Subtract the amount from the balance
        printf("Amount withdrawn successfully.\n"); // Print a success message
    }
    else {
        printf("Insufficient balance. Withdrawal failed.\n"); // Print an error message
    }
}

// Define a function to display the account details
void display(union AccountData *a) {
    printf("Account holder's name: %s\n", a->account.name); // Print the name
    printf("Account number: %d\n", a->account.number); // Print the number
    printf("Balance: %.2f\n", a->account.balance); // Print the balance
}

int main() {
    union AccountData a; // Declare an AccountData variable

    // Read the input from the user
    scanf("%[^\n]%*c", a.account.name); // Read the name
    scanf("%d%*c", &a.account.number); // Read the number
    scanf("%f%*c", &a.account.balance); // Read the initial balance

    float deposit_amount, withdraw_amount; // Declare variables for deposit and withdrawal amounts

    scanf("%f%*c", &deposit_amount); // Read the deposit amount
    deposit(&a, deposit_amount); // Call the deposit function

    scanf("%f%*c", &withdraw_amount); // Read the withdrawal amount
    withdraw(&a, withdraw_amount); // Call the withdraw function

    display(&a); // Call the display function

    return 0;
}
// #include <iostream>
// using namespace std;

// // Define a structure named Time that contains fields for hours, minutes, and seconds
// struct Time {
//     int hours;
//     int minutes;
//     int seconds;
// };

// Define a function to calculate the difference between two time periods
void calcDifference(const Time& t1, const Time& t2, Time& result) {
    // Convert the time periods to seconds
    int t1_seconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int t2_seconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Calculate the absolute difference in seconds
    int diff_seconds = abs(t1_seconds - t2_seconds);

    // Convert the difference back to hours, minutes, and seconds
    result.hours = diff_seconds / 3600;
    result.minutes = (diff_seconds % 3600) / 60;
    result.seconds = (diff_seconds % 3600) % 60;
}

int main() {
    Time t1, t2, result; // Declare Time variables

    // Prompt the user to enter the start time and finish time in HH:MM:SS format
    cout << "Enter start time (HH:MM:SS): ";
    scanf("%d:%d:%d", &t1.hours, &t1.minutes, &t1.seconds); // Read the start time

    cout << "Enter finish time (HH:MM:SS): ";
    scanf("%d:%d:%d", &t2.hours, &t2.minutes, &t2.seconds); // Read the finish time

    // Call the calcDifference function to compute the time difference
    calcDifference(t1, t2, result);

    // Display the duration of the race in HH:MM:SS format
    cout << "Duration of the race: ";
    printf("%02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);

    return 0;
}
#include <iostream>
using namespace std;

// Define a class named Year that includes an enumeration called Month
// class Year {
//     public:
//     // Define the Month enumeration with twelve constants representing the months of the year
//     enum Month {
//         JANUARY = 1,
//         FEBRUARY,
//         MARCH,
//         APRIL,
//         MAY,
//         JUNE,
//         JULY,
//         AUGUST,
//         SEPTEMBER,
//         OCTOBER,
//         NOVEMBER,
//         DECEMBER
//     };
// };

// int main() {
//     int n; // Declare an integer variable to store the input number
//     cout << "Enter a number representing a month: "; // Prompt the user to enter a number
//     cin >> n; // Read the input number

//     // Check if the input is valid (between 1 and 12)
//     if (n >= 1 && n <= 12) {
//         // Use a switch statement to map the input number to the corresponding month name
//         cout << "Month: ";
//         switch (n) {
//             case Year::JANUARY:
//                 cout << "JANUARY\n";
//                 break;
//             case Year::FEBRUARY:
//                 cout << "FEBRUARY\n";
//                 break;
//             case Year::MARCH:
//                 cout << "MARCH\n";
//                 break;
//             case Year::APRIL:
//                 cout << "APRIL\n";
//                 break;
//             case Year::MAY:
//                 cout << "MAY\n";
//                 break;
//             case Year::JUNE:
//                 cout << "JUNE\n";
//                 break;
//             case Year::JULY:
//                 cout << "JULY\n";
//                 break;
//             case Year::AUGUST:
//                 cout << "AUGUST\n";
//                 break;
//             case Year::SEPTEMBER:
//                 cout << "SEPTEMBER\n";
//                 break;
//             case Year::OCTOBER:
//                 cout << "OCTOBER\n";
//                 break;
//             case Year::NOVEMBER:
//                 cout << "NOVEMBER\n";
//                 break;
//             case Year::DECEMBER:
//                 cout << "DECEMBER\n";
//                 break;
//         }
//     }
//     else {
//         // If the input is invalid, display an error message
//         cout << "Invalid month input.\n";
//     }

//     return 0;
// }
