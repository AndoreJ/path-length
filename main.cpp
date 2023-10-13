#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int main(); {
        double length, width;

        

        cout << "Enter the length of the grass in meters: ";
        cin >> length;

        cout << "Enter the width of the grass in meters: ";
        cin >> width;

        double perimeter = 4 * length;
        double path_length = perimeter;

        cout << "You need to buy: " << fixed << setprecision(2) << path_length << "meters worth of path tiles" << endl;

        return 0;
    }

}
