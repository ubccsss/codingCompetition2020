#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b;
    cin >> b;
    int x, y;
    set<pair<int, int>> blocked;
    for (int i = 0; i < b; i++)
    {
        cin >> x >> y;
        blocked.insert({x, y});
    }
    pair<int, int> source;
    pair<int, int> target;
    set<pair<int, int>> vis;
    cin >> x >> y;
    source = {x, y};
    cin >> x >> y;
    target = {x, y};
    queue<pair<int, pair<int, int>>> q;
    bool ok = false;
    bool okSource = false;
    q.push({source.first, {source.second, 0}});
    vis.insert({source.first, source.second});

    while (!q.empty())
    {
        pair<int, pair<int, int>> curr = q.front();
        q.pop();
        int xSpot = curr.first;
        int ySpot = curr.second.first;
        int count = curr.second.second;
        if (xSpot == target.first && ySpot == target.second)
        {
            ok = true;
            break;
        }

        if (count > 200)
        {
            okSource = true;
        }
        else
        {
            if ((xSpot - 1 >= 0) && vis.find({xSpot - 1, ySpot}) == vis.end() && blocked.find({xSpot - 1, ySpot}) == blocked.end())
            {
                q.push({xSpot - 1, {ySpot, count + 1}});
                vis.insert({xSpot - 1, ySpot});
            }
            if (ySpot - 1 >= 0 && vis.find({xSpot, ySpot - 1}) == vis.end() && blocked.find({xSpot, ySpot - 1}) == blocked.end())
            {
                q.push({xSpot, {ySpot - 1, count + 1}});
                vis.insert({xSpot, ySpot - 1});
            }
            if (xSpot + 1 < 1e6 && vis.find({xSpot + 1, ySpot}) == vis.end() && blocked.find({xSpot + 1, ySpot}) == blocked.end())
            {
                q.push({xSpot + 1, {ySpot, count + 1}});
                vis.insert({xSpot + 1, ySpot});
            }
            if (ySpot + 1 < 1e6 && vis.find({xSpot, ySpot + 1}) == vis.end() && blocked.find({xSpot, ySpot + 1}) == blocked.end())
            {
                q.push({xSpot, {ySpot + 1, count + 1}});
                vis.insert({xSpot, ySpot + 1});
            }
        }
    }

    if (!ok && okSource)
    {
        q.push({target.first, {target.second, 0}});
        vis.insert({target.first, target.second});

        while (!q.empty())
        {
            pair<int, pair<int, int>> curr = q.front();
            q.pop();
            int xSpot = curr.first;
            int ySpot = curr.second.first;
            int count = curr.second.second;

            if (count > 200)
            {
                ok = true;
            }
            else
            {
                if ((xSpot - 1 >= 0) && vis.find({xSpot - 1, ySpot}) == vis.end() && blocked.find({xSpot - 1, ySpot}) == blocked.end())
                {
                    q.push({xSpot - 1, {ySpot, count + 1}});
                    vis.insert({xSpot - 1, ySpot});
                }
                if (ySpot - 1 >= 0 && vis.find({xSpot, ySpot - 1}) == vis.end() && blocked.find({xSpot, ySpot - 1}) == blocked.end())
                {
                    q.push({xSpot, {ySpot - 1, count + 1}});
                    vis.insert({xSpot, ySpot - 1});
                }
                if (xSpot + 1 < 1e6 && vis.find({xSpot + 1, ySpot}) == vis.end() && blocked.find({xSpot + 1, ySpot}) == blocked.end())
                {
                    q.push({xSpot + 1, {ySpot, count + 1}});
                    vis.insert({xSpot + 1, ySpot});
                }
                if (ySpot + 1 < 1e6 && vis.find({xSpot, ySpot + 1}) == vis.end() && blocked.find({xSpot, ySpot + 1}) == blocked.end())
                {
                    q.push({xSpot, {ySpot + 1, count + 1}});
                    vis.insert({xSpot, ySpot + 1});
                }
            }
        }
    }

    if (ok)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}