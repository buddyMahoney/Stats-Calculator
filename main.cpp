#include <iostream>
#include <vector>
using namespace std;

vector<int> getNumbers();
int findMostFrequentNumber(vector<int> nums);
int numberGreaterThanAverage(vector<int> nums);
int greatestCommonDivisor(vector<int> nums);
bool isSorted(vector<int> nums);

int main()
{
    //get the numbers from the user
    vector<int> numbers = getNumbers();

    //process the numbers and print results
    cout<<"Most frequent number: "<<findMostFrequentNumber(numbers)<<endl;
    
    cout<<"There are "<<numberGreaterThanAverage(numbers)<<" numbers greater than the average."<<endl;

    cout<<"The greatest common divisor is: "<<greatestCommonDivisor(numbers)<<endl;
    
    if(isSorted(numbers))
    {
        cout<<"The numbers are sorted."<<endl;
    }
    else
    {
        cout<<"The numbers are not sorted."<<endl;
    }

    return 0;
}
//--
vector<int> getNumbers()
{
    vector<int> nums;
    int num;
    cout << "Enter numbers (0 to stop): ";
    while (cin >> num && num != 0)
    {
        nums.push_back(num);
    }
    return nums;
}
//--
int findMostFrequentNumber(vector<int> nums)
{
    // TODO: Student 1
    return -1;
}
//--
int numberGreaterThanAverage(vector<int> nums)
{
    // TODO: Student 2
    return 0;
}
//--
int greatestCommonDivisor(vector<int> nums)
{
    // TODO: Student 3
    //find the greatest number in the data set
    int greatestNum = -1;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > greatestNum){
            greatestNum = nums[i];
        }
    }
    //check if all nums are divisible by greatestNum and increment down if not

    //keep counter of how many nums in vector are divisable, if counter gets to size of vector, then that is gcd
    int countOfDivisible = 0;
    //itterate down from greatestNum to 1
    for(int i = greatestNum; i > 1; i--){
        //itterate through nums themselves
        for(int j = 0; j < nums.size(); j++){
        //check if nums[j] is divisible by i and increment counter if true
        if(nums[j] % i == 0){
            countOfDivisible++;
        }
        //if counter is equal to size of vector, return i as gcd
        if(countOfDivisible == nums.size()){
            return i;
            break;
        }
    }
    //reset counter for next itteration of i
    countOfDivisible = 0;
}
//if we itterate through all nums and the gdc is not found, it is 1
    return 1;
}
//--
bool isSorted(vector<int> nums)
{
    // TODO: Student 4
    return false;
}
