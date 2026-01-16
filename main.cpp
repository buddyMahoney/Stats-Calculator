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

    int mostFrequent = 0;
    if(nums.size() != 0){
        
        vector <vector <int>> table; // help me find a better name please!
        
        //iterates through nums
        for(int i = 0; i < nums.size(); i++){
            bool isFound = false;
            //iterates though table vector
            for(int j = 0; j < table.size(); j++){
                if(table[j][0] == nums[i]){//if nums[i] is found in the vector
                    table[j].push_back(nums[i]);//add it to the position where it was found
                }
            }
            
            if(isFound == false){
                table.push_back({nums[i]});
            }
        }
        
        //represents the number with the highest frequency
        mostFrequent = nums[0]; //sets the default value to the first # in nums
        int maxSize = table[0].size(); // initialize the maxSize to the frequency of the first # in the table
        
        //iterates through table
        for(int i = 0; i < table.size(); i++){
            if(table[i].size() > maxSize){
                maxSize = table[i].size();
                mostFrequent = table[i][0];
            }
            
        }
    }
    return mostFrequent;
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
    //Both set true base off assumption that they are already in order.
    bool retAscending = true;
    bool retDescending = true;
    //If the size is <= 2 than the order is in either order
    if(nums.size() <= 2)
    {
        return true;
    }

    for(int i=0; i <= nums.size()-1; i++)//if there is more than one number, goes through the vector
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
    return retAscending || retDescending; //Returns a return value for both cases
}
