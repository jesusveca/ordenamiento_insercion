#include <iostream>
#include <vector>

using namespace std;

void insercion(vector<int>a);

int main()  {
    vector<int>vec;
    vec.push_back(1101);    vec.push_back(1);
    vec.push_back(889333);  vec.push_back(8);
    vec.push_back(3);       vec.push_back(1282922);
    insercion(vec);
}

void insercion(vector<int>a)        {
    int key,i;
    for(int j=1; j<a.size(); j++)   {
        key = a[j];
        i = j-1;
        while(i>=0 and a[i]>key)    {
            a[i+1] = a[i];
            i = i-1;
        }
        a[i+1]=key;
    }
    
    for(int i=0;i<a.size();i++) cout<<a[i]<<endl;
}