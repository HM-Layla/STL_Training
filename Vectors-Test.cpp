#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
#include <bits/stdc++.h> 

using namespace std;

//****************************************************
// int diagonalDifference(vector<vector<int>> arr) {

//     int left_to_right =0;
//     int right_to_left =0;
//     for (int i = 0; i < arr.size(); i++)
//     {      
//         left_to_right+=arr[i][i];
//         right_to_left+=arr[i][arr.size() - (i +1)];
        
        
//     }
    

// return right_to_left;

// }

//****************************************************

// void plusMinus(vector<int> arr) {
//     float negative = 0.0;
//     float positive = 0.0;
//     float zero = 0.0;
//     for (int i=0; i<arr.size(); i++) {
//         if (arr[i] > 0) {
//             positive ++;
//         } 
//         if (arr[i]<0) {
//             negative++;
//         }
        
//         if (arr[i]==0) {
//             zero ++;
//         }
//     }
    
//     float arrpos = positive / arr.size();
//     float arrneg = negative / arr.size();
//     float arrz = zero / arr.size();
    
//     cout << arrpos << endl;
//     cout << arrneg << endl;
//     cout << arrz << endl;
// }

//****************************************************


// void staircase(int n) {
   
//     for(int i=1;i<=n;i++){
      
//      cout<<setw(n)<<right <<string(i,'#')<<endl;
      
//     }
// }


//****************************************************

// void miniMaxSum(vector<int> arr) {
    
// sort(arr.begin(), arr.end(), greater<int>());
// int summax =0;
// for (int i=1; i<=arr.size()-1; i++) {
//     summax+=arr[i];
// }
// int summin =0;
// sort(arr.begin(),arr.end());

// for (int i=1; i<=arr.size()-1; i++) {
//     summin+=arr[i];
// }

// cout << summax << " " <<summin <<endl;
// }

//******************************************************

// void miniMaxSums(vector<int> arr) {

// int length = arr.size();
// long long maxele = *max_element(arr.begin(), arr.end());// find the higest value element 
// long long minele = *min_element(arr.begin(), arr.end());// find the lowest value element
// long long totalsum = 0;

// for (int i =0; i < length; i++){
//     totalsum +=arr[i];
// }

// cout << (totalsum -maxele) << ' ' << (totalsum - minele) <<endl;
// }
//******************************************************


string timeConversion(string s){
    
}


int main() 
{ 




//******************************************************


// vector<int> v {256741038, 623958417 ,467905213 ,714532089, 938071625};

// //miniMaxSum(v);



// miniMaxSums(v);


//****************************************************	
 
// int n = 3;
// for (int level = 1; level <=n; level++) {
//     int numspaces = n - level;
//     int numHashes = level;
    
    
//     for (int k=0 ; k < numspaces; k++){
//         cout <<" ";
//     }
//     for (int j =0; j < numHashes; j++) {
//         cout << "#";
//     }
//     cout << endl;
// }


	// vector<int> vect {-4, 3, -9 ,0 ,4 ,1}; 
    // plusMinus(vect);


//****************************************************	
// 	vector<vector<int>> vect 
// 	{ 
// 		{1, 2, 3}, 
// 		{4, 5, 6}, 
// 		{7, 8, 9} 
// 	}; 
	
//     auto res = diagonalDifference(vect);
//     cout << res <<endl;
	
//     for (int i = 0; i < vect.size(); i++) 
//     { 
//         for (int j = 0; j < vect[i].size(); j++) 
//         { 
//             cout << vect[i][j] << " "; 
//         }     
//         cout << endl; 
//     } 

	return 0; 
} 
