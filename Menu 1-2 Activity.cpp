#include <iostream>
#include <iomanip>
#include <cmath>
#include <thread> 
#include <chrono> 

using namespace std;

void makeSandwich() {
        cout << "Making a sandwich by yourself:" << endl;
        cout << "1. Get Bread" << endl;
this_thread::sleep_for(chrono::seconds(3));
        cout << "2. Add Cheese" << endl;
this_thread::sleep_for(chrono::seconds(3));
        cout << "3. Add Ham" << endl;
this_thread::sleep_for(chrono::seconds(3));
        cout << "4. Assemble Sandwich" << endl;
}

void prepareCoffee() {
        cout << "Preparing a Cup for the coffee..." << endl;
this_thread::sleep_for(chrono::seconds(3));
        cout << "Start Brewing the beans of the coffee..." << endl;
this_thread::sleep_for(chrono::seconds(2));
        cout << "Pour the coffee inside the cup..." << endl;
}

void prepareToast() {
        cout << "Getting a slice of bread..." << endl;
this_thread::sleep_for(chrono::seconds(3));
        cout << "Adding Cheese on the bread..." << endl;
this_thread::sleep_for(chrono::seconds(3));
        cout << "Adding Ham on the bread..." << endl;
}

int main() {
int activity;

do {
        cout << "Select an Activity:" << endl;
        cout << endl;
        cout << "1. Make a Sandwich (Sequential)" << endl;
        cout << "2. Prepare Coffee and Toast (Concurrent)" << endl;
        cout << "3. Perform House Chores (Parallel)" << endl;
        cout << "4. Organize a Party (Concurrent and Parallel)" << endl;
        cout << "5. EXIT" << endl;

        cout << "Enter a Choice: ";
cin >> activity;

switch (activity) {
case 1: {
        cout << "***********************************" << endl;
        cout << "Making a sandwich by yourself :" << endl;

thread sandwichThread(makeSandwich);
sandwichThread.join(); 
break;
}

case 2: {
        cout << "***********************************" << endl;
        cout << "Preparing Coffee and Toast :" << endl;                     

thread coffeeThread(prepareCoffee);
thread toastThread(prepareToast);


coffeeThread.join();
toastThread.join();

cout << "Finished preparing coffee and toast!" << endl;
break;
}

case 3:
        cout << "***********************************" << endl;
        cout << "Perform House Chores" << endl;
break;

case 4:
        cout << "***********************************" << endl;
        cout << "Organize a house party" << endl;
break;

case 5:
        cout << "Exiting the program." << endl;
break;

default:
        cout << "Enter a valid choice" << endl;
}

cout << endl; 

} while (activity != 5);

return 0;
}