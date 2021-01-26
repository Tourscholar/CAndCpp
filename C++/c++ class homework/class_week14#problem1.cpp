#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
    ifstream fs_1("b.txt");
    string i;

    cout << "--------------------Read--------------------" << endl;
    while (fs_1 >> i)
    {
        cout << i << endl;
    }

    cout << "--------------------Count Word--------------------" << endl;
    ifstream file;
    file.open("b.txt");
    map<string, int> wordsCount;
    string s;
    getline(file, s);
    int pos = s.find_first_of(' ');
    while(s.size() > 0)
    {
        pos = s.find_first_of(' ');
        if(pos < 0)
            pos = s.size();
        string word = s.substr(0, pos);
        if(word != "")
            wordsCount[word]++;
        s = s.erase(0, pos+1);
    }
    for(map<string, int>::iterator iter = wordsCount.begin(); 
                           iter != wordsCount.end(); ++iter)
        cout << iter->first << ": " << iter->second << endl;
    
    fs_1.close();
    file.close();

    return 0;
}