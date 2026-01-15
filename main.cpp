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
    return 1;
}
//--
bool isSorted(vector<int> nums)
{
    // TODO: Student 4
    //Both set true base off assumption that they are already in order.
    bool retAscending = true;
    bool retDescending = true;
    //If the size is one or less, than the order is in either order
    if(nums.size() <= 1)
    {
        return true;
    }

    for(int i=0; i < nums.size()-1; i++)//if there is more than one number, goes through the vector
    {
        //Checks to see if the ascending order is misordered. If so, it changes the return value to false
        if(nums[i] > nums[i+1])
        {
            retAscending = false;
        }
        //Checls to see if the descending order is misordered. If so it changes the return value to false.
        if(nums[i] < nums[i+1])
        {
            retDescending = false;
        }
    }    
    return retAscending || retAscending; //Returns a return value for both cases
}
