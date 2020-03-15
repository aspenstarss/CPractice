// #include <iostream>
// #include <vector>
// #include <string>
#include "bits/stdc++.h"

using namespace std;

    bool IsContinuous( vector<int> numbers ) {
        if(numbers.size() != 5) return false;
        sort(numbers.begin(), numbers.end());
        int zero = 0, gap = 0;
        for(int num : numbers){
            if(num == 0) zero++;
        }
        
        for(int i = 1 + zero; i < numbers.size(); i++){
            if(numbers[i-1] == numbers[i]) return false;
            gap += numbers[i] - numbers[i-1] - 1; 
        }
        
        if(zero == 4 || zero == gap) return true;
        return false;
    }

int main()
{

    vector<int> a = {1,3,2,4,5};
    bool r = IsContinuous(a);
    cout << r << endl;
    
}