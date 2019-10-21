#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
    clock_t before, after;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    before = clock();

    ofstream f;
    f.open ("output.txt");

    for (int x=1; x < 100001; x++) {
        cout << to_string(x) + "\n";
        f << to_string(x) + "\n";
    }

    f.close();

    after = clock();

    double elapsed;
    
    elapsed = (double) (after - before) / CLOCKS_PER_SEC;

    cout << elapsed;

    return 0;
}