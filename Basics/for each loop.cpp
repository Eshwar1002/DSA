#include <iostream>
using namespace std;

int main(){
    int nums[5] = {10, 20, 30, 40, 50};
    for ( int a : nums){
        cout<< a <<endl;
    }
    return 0;
}
