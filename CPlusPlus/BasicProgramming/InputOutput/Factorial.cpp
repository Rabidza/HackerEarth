//Factorial!
#include <iostream>
using namespace std;

int main()
{
  int answer = 1;
  int N;
  cin >> N;

  for (int i = 1; i <= N; i++)
  {
    answer *= i;
  }

  cout << answer;
}
