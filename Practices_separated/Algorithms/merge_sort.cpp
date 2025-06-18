#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vii;

const int INF = 1e9;
const int LLINF = 4e18;
const double EPS = 1e-9; // very small number

void merge(vi &arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    // Creamos un vector temporal
    vi L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];
    int i = 0; int j = 0;
    int k = left;

    while (i < n1 && j<n2) {
        if (L[i] <= R[i]) {
            arr[k] = L[i];
            i++;
        }else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i<n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j< n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vi &arr, int left, int right) {
    if (left >= right) return;
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}

void printVector(vi &array) {
    for (auto iterator: array) {
        cout << iterator << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vi arr;
    int n; cin >> n;
    arr.resize(n);
    for (auto &i: arr) {
        cin>>i;
    }
    cout << "Listamos el vector \n";
    printVector(arr);

    mergeSort(arr, 0, n - 1);
    cout << "Lista ordenada\n";
    printVector(arr);

    return 0;
}
