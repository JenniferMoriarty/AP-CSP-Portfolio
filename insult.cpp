#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void insultGen(string section) {
    vector<string> AM_names = { "gus", "ewan", "enoch", "manuel", "desean", "jaime", "javier" };
    vector<string> PM_names = { "nox", "liam", "clockston", "michael", "melissa", "vesper" };
    vector<string> insults = { "is a goof nugget", "eats socks for breakfast", "is cooked", "likes their cheese drippy" };

    cout << "insult generator!" << endl;
    cout << "here are three insults:" << endl;

    srand(time(0));  // Seed the random number generator

    if (section == "AM") {
        for (int i = 0; i < 3; i++) {
            cout << AM_names[rand() % 7] << " " << insults[rand() % 4] << endl;
        }
    }
    else {
        for (int i = 0; i < 3; i++) {
            cout << PM_names[rand() % 6] << " " << insults[rand() % 4] << endl;
        }
    }
}

int main() {
    string choice;
    cout << "pick AM or PM: ";
    cin >> choice;
    insultGen(choice);
}
