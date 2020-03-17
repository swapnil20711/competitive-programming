// Hackerearth Roy and Profile Picture 
#include <iostream>
using namespace std;
int main()
{
    long L, N, W, H;
    cin >> L;
    cin >> N;
    while (N--)
    {
        cin >> W;
        cin >> H;
        if (W < L || H < L)
        {
            cout << "UPLOAD ANOTHER" << endl;
        }
        else if (W == H)
        {
            cout << "ACCEPTED" << endl;
        }
        else
        {
            cout << "CROP IT" << endl;
        }
    }
    return 0;
}