#include <iostream>
using namespace std;
int main() {
    string females[10] = {"Azure, Elis, Ellen, Faith, Yasmin"};
    string males[10] = {"Gideon, Daniel, Livingstone, Rapheal, Desmond"};
    
    int choice;
    cout << "Student of CWG academy 2025" << endl;
    cout << "Enter 1 for Females or 2 for Males: ";
    cin >> choice;
    
    if(choice == 1) {
        cout << "Females: ";
        for(int i=0; i<5; i++) cout << females[i] << " ";
    } else {
        cout << "Males: ";
        for(int i=0; i<5; i++) cout << males[i] << " ";
    }
    return 0;
}