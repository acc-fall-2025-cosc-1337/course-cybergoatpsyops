#include "func.h"
#include <iostream>
using namespace std;
//main
int main()
{
    int choice;
    string dna;

    do
    {
        cout << "\nDNA Menu\n";
        cout << "1 - Get GC Content\n";
        cout << "2 - Get DNA Complement\n";
        cout << "3 - Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter DNA string: ";
            cin >> dna;
            double gc = get_gc_content(dna);
            cout << "GC Content: " << gc << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter DNA string: ";
            cin >> dna;
            string complement = get_dna_complement(dna);
            cout << "DNA Complement: " << complement << endl;
        }
        else if (choice != 3)
        {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3);

    cout << "Program exited.\n";
    return 0;
}