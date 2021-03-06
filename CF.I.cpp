/*==================================
 Author : Md Saddam Hossain (codemared)
 Email  : mshossaincse@gmail.com
 University : SUST
 ===================================*/
//#include <bits/stdc++.h>
//C headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <ctype.h>
//#include <assert.h>
//#include <time.h>
//cpp headers
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <stack>
#include <deque>
#include <list>
using namespace std;

/*------------------------------------------------------------------------------------*/

int cnt[105];


int main()
{
    int ar[105], i, n, k, d, sum=0;
    memset(cnt, 0, sizeof(cnt));
    scanf("%d %d", &n, &k);

    d=n/k;

    for(i=1; i<=n; ++i)
    {
        scanf("%d", &ar[i]);
        cnt[ar[i]]++;
    }

    for(i=1; i<=n; ++i)
    {
        if(cnt[i]>d)
            sum+=cnt[i]-d;
    }
    printf("%d\n", sum);

    return 0;
}
