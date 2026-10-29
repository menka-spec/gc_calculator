#include <iostream>
#include <string>
using namespace std;

int main() {
    string seq;
    cout << "Enter DNA Sequence: ";
    cin >> seq;

    int gc_count = 0;
    for (char base : seq) {
        // Step 2 ka validation code
        if (base != 'A' && base != 'T' && base != 'G' && base != 'C') {
            cerr << "Warning: Non-canonical DNA character detected: " << base << endl;
        }
        if (base == 'G' || base == 'C') {
            gc_count++;
        }
    }

    float gc_percentage = ((float)gc_count / seq.length()) * 100;

    cout << "Sequence: " << seq << endl;
    cout << "GC Content: " << gc_percentage << "%" << endl;
    cout << "Total Sequence Length: " << seq.length() << " bp" << endl;

    return 0;
}