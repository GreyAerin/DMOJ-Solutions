#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, k, x, count = 0;
    string rc, val;
    char in;
    scanf("%d\n %d\n %d\n", &m, &n, &k);
    int *rows = new int[m];
    int *columns = new int[n];
    memset(rows, 0, sizeof(*rows));
    memset(columns, 0, sizeof(*columns));
    for (int i = 0; i < k; i++)
    {
        cin >> in >> x;
        x--;
        if (in == 'R')
        {
            rows[x] += 1;
        }
        else
        {
            columns[x] += 1;
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j< n; j++){
            if(rows[i] % 2 == 1 && columns[j] % 2 == 0){

               count++;
            }else if(rows[i] % 2 == 0 && columns[j] % 2 == 1){

                count++;
            }
        }
    }
    cout << count << "\n";
    return 0;
}
