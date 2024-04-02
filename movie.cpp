/*This code is for counting how many tickets are sold on the whole 
not for individual no of tickets for each movie*/
#include <iostream>
using namespace std;

class Movie {
    char MovieName[50];
    public:
        static int MovieCount;
        Movie() {
            cout << "Enter movie name: ";
            cin.ignore(); 
            cin.getline(MovieName, 50);
            MovieCount++;
            cout << "TICKET SOLD : " << MovieCount << endl;
        }
        static void MovieNotBooked() {
            cout << "THE END \nTOTAL NUMBER OF TICKET SOLD : " << MovieCount << endl;
        }
};

int Movie::MovieCount = 0;

int main() {
    char ch;
    do {
        cout << "Enter your choice y/n : ";
        cin >> ch;
        if(ch == 'y') {
            Movie m;
            cout << "Ticket booked" << endl;
            cout << "Ticket count : " << Movie::MovieCount << endl;
        }
    } while(ch == 'y');
    
    Movie::MovieNotBooked();
    
    return 0;
}
