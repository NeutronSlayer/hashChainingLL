#include <iostream>
using namespace std;
void insert(int arr[], int x)
{
    int k = 0;
    int mod = 0, primod = 0;
    bool found = false;
    while (!found)
    {
        if (k == 0)
        {
            mod = x % 10;
            primod = mod;
        }
        else
        {
            mod = (primod + k) % 10;
        }

        if (arr[mod] == 0)
        {

            found = true;
            arr[mod] = x;
        }
        k++;
    }
}

void printHashTable(int array[], int hashtable[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i << "--> " << hashtable[i] << endl;
    }
}

int main()
{
    int array[10] = {1, 4, 6, 7, 8, 9, 10, 22, 23, 24};
    int hashtable[10] = {};
    int mod;
    int i = 0, k = 0, priMod;

    for (int i = 0; i < 10; i++)
    {
        insert(hashtable, array[i]);
    }

    printHashTable(array, hashtable);
}
