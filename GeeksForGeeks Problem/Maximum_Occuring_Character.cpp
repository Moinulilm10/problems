// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     // Function to find the maximum occurring character in a string.
//     char getMaxOccurringChar(string str)
//     {
//         // Your code here
//         int arr[26] = {0};
//         for (int i = 0; i < str.length(); i++)
//         {
//             char ch = str[i];
//             int number = 0;
//             number = ch - 'a';
//             arr[number]++;
//         }

//         int maxx = -1, ans = 0;
//         for (int i = 0; i < 26; i++)
//         {
//             if (maxx < arr[i])
//             {
//                 ans = i;
//                 maxx = arr[i];
//             }
//         }
//         int finalAns = 'a' + ans;
//         return finalAns;
//     }
// };

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string str;
//         cin >> str;
//         Solution obj;
//         cout << obj.getMaxOccurringChar(str) << endl;
//     }
// }

#include <iostream>
using namespace std;

int main()
{
    // Write C++ code here
    int i, j;
    int total_marks[] = {
        6, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1};
    int marks_count[11];

    for (i = 0; i < 11; i++)
    {
        marks_count[i] = 0;
    }

    for (i = 0; i < 12; i++)
    {
        marks_count[total_marks[i]]++;
        for (j = 0; j < 10; j++)
        {
            cout << marks_count[j];
        }
        cout << "\n";
    }
    return 0;
}