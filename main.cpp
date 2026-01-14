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

int numberGreaterThanAverage(vector<int> nums)
{
    // TODO: Student 2
    // Find out how many numbers are greater than the average of all of the numbers
    int avgNum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        avgNum = nums[i] + avgNum;
    };
    return avgNum;

    // go through and add all of the numbers together, then divide for the average
    // set that to AVGNUM
    // then go through the list again, and compare to AVGNUM.
    // If greater, return the number
    // if not, skip over to the next
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
