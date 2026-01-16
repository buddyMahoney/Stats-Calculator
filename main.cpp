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
    vector<int> numbers = getNumbers();

    cout << "There are " << numberGreaterThanAverage(numbers) << " numbers greater than the average." << endl;
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
//--------------Greater than average
int getAverage(vector<int> nums)
{
    int avgNum = 0; // avgNums stores the numbers that are added together
    for (int i = 0; i < nums.size(); i++)
    {
        avgNum += nums[i]; // go through the list
        // add the number to avgNum
    }
    avgNum = avgNum / nums.size(); // Once all the numbers are added together, we divide by the size (how to get the average)
    return avgNum;                 // return the average
}

int numberGreaterThanAverage(vector<int> nums)
{
    // TODO Student 2
    // Findout how many numbers are greater than the average of all of the numbers
    int avgNum = getAverage(nums); // we send the list to getAverage, which will return the average back to us
    int total = 0;                 // this will add how many numbers are greater than the average
    for (int num : nums)
    {
        // go through the list again
        if (num > avgNum)
        {
            // if the number we are on is greater than the average
            total += 1; // add 1 to toal
        }
    }
    return total; // we reurn how many nymbers were greater than the average;
}
