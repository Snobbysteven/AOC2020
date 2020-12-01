#include <bits/stdc++.h>

using namespace std;

int findNumbersPart1(vector<int> nums){

    for(int i = 0; i < nums.size(); i++) {
        int difNum = 0;
        difNum = 2020 - nums[i];
        for(int j = i+1; j < nums.size(); j++){
            if(nums[j] == difNum) {
                cout << nums[i] << " + " << difNum << " = " << nums[j]+difNum << endl;
                cout << nums[i] << " * " << difNum << " = " << nums[j]*difNum << endl;
                cout << "Part 1 Answer: " << nums[i]*difNum << endl;
                return nums[i] * difNum;
            }

        }
    }
return -1;
}

int findNumbersPart2(vector<int> nums) {
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i+1; j < nums.size(); j++){
            int difNum = 0;
            if((nums[i] + nums[j]) < 2020) {
            difNum = 2020 - (nums[i] + nums[j]);
            for(int k = j+1; k < nums.size(); k++) {
                if(nums[k] == difNum) {
                    cout << nums[i] << " + " << nums[j] << " + " << nums[k] << " = " << nums[i]+nums[j]+nums[k] << endl;
                    cout << nums[i] << " * " << nums[j] << " * " << nums[k] << " = " << nums[i]*nums[j]*nums[k] << endl;
                    cout << "Part 2 Answer: " << nums[i]*nums[j]*nums[k] << endl;
                    return nums[i]*nums[j]*nums[k];

                }

            }
            }

        }

    }

    return -1;
}


int main(){
    ifstream inputFile("day1Input.txt");
    vector<int> nums  = {};
    int current_number = 0;
    while (inputFile >> current_number){
        nums.push_back(current_number);
        }
        inputFile.close();
    findNumbersPart1(nums);
    findNumbersPart2(nums);

}
