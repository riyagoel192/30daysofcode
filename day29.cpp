#include <bits/stdc++.h>

using namespace std;

// string ltrim(const string &);
// string rtrim(const string &);
// vector<string> split(const string &);

// /*
//  * Complete the 'bitwiseAnd' function below.
//  *
//  * The function is expected to return an INTEGER.
//  * The function accepts following parameters:
//  *  1. INTEGER N
//  *  2. INTEGER K
//  */

// int bitwiseAnd(int N, int K) {
    
    
// }

int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));

    // string t_temp;
    // getline(cin, t_temp);

    // int t = stoi(ltrim(rtrim(t_temp)));

    // for (int t_itr = 0; t_itr < t; t_itr++) {
    //     string first_multiple_input_temp;
    //     getline(cin, first_multiple_input_temp);

    //     vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    //     int count = stoi(first_multiple_input[0]);

    //     int lim = stoi(first_multiple_input[1]);

    //     int res = bitwiseAnd(count, lim);

    //     fout << res << "\n";
    // }

    // fout.close();

    // return 0;
    
     int T, n, k, i, j, val;
    cin>>T;
    while (T > 0) 
    {
        int maximum = 0;
        // scanf("%d%d",&n, &k);
        cin>>n>>k;
        // cout<<n<<k;
        int max_val = 0;
        int a = 0, b = k - 1;
    
    for (a = n; a > 2; a--) 
    {
        if (a == b)
            continue;
        if ((a & b) > max_val) 
        {
            max_val = a & b;
        }
    }
    
    cout<<max_val<<endl;
    
    T--;
  }
  return 0;
}

// string ltrim(const string &str) {
//     string s(str);

//     s.erase(
//         s.begin(),
//         find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
//     );

//     return s;
// }

// string rtrim(const string &str) {
//     string s(str);

//     s.erase(
//         find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
//         s.end()
//     );

//     return s;
// }

// vector<string> split(const string &str) {
//     vector<string> tokens;

//     string::size_type start = 0;
//     string::size_type end = 0;

//     while ((end = str.find(" ", start)) != string::npos) {
//         tokens.push_back(str.substr(start, end - start));

//         start = end + 1;
//     }

//     tokens.push_back(str.substr(start));

//     return tokens;
// }
