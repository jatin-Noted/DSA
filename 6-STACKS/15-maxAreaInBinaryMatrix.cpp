#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmall(int *arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

vector<int> prevSmall(int *arr, int n)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestArea(int *arr, int n)
{
    vector<int> next(n);
    next = nextSmall(arr, n);

    vector<int> prev(n);
    prev = prevSmall(arr, n);

    int area = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int length = arr[i];
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int breadth = next[i] - prev[i] - 1;
        int newArea = length * breadth;
        area = max(area, newArea);
    }
    return area;
}

int maxArea(int M[][4], int n, int m)
{
    // Your code here
    int area = largestArea(M[0], m);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (M[i][j] != 0)
            {
                M[i][j] += M[i - 1][j];
            }
            else
            {
                M[i][j] = 0;
            }
        }
        area = max(area, largestArea(M[i], m));
    }
    return area;
}

int main()
{

    int arr[4][4] = {{0,1,1,0},
                     {1,1,1,1},
                     {1,1,1,1},
                     {1,1,0,0}};

    int area = maxArea(arr, 4, 4);
    cout<<area;

    return 0;
}