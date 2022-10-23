#include <iostream>
using namespace std;
int arr[40], total, position, want, i, element, x;

int main()
{
    cout << "Enter the size of array:";
    cin >> total;
    cout << "Enter" << total << " of array element";
    for (i = 0; i < total; i++)
    {
        cin >> arr[i];
    }
    cout << "What do you want ??\n1-insert\n2-delete\n3-find" << endl;
    cin >> want;
    switch (want)
    {
    case 1:
        cout << "Enter Your element : ";
        cin >> element;
        cout << "Enter your postion : ";
        cin >> position;
        for (i = total - 1; i >= position; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[position] = element;
        total++;
        cout << "new array\n";
        for (i = 0; i < total; i++)
        {
            cout << arr[i] << "\n";
        }
        break;
    case 2:
        cout << "Enter your number : ";
        cin >> element;
        for (i = 0; i < total; i++)
        {
            if (arr[i] == element)
            {
                x = i;
                for (i = x; i < total; i++)
                {
                    arr[i] = arr[i + 1];
                }
                total--;
                cout << "new array\n";
                for (i = 0; i < total; i++)
                {
                    cout << arr[i] << "\n";
                }
            }
            else if (i == total - 1)
            {
                cout << "Not Valid";
            }
        }
        break;
    case 3:
        cout << "Enter your Number tha you needed to search";
        cin >> element;
        for (i = 0; i < total; i++)
        {
            /* code */

            if (arr[i] == element)
            {
                cout << "found and the postion of this number is :" << i;
            }
            else if (i == total - 1)
            {
                cout << "Not found";
            }
        }

        break;

    default:
        cout << "Not Valid";
        break;
    }
    return 0;
}
