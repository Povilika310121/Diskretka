#include <iostream>
#include <fstream>
using namespace std;
//#1 Размещения с повторениями по k элементов
bool nextCombObj(int* razP, int k, int n);
int main()
{
    int k;
    int n = 10;
    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    cout << "k=";
    cin >> k;
    int* razP = new int[k];
    for (int i = 0; i < k; ++i)
    {
        razP[i] = 0;
    }
    ofstream A("A.txt");
    for (int i = 0; i < k; ++i)
    {
        A << arr[razP[i]];
    }
    A << endl;
    while ((nextCombObj(razP, k, n)))
    {
        for (int i = 0; i < k; ++i)
        {
            A << arr[razP[i]];
        }
        A << endl;
    }
    system("pause");
    return 0;
}
bool nextCombObj(int* razP, int k, int n)
{
    int j = k - 1;
    while (j >= 0 && razP[j] == n - 1)
        j--;
    if (j == -1) return false;
    razP[j]++;
    {
        for (int q = j + 1; q < k; q++)
            razP[q] = 0;
    } return true;
  