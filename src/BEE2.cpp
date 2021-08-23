#include <iostream>
#include "perlin.h"

using namespace std;
BaseNoise a;
int main(int argc, char const *argv[])
{
	vector <int16_t> old(a.permutation);
	a.randomize();
    cout << "test" << endl;	
    return 0;
}
