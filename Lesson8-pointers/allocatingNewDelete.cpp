#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cout << "How many integers shall I reserve memory for? ";
    int numEntries = 0;
    cin >> numEntries;

    int *myNumbers = new int[numEntries];

    cout << "Memory allocated at: " << myNumbers << hex << endl;

    // de-allocate before exiting
    delete []myNumbers;
    return 0;
}