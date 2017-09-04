//Roy and Profile Picture
#include <iostream>
using namespace std;

int main()
{
    int L, W, H, N;
    cin >> L;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> W >> H;
        if (W == H && W >= L)
            cout << "ACCEPTED" << endl;
        else if(W < L || H < L)
            cout << "UPLOAD ANOTHER" << endl;
        else if (W >= L && H >= L)
            cout << "CROP IT" << endl;

    }
}
