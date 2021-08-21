//COMPLETE BUT CAN IMPROVE EXECUTION TIME
#include <bits/stdc++.h>
using namespace std;

class User
{
public:
    string name;
    int hash, size;

public:
    User(string name)
    {
        this->name = name;
        this->hash = 0;
        this->size = name.size();
    }
};

int main()
{
    int n;
    string s;
    vector<User> db;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        bool exists = false;
        for (int j = 0; j < db.size(); j++)
        {
            if (s.size() == db[j].name.size())
            {
                if (s == db[j].name)
                {
                    db[j].hash++;
                    exists = true;
                    cout << db[j].name << db[j].hash << endl;
                    break;
                }
            }
        }
        if (!exists)
        {
            cout << "OK" << endl;
            User temp(s);
            db.push_back(temp);
        }
    }
}