//developer - philip ackroyd

#include <iostream>

#include <math.h>

using namespace std;

int main()
{
    cout << "enter frequency in MHz range 1 to 1000 " << endl; //define range parameters

    int f; //define frequency variable

    cin >> f; //assign integer to variable request input

    cout << "you entered" << f <<  endl; //display confirmation of frequency inputted

    cout << " MHz" << endl;

    f = (f * 1000000); //convert MHz to cycles

    int w; //define wavelength variable

    w = ( f / 299792458); //arithmetic operands for wavelength calculation - integer for c squared in m/s

    int wh; //define variable for half wavelength

    wh = ( w / 2 ); //calculation for half w

    int wq; //define variable for quarter w

    wq = ( w / 4 ); //calculation for quarter w

    int we; //define variable for eigth w

    we = ( w / 8 ); //calculation for eigth w


    cout << "full wavelength in meters " << w << endl; //display result

    cout << "half wavelength in meters " << wh << endl; //display result

    cout << "quarter wavelength in meters " << wq << endl; //display result

    cout << "eigth wavelength in meters " << we << endl; //display result


    return 0; //code processing result to OS
}
