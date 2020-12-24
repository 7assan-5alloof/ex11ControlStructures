#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;

    while (true)
    {
        int year;
        bool typeOfYear;
        cout << "Enter a year: ";
        cin >> year;
        cout << "Enter 0 for Gregorian, 1 for Hijri: ";
        cin >> typeOfYear;

        int peerYear;
        if (typeOfYear)
        {
            peerYear = 0.97023 * year + 621.57;
            cout << year << " Hijri matches " << peerYear << " A.D" << endl;
        }
        else
        {
            peerYear = (year - 621.57) / 0.97023;
            cout << year << " A.D matches " << peerYear << " Hijri" << endl;
        }
    }

    return 0;
}
