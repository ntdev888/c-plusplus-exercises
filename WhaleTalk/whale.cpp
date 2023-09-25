#include <iostream>
#include <vector>
#include <string>

int main()
{
    using namespace std;

    string translate = "turpinetine and turtles";
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    vector<char> result;

    for (int i = 0; i < translate.size(); i++)
    {
        for (int j = 0; j < vowels.size(); j++)
        {
            if (translate[i] == vowels[j] && (translate[i] == 'e' || translate[i] == 'u'))
            {
                result.push_back(translate[i]);
                result.push_back(translate[i]);
            }
            else if (translate[i] == vowels[j])
            {
                result.push_back(translate[i]);
            }
        }
    }

    for (int k = 0; k < result.size(); k++)
    {
        cout << result[k] << ", ";
    }

    cout << "\n";
}