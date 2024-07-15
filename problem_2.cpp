#include <bits/stdc++.h>
#include <stdlib.h>

#define nl endl
#define ll long long
#define ld long double
#define ull unsigned long long

#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define PLL pair<ll, ll>
#define pii pair<int, int>
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define scn(n) scanf("%d", &n)
#define scnll(n) scanf("%lld", &n)
// #define nl cout<<"\n"
#define YES cout << "YES\n"
#define Yes cout << "Yes\n"
#define yes cout << "yes\n"
#define NO cout << "NO\n"
#define No cout << "No\n"
#define no cout << "no\n"
#define newl cout << "\n"
#define mod 1000000007LL
#define mod1 1000000007LL
#define mod2 1000000009LL
#define inf 1000000000000000LL
#define N 200000
#define pi 3.14159

#define forn(i, n) for (int i = 0; i < int(n); i++)

#define mod9 90000007
#define fs(n) fixed << setprecision(int(n))
#define s(n) setprecision(int(n))

#define io                               \
  std::ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                         \
  cout.tie(NULL);
using namespace std;

//  g++ temp.cpp -o temp
//          or
//  g++ temp.cpp -o temp.exe
//  .\temp.exe

using namespace std;

struct question_set
{
  string ques;
  string opt[4];
  char ans;
};

int main()
{

  question_set qu[5] = {

      {"What is the lowest price of A4Tech Mouse?",
       {"A. 300", "B. 400", "C. 350", "D. 1200"},
       'C'},
      {"What is the highest price of Logitech Wireless Mouse?",
       {"A. 100", "B. 200", "C. 300", "D. 400"},
       'B'},
      {"What is the highest price of Logitech Mouse?",
       {"A. 100", "B. 200", "C. 300", "D. 500"},
       'A'},
      {"How many types of Keyboard does A4Tech offer?",
       {"A. 2", "B. 3", "C. 4", "D. 5"},
       'D'},
      {"What is the lowest price of IBM Keyboard?",
       {"A. 100", "B. 200", "C. 300", "D. 400"},
       'B'}

  };

  int n = sizeof(qu) / sizeof(qu[0]);

  int user_score = 0;
  char user_ans;

  for (int i = 0; i < 5; i++)
  {
    int length_of_ques = qu[i].ques.length() + 1;

    cout << " " << string(length_of_ques, '-') << "\n";
    cout << "| " << qu[i].ques << " |" << endl;
    cout << " " << string(length_of_ques, '-') << "\n";
    for (int j = 0; j < 4; j++)
    {
      cout << qu[i].opt[j] << endl;
    }

    cout << " ------------------------------\n";
    cout << "| Vair tor ans ki? - (A,B,C,D) | \n";
    cout << " ------------------------------\n";
    cin >> user_ans;

    
    user_ans = toupper(user_ans);

    
    if (user_ans == qu[i].ans)
    {
      cout << "Correct!\n"
           << endl;
      user_score++;
    }
    else
    {
      cout << "Incorrect. The correct answer is: " << qu[i].ans << "\n"
           << endl;
    }
  }
  cout << " ------------------------------\n";
  cout << "Your final score is: " << user_score << " out of " << n << endl;
  cout << " ------------------------------\n";

  return 0;
}
