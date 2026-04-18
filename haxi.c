/*#include<stdio.h>
void del(int arr[], int* n, int e)
{
    int i = 0;
    while (i < *n)
    {
        if (arr[i] == e)
        {
            for (int j = i; j < *n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            *n = *n - 1;
        }
        else
        {
            i++; 
        }
    }
}

int main()
{
    int m, n, p;
    scanf("%d %d %d", &m, &n, &p);
    int a[m];
    int b[n];
    int c[p];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &c[i]);
    }
    int same[100];
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            if (b[i] == c[j])
            {
                int flag = 0;
                for (int k = 0; k < t; k++)
                {
                    if (same[k] == b[i])
                    {
                       flag = 1;
                        break;
                    }
                }
                if (flag==0)
                {
                    same[t] = b[i];
                    t++;
                }
                break; 
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        del(a, &m, same[i]);
    }
    
    for (int i = 0; i < m; i++)
    {
        printf("%d ", a[i]);
    } 
    return 0;
}*/
#include<stdio.h>
#include<string.h> 
#define MAX_NUM 10000 
int main()
{
    int m, n, p;
    scanf("%d %d %d", &m, &n, &p);
    int a[m], b[n], c[p];
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    for (int i = 0; i < p; i++) scanf("%d", &c[i]);
    int in_b[MAX_NUM] = {0};  
    int in_c[MAX_NUM] = {0}; 
    
    for (int i = 0; i < n; i++) {
        in_b[b[i]] = 1;
    }
    for (int i = 0; i < p; i++) {
        in_c[c[i]] = 1;
    }
    int result[m]; 
    int res_len = 0;
    for (int i = 0; i < m; i++) {
        if (!(in_b[a[i]] && in_c[a[i]])) {
            result[res_len++] = a[i];
        }
    }
    for (int i = 0; i < res_len; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}