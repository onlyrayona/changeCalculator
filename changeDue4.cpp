// Lab 7.3
// Programmer: Rayona Young
// Editor(s) used: PyCharm CE
// Compiler(s) used: LLVM-GCC
//
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    while(true)
    {
//code block to read cash payment from keyboard as int
        cout << "Enter 0 to exit" << endl;
        int cashPayment;  //price of good or service
        cout << "What is the amount due? ";
        cin >> cashPayment;
        cin.ignore(1000, 10);

        if (cashPayment <= 0) break;  //break if user enters 0 or negative

 //code block to read amount tendered from keyboard as in
        int amountTendered; //amount tendered
        cout << "What is the amount tendered? ";
        cin >> amountTendered;
        cin.ignore(1000, 10);

        if (amountTendered <= 0) break; //break if user enters 0 or negative

 // output (calculated) values
        int changeDue = amountTendered - cashPayment;
        cout << "Cash payment amount: " << cashPayment << endl;
        cout << "Tendered amount: " << amountTendered << endl;
        cout << "Change due: " << changeDue << endl;
        int hundredThousands = changeDue / 100000;
        changeDue = changeDue % 100000;
        int tenThousands = changeDue / 10000;
        changeDue = changeDue % 10000;
        int fiveThousands = changeDue /5000;
        changeDue = changeDue % 5000;
        int oneThousands = changeDue / 1000;
        changeDue = changeDue % 1000;
        int fiveHundreds = changeDue / 500;
        changeDue = changeDue % 500;
        int oneHundreds = changeDue / 100;
        changeDue = changeDue % 100;
        int fiftys = changeDue / 50;
        changeDue = changeDue % 50;
        int twentys = changeDue / 20;
        changeDue = changeDue % 20;
        int tens = changeDue / 10;
        changeDue = changeDue % 10;
        int fives = changeDue / 5;
        changeDue = changeDue % 5;
        int twos = changeDue / 2;
        changeDue = changeDue % 2;
        int ones = changeDue / 1;
        changeDue = changeDue % 1;
        cout << endl;
        cout << "Change paid out in:" << endl;

        if (hundredThousands > 0)
            cout << "   this many hundred thousand dollar bills: " << hundredThousands << endl;
        if (tenThousands > 0)
            cout << "   this many ten thousand dollar bills: " << tenThousands << endl;
        if (fiveThousands > 0)
            cout << "   this many five thousand dollar bills: " << fiveThousands << endl;
        if (oneThousands > 0)
            cout << "   this many thousand dollar bills: " << oneThousands << endl;
        if (fiveHundreds > 0)
            cout << "   this many five hundred dollar bills: " << fiveHundreds << endl;
        if (oneHundreds > 0)
            cout << "   this many hundred dollar bills: " << oneHundreds << endl;
        if (fiftys > 0)
            cout << "   this many fifty dollar bills: " << fiftys << endl;
        if (twentys > 0)
            cout << "   this many twenty dollar bills: " << twentys << endl;
        if (tens > 0)
            cout << "   this many ten dollar bills: " << tens << endl;
        if (fives > 0)
            cout << "   this many five dollar bills: " << fives << endl;
        if (twos > 0)
            cout << "   this many two dollar bills: " << twos << endl;
        if (ones > 0)
            cout << "   this many one dollar bills: " << ones << endl;
        cout << endl;

    } //while

    cout << "Cash payment amount: 0" << endl;

} //main