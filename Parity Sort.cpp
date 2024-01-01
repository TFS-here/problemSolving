//Solved by AI

#include <bits/stdc++.h>
using namespace std;
// int digit=log10(n)+1;
bool can_sort_array(vector<int> &arr)
{
    int n = arr.size();
    bool is_sorted = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            is_sorted = false;
            break;
        }
    }

    if (is_sorted)
    {
        return true;
    }

    vector<int> odd_elements, even_elements;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_elements.push_back(arr[i]);
        }
        else
        {
            odd_elements.push_back(arr[i]);
        }
    }

    sort(odd_elements.begin(), odd_elements.end());
    sort(even_elements.begin(), even_elements.end());

    int odd_idx = 0, even_idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] = even_elements[even_idx++];
        }
        else
        {
            arr[i] = odd_elements[odd_idx++];
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> array_elements(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array_elements[i];
        }

        cout << (can_sort_array(array_elements) ? "YES" : "NO") << endl;
    }

    return 0;
}