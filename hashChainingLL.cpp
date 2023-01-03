#include <iostream>
using namespace std;
class Hash
{
public:
    int KEY;
    Hash *next;
};

int main()
{
    int mod;
    int array[10] = {44, 24, 6, 7, 8, 9, 10, 22, 23, 55};
    Hash **Hashtable = new Hash *[10];

    for (int i = 0; i < 10; i++)
    {
        *(Hashtable + i) = NULL;
    }

    Hash *priv = NULL;
    for (int i = 0; i < 10; i++)
    {
        mod = array[i] % 10;
        cout << array[i] << "-->" << mod << endl;
        Hash *h = new Hash;
        h->KEY = array[i];
        h->next = NULL;
        if (*(Hashtable + mod) == NULL)
        {
            *(Hashtable + mod) = h;
        }
        else
        {
            priv->next = h;
        }
        priv = h;
    }

    for (int i = 0; i < 10; i++)
    {
        Hash *temp = *(Hashtable + i);
        cout << i << "-->\t";
        while (temp != NULL)
        {
            cout << temp->KEY << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
