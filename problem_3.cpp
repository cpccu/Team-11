
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

double inches_to_feet(double inches)
{
  return inches / 12.0;
}

double feet_to_inches(double feet)
{
  return feet * 12.0;
}

double kilometers_to_miles(double km)
{
  return km * 0.62137;
}

double miles_to_kilometers(double ml)
{
  return ml * 1.6094;
}

double kg_to_pound(double kg)
{
  return kg * 2.20462;
}

double pound_to_kg(double pound)
{
  return pound * 0.45359;
}

double cel_to_fah(double cel)
{
  return ((cel * 1.8) + 32);
}

double fah_to_cel(double fah)
{
  return ((fah - 32) / 1.8);
}

double inches_to_cm(double inches)
{
  return (inches * 2.54);
}

double cm_to_inches(double cm)
{
  return (cm / 2.54);
}

int main()
{
  int choice;
  double value, result;


  cout << " ---------------------------\n";
  cout << "| Unit Converter" << endl;
  cout << "| 1. Inches to Feet" << endl;
  cout << "| 2. Feet to Inches" << endl;
  cout << "| 3. Kilometer to Mile" << endl;
  cout << "| 4. Mile to Kilometer" << endl;
  cout << "| 5. Celsius to Fahrenheit" << endl;
  cout << "| 6. Fahrenheit to Celsius" << endl;
  cout << "| 7. Inches to Centimeter" << endl;
  cout << "| 8. Centimeter to Inches" << endl;
  cout << "| 9. Pound to Kilogram" << endl;
  cout << "| 10. Kilogram to Pound" << endl;
  cout << " ---------------------------\n";

  cout << " ----------------------------------\n";
  cout << "| Select a conversion type (1-10): |\n";
  cout << " ----------------------------------\n";
  cin >> choice;

  if (choice == 1)
  {
    cout << " ----------------------------------\n";
    cout << "| Enter value in Inches: \n";
    cout << " ----------------------------------\n";
    cin >> value;
    result = inches_to_feet(value);
    cout << " ----------------------------------\n";
    cout << value << " Inches is equal to " << result << " Feet." << endl;
    cout << " ----------------------------------\n";
  }
  else if (choice == 2)
  {
    cout << " ----------------------------------\n";
    cout << "| Enter value in Feet: \n";
    cout << " ----------------------------------\n";
    cin >> value;
    result = feet_to_inches(value);
    cout << " ----------------------------------\n";
    cout << value << " Feet is equal to " << result << " Inches." << endl;
    cout << " ----------------------------------\n";
  }
  else if (choice == 3)
  {
    cout << " ----------------------------------\n";
    cout << "| Enter value in Kilometer: \n";
    cout << " ----------------------------------\n";
    cin >> value;
    result = kilometers_to_miles(value);
    cout << " ----------------------------------\n";
    cout << value << " Kilometer is equal to " << result << " Mile." << endl;
    cout << " ----------------------------------\n";
  }
  else if (choice == 4)
  {
    cout << " ----------------------------------\n";
    cout << "| Enter value in Mile: \n";
    cout << " ----------------------------------\n";
    cin >> value;
    result = miles_to_kilometers(value);
    cout << " ----------------------------------\n";
    cout << value << " Mile is equal to " << result << " Kilometer." << endl;
    cout << " ----------------------------------\n";
  }
  else if (choice == 5)
  {
    cout << " ----------------------------------\n";
    cout << "| Enter value in Celsius: \n";
    cout << " ----------------------------------\n";
    cin >> value;
    result = cel_to_fah(value);
    cout << " ----------------------------------\n";
    cout << value << " Celsius is equal to " << result << " Fahrenheit." << endl;
    cout << " ----------------------------------\n";
  }
  else if (choice == 6)
  {
    cout << " ----------------------------------\n";
    cout << "| Enter value in Fahrenheit: \n";
    cout << " ----------------------------------\n";
    cin >> value;
    result = fah_to_cel(value);
    cout << " ----------------------------------\n";
    cout << value << " Fahrenheit is equal to " << result << " Celsius." << endl;
    cout << " ----------------------------------\n";
  }
  else if (choice == 7)
  {
    cout << " ----------------------------------\n";
    cout << "| Enter value in Inches: \n";
    cout << " ----------------------------------\n";
    cin >> value;
    result = inches_to_cm(value);
    cout << " ----------------------------------\n";
    cout << value << " Inches is equal to " << result << " Centimeter." << endl;
    cout << " ----------------------------------\n";
  }
  else if (choice == 8)
  {
    cout << " ----------------------------------\n";
    cout << "| Enter value in Centimeter: \n";
    cout << " ----------------------------------\n";
    cin >> value;
    result = cm_to_inches(value);
    cout << " ----------------------------------\n";
    cout << value << " Centimeter is equal to " << result << " Inches." << endl;
    cout << " ----------------------------------\n";
  }
  else if (choice == 9)
  {
    cout << " ----------------------------------\n";
    cout << "| Enter value in Pound: \n";
    cout << " ----------------------------------\n";
    cin >> value;
    result = pound_to_kg(value);
    cout << " ----------------------------------\n";
    cout << value << " Pound is equal to " << result << " Kilogram." << endl;
    cout << " ----------------------------------\n";
  }
  else if (choice == 10)
  {
    cout << " ----------------------------------\n";
    cout << "| Enter value in Kilogram: \n";
    cout << " ----------------------------------\n";
    cin >> value;
    result = kg_to_pound(value);
    cout << " ----------------------------------\n";
    cout << value << " Kilogram is equal to " << result << " Pound." << endl;
    cout << " ----------------------------------\n";
  }
  else
  {
    cout << " ----------------------------------\n";
    cout << "Invalid choice. Please select either 1 to 10.\n" << endl;
    cout << " ----------------------------------\n";

  }

  return 0;
}
