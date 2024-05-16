#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}


void merge_(vector<int> v1, vector<int> v2, vector<int> v)
{
    //vector<int> v;
    int n = v1.size(), m = v2.size();

    int i = 0, j = 0, k = 0; // i will ittereate in v1
    while (i < n && j < m)
    {
        if (v1[i] < v2[j])
        {
            v[k] = v1[i];
            i++;
            k++;
        }
        else 
        {
            v[k] = v2[j];
            j++;
            k++;
        }
        // now condition for the elements left in the arrays.

        while(i<n)
        {
            v[k] = v1[i];
            i++;
            k++;
        }
        while(j<m)
        {
            v[k] = v2[j];
            j++;
            k++;
        }
    }
    
}



int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(9);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(8);
    v2.push_back(10);

    cout << "vector 1 is: " << endl;
    print(v1);
    cout << "vector 2 is: " << endl;
    print(v2);

    vector<int> ans;
    cout<<"printing the merged vector: "<<endl;
    merge_(v1,v2,ans);
    print(ans);
}