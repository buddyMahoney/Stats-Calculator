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
    // get the numbers from the user
    vector<int> numbers = getNumbers();

    // process the numbers and print results
    // cout << "Most frequent number: " << findMostFrequentNumber(numbers) << endl;

    cout << "There are " << numberGreaterThanAverage(numbers) << " numbers greater than the average." << endl;

    // cout << "The greatest common divisor is: " << greatestCommonDivisor(numbers) << endl;

    /*
    if (isSorted(numbers))
    {
        cout << "The numbers are sorted." << endl;
    }
    else
    {
        cout << "The numbers are not sorted." << endl;
    }
        */

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

//----------------------------------------------------------------

// Take in the vector nums to calculate the average
int getAverage(vector<int> nums)
{
    int avgNum = 0; // avgNums stores the numbers that are added together
    for (int i = 0; i < nums.size(); i++)
    {                      // go through the list
        avgNum += nums[i]; // add the number to avgNum
    }

    avgNum = avgNum / nums.size(); // Once all the numbers are added together, we divide by the size (how to get the average)
    return avgNum;                 // return the average
}

int numberGreaterThanAverage(vector<int> nums)
{
    // TODO: Student 2
    // Find out how many numbers are greater than the average of all of the numbers

    int avgNum = getAverage(nums); // we send the list to getAverage, which returns the average back to us
    int total = 0;                 // this will add how many numbers are greater than the average

    for (int num : nums)
    { // go through the list again
        if (num > avgNum)
        {               // if the number we are on, is greater than the average
            total += 1; // add 1 to total
        }
    }
    return total; // we return how many numbers were greater than the average
}

//----------------------------------------------------------------

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
    return false;
}
