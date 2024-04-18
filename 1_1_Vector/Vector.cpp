#include <iostream>
#include <vector>
#include <fstream>
#include <ostream>

using namespace std;

int main()
{
    vector <int> V;
    int iteration=1;
    ifstream input("Data.txt");
    ofstream out, out1, out2;
    out.open("VectorIteration.txt");
    out1.open("VectorTop.txt");
    out2.open("VectorCapacity.txt");
    int ch;

    for (int i=0; i<100000; i++)
    {
        input >> ch;
        V.push_back(ch);
        out << iteration << endl;
        out1 << V.size() << endl;
        out2 << V.capacity() << endl;
        iteration++;
    }
    out.close();
    out1.close();
    out2.close();
    input.close();
}

