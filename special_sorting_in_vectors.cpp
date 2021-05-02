//QUESTION
/* Given a vector containing name of N student (in lowercase letters) and their marks in an exam. The task is to sort the students with respect to their marks (student with highest marks will be on top). If marks are same, consider lexicographic sorting for names.

Example 1: 
Input:
N = 4
michal 56
john 100
abbas 98
jordan 45
Output: 
john 100
abbas 98
michal 56
jordan 45
Explanation:
Marks of students in decreasing order is
as 100, 98, 56, 45. So, their names are
as john 100, abbas 98, michal 56, jordan 45.

Your Task:
Since this is a function problem, you don't need to take any input. You just need to complete the provided function sortMarks(). Output the name of students with their marks in decreasing order, each student in new line.

Constraints:
1 <= N <= 106
1 <= marks <= 106 */

//SOLUTION

bool myCmp(pair<string, int=""> p1, pair<string, int=""> p2)
{
    if(p1.second > p2.second)
    {
        return 1;
    }
    else if(p1.second == p2.second)
    {
        if(p1.first < p2.first)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
    return 0;
}

vector<pair<string, int="">> sortMarks(vector<pair<string, int="">> v, int N)
{
    sort(v.begin(), v.end(), myCmp);
    
    return v;
}
