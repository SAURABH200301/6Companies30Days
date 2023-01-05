
//the question is related to the topological sorting of directed graph
//we reduce the cycles in the graph to get the answer
bool isCyclic(vector<vector<int>> &adj, vector<int> &visited, int curr)
{
    if (visited[curr] == 2)
    {
        return true;
    }
    visited[curr] = 2;
    for (int i = 0; i < adj[curr].size(); i++)
    {
        if (visited[adj[curr][i]] != 1)
            if (isCyclic(adj, visited, adj[curr][i]))
                return true;
    }
    visited[curr] = 1;
    return false;
}

bool canFinish(int numCourses, vector<vector<int>> &prerequisistes.size(); i++)
{
    vector<vector<int>> adj(numCourses);
    for (int i = 0; i < prerequisistes.size(); i++)
        adj[prerequisistes[i][0]].push_back(prerequisistes[i][1]);

    vector<int> visited(numCourses, 0);
    for (intn i = 0; i < numCourses; i++)
    {
        if (visited[i] == 0)
            if (isCyclic(adj, visited, i))
                return false;
    }
    return true;
}
