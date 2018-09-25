#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout<<"Nhap vao so le";
        cin>>n;
    }
    while(n%2==0);
    cout<<"    *       *       *    *       *       "<<endl;
    cout<<"    * *     *       *     *     *        "<<endl;
    cout<<"    *  *    *       *      *   *         "<<endl;
    cout<<"    *    *  *       *       * *          "<<endl;
    cout<<"    *    *  *       *        *           "<<endl;
    cout<<"    *   *   *       *        *           "<<endl;
    cout<<"    * *     *       *        *           "<<endl;
    cout<<"    *       * * * * *        *           "<<endl;
    return 0;
}
