#include <iostream>
using namespace std;
int main()
{
    const int SIZE=12;
    float arrReadings[SIZE] = { 152.37 , 164.82, 179.46, 193.11, 207.68, 
                                225.94, 241.59, 259.33, 
                                274.88, 292.41, 309.76, 326.29 };
    float static monthlyAve=0,total=0;
    int i = 0;
    cout << "Average meter reading over 12 months\n";
    cout << "Calculating teh monthly average...\n";

    for (i;i <= SIZE;i++) {
        total += arrReadings[SIZE];
    }

    monthlyAve += total / 12;
    cout << "Monthly average: "<<monthlyAve<<"\n";

    cout << "Determinig the highest and lowest reading\n";

    for(i;i<=SIZE;i++)
}
