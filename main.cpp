#include <fstream>
#include <string>
#include <iostream>
using namespace std;

/**
 * Calc the sum
 * 
 * @param The number
 * @return The Sum
 */
int sum(int n) {
    // Sn = (a1 + an) * n / 2
    int result = 0;
    if (n >= 1) {
        result = (1 + n) * n / 2;
    } else if (n == 0) {
        result = 1;
    } else {
        result = (n + 1) * (1 - n + 1) / 2;
    }
    return result;
    //    int result = 0;
    //
    //    if (n == 0) {
    //        result = 1;
    //    }
    //    if (n < 0) {
    //        for (int i = n; i <= 1; ++i) {
    //            result += i;
    //        }
    //    } else {
    //        for (int i = 1; i <= n; ++i) {
    //            result += i;
    //        }
    //    }
    //
    //    return result;
}

int main(int argc, char** argv) {
    ifstream in;
    string inFileName = "INPUT.TXT";
    in.open(inFileName.c_str());
    if (!in.is_open()) {
        cerr << "Error: could not open file: " << inFileName.c_str() << endl;
        return 1;
    }

    ofstream out;
    string outFileName = "OUTPUT.TXT";
    out.open(outFileName.c_str());
    if (!out.is_open()) {
        cerr << "Error: could not open file: " << inFileName.c_str() << endl;
        return 1;
    }

    int n;
    int result;
    if (in >> n) {
        result = sum(n);
        out << result << endl;
    } else {
        cerr << "Error: incorrect data in the file: " << inFileName.c_str() << endl;
        return 1;
    }

    return 0;
}
