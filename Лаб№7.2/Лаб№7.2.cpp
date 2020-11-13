#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n = 3;
    int arr[] = { 0,1,2};
    int s = pow(2, n);
        for (int i = 0; i < s; ++i)
        {
            cout << "{";
            for (int j = 0; j < n; ++j)
                if(i &(1<<j))
                // & побитовая конъюкция  << побитовый сдвиг влево
                cout << arr[j] << " ";
            cout << "}" << endl;
        }
    system("pause");
    return 0;
}

