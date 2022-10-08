// cpp program for addition of matrix
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int a[10][10], b[10][10], s[10][10], i, j, m, n;
  cout << "Enter the order of Matrix :" << endl;
  cin >> m >> n;

  // input first matrix
  cout << "Enter the First Matrix :" << endl;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      cin >> a[i][j];

  // input second matrix
  cout << "Enter the second Matrix :" << endl;
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      cin >> b[i][j];

  // sum of two matrix
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      s[i][j] = a[i][j] + b[i][j];

  cout << "The Resultant of matrix is " << endl;
  for (i = 1; i <= m; i++)
  {
    for (j = 1; j <= n; j++)
      cout << setw(5) << s[i][j];
    cout << endl;
  }
  
  return 0;
}