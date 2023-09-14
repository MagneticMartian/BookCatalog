#include <bits/stdc++.h>

bool isvalid(std::string &isbn)
{
    int n = isbn.length();
    if(n != 10) return false;

    int sum = 0;
    int k = 0;
    for(auto i : isbn){
        int value = i - '0';
        if(0 > value || 9 < value) return false;

        sum += value *(10 - k);
        ++k;
        if(k > 8) break;
    }
    char last_val = isbn[9];
    if(last_val != 'X' && (last_val < '0' || last_val > '9')) return false;
    sum += (last_val == 'X') ? 10 : last_val - '0';

    return sum % 11 == 0;
}
