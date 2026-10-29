#include <iostream>
#include <string>
using namespace std;

int main() {
    string dna;
    cout << "Enter DNA sequence: ";
    cin >> dna;

    int gc_count = 0;
    for (char c : dna) {
        if (c == 'G' || c == 'g' || c == 'C' || c == 'c') {
            gc_count++;
        }
    }

    if (dna.length() == 0) {
        cout << "No sequence entered!" << endl;
        return 0;
    }

    double gc_percent = (double)gc_count / dna.length() * 100;

    cout << "GC Count: " << gc_count << endl;
    cout << "Total Length: " << dna.length() << endl;
    cout << "GC Content: " << gc_percent << "%" << endl;

    return 0;
}