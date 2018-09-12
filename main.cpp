#include <iostream>
#include <iomanip>

using namespace std;

void printName(string name, char box) {
        double spaceLength = (13 - name.length()) /2;

        for (int i = 0; i <=15; ++i){
            cout << box;
        }

        cout << "\n" << box;

        for (int i = 0; i <= 13; ++i){
            cout << " ";
        }

        cout << box << endl << box;

        for (double i = 0; i <= spaceLength; ++i){
            cout << " ";
        }

        cout << name;


        if (name.length()%2 == 0){
            for (double i = 0; i <= spaceLength; ++i){
                cout << " ";
            }
        }

        else {
            for (double i = 0; i <= spaceLength - 1; ++i){
                cout << " ";
            }
        }

        cout << box;

        cout << "\n" << box;

        for (int i = 0; i <= 13; ++i){
            cout << " ";
        }

        cout << box << endl;

        for (int i = 0; i <=15; ++i){
            cout << box;
        }

        cout << "\n";

}

int main()
{
    cout << "Input name:  ";
    string name;
    cin >> name;

    while (name.length() >= 13){
        cout << "  The name must be under 13 characters long" << endl;
        cout << "Input name:  ";
        cin >> name;
    }

    cout << "Character for box:  ";
    char box;
    cin >> box;

    printName(name, box);

    return 0;
}
