#include <iostream>

using namespace std;

int lengthOfLastWord(string s)
{
    int Lenth = s.length() - 1;
    int count = 0;
    for (int i = Lenth; i >= 0; i--)
    {
        if (s[Lenth] == ' ')
        {
            Lenth--;
            continue;
        }
        if (s[i] != ' ')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

int main()
{
    
    
    return 0;
}