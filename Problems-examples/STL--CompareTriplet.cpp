#include<iostream>
#include <vector>
using namespace std;

// Compare Triplet problem ::: Hacker Rank 


vector<int> compareTriplets(vector<int> a, vector<int> b) {

    int s1=0;
    int s2=0;
    vector<int>v;

    for(int i=0; i<a.size();i++){
        if(a[i] > b[i]){
           s1++;
        }
        else if(a[i] < b[i]){
            s2++;

        }
    }
    
    v.push_back(s1);
    v.push_back(s2);

return v;
}

int main()
{
    vector<int> a = {5,6,7};
    vector<int> b = {3,6,10};

    vector<int> result = compareTriplets(a, b);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i]  << " " ;
        cout << " " ;
    }
    




    return 0;
}

