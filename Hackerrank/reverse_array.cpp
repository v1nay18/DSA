vector<int> reverseArray(vector<int> a)
{
    vector<int> result;
    int si = a.size();
    for (int i = si - 1; i >= 0; i--)
    {
        result.push_back(a[i]);
    }
    return result;
}