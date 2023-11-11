#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


//Sum of vector 
// The function accumulate returns the sum of all the values lying in a range between [first, last) with the variable sum. 
// accumulate(startRange, endRange, initialValue);

long aVeryBigSum(vector<long> ar) {
    return accumulate(ar.begin(),ar.end(),0L);

};

int main(){

    vector<long> ar = {1000000001,1000000002,1000000003,1000000004,1000000005};

    long result = aVeryBigSum(ar);

    cout << result <<endl;
    

    return 0;
}