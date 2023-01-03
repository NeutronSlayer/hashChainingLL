#include <iostream>
using namespace std;

int main()
{
    int array[10] = {1, 4, 6, 7, 8, 9, 10, 22, 23, 24};
    int hashtable[10] = {};
    int mod;
    int i = 0, k =0;
    while (i <10)
    {
        //cout<< i<<"--> "<<k;
        mod = (k+array[i]) % 10;
        //cout<<"--> "<<mod<<"--> "<<array[i]<<endl;
        if (hashtable[mod] == 0)
        {
            //cout<<"!!!!!!"<< hashtable[mod] <<"-->"<< array[i]<<endl;
            hashtable[mod] = array[i];
            i++;
            k = 0;
        }
        k++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < 10; i++)
    {
        cout<< i<<"--> "<<hashtable[i]<<endl;
    }
}
