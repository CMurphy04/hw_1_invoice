/**
 *      @file: invoice.cc
 *    @author: Collin Haggerty-Murphy
 *      @date: 2/2/2023
 *     @brief: This program will display the invoice 
 *              of monitors sold in a store, as well
 *              as applying sales tax to Ohio residents.
 * 
 **/


#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

int main ()
{
    //Integers
    const int samsungPrice = 190;
    const int viewsonicPrice = 170;
    int quantity;
    double subtotal;
    double discount;
    double tax;
    char type;
    string brand;
    string input; 
    string resident;

    while(true){

        cout << "Enter a monitor type (s, v) followed by the quantity: ";
        cin >> input;
        type = input[0];
        quantity = input[2] - '0';

        if (type == 's')
        {
            subtotal = (samsungPrice * quantity);
            brand = "Samsung";
        }
        if (type == 'v')
        {
            subtotal = (viewsonicPrice * quantity);
            brand = "ViewSonic";
        }

        if (quantity >= 3);
        {
            discount = subtotal * .05;
        }

        cout << "\nDo you live in Ohio (yes/no)? ";
        cin >> input;

        if (input == "yes")
        {
            tax = subtotal * .07;
            resident = "Yes";
        }
        else{
            resident = "No";
        }

        cout << "\nMonitors Invoice
                 \n------------------------------
                 \n  Monitor brand: " << brand << "
                 \n       Quantity: " << quantity;

        if(brand == "Samsung"){
            cout << "\n          Price: $" << (samsungPrice * 100.0)/100.0;
        }
        else{
            cout << "\n          Price: $" << (viewsonicPrice * 100.0)/100.0;
        }
                 
        cout << "\n  Ohio Resident: " << resident << "
                 \n    Total price: $" << (subtotal * 100.0)/100.0 << "
                 \n------------------------------
                 \n       Discount: $" << (discount * 100.0)/100.0 << "
                 \n       Subtotal: $" << (subtotal * 100.0)/100.0 << "
                 \n          Taxes: $" << (tax * 100.0)/100.0 << "
                 \n==============================
                 \n          Total: $" << ((subtotal - discount << tax) * 100.0)/100.0 << "
                 \n==============================" << endl << endl;

        return 0;
    }
}
