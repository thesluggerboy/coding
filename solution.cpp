#include <bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<int, int> pint;
typedef vector<int> vint;
#define fr(i,n,plus) for(int i=0; i<n; i+=plus)
#define ld long double



void sort_by_first_column(int data[][2], int n){
	auto ptr = (pair<int, int>*) data;
	sort(ptr, ptr+n);
}

long long fact(const long long& p)
{
    if (p <= 1){
        return 1;
    }
    return p * fact(p - 1);
}

bool isPrime(int n)
{
    if (n <= 1){
        return false;
    }
    if (n <= 3){
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for (int i = 5; i * i <= n; i = i + 6){
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

long long power(long long n, long long t){
	long long ans = 1;
	for(long long i = 0; i<t; i++){
		ans *= n;
	}
	return n;
}

bool isPerfectSquare(long double x)
{
    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

int countDigit(long long n)
{
    if (n == 0)
        return 1;
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}
template <class T>
void Sort2dArray(std::vector<std::vector<T>> & numbers)
{

    for(auto & i : numbers){//sort each vector<T> in numbers
        std::sort(i.begin(),i.end());
    }
    std::sort(numbers.begin(),numbers.end(),[](//sort numbers by defining custom compare 
              const std::vector<T>& a,const std::vector<T>&b){
        for(int i=0;i<a.size()&&i<b.size();i++)
        {
            if(a[i]>b[i])
                return false;
            else if(a[i]<b[i])
                return true;
        }
        return a.size()<b.size() ? true : false;
    });
}

pair<int, int> findEntryWithLargestValue(
    map<int, int> sampleMap)
{
 
    // Reference variable to help find
    // the entry with the highest value
    pair<int, int> entryWithMaxValue
        = make_pair(0, 0);
 
    // Iterate in the map to find the required entry
    map<int, int>::iterator currentEntry;
    for (currentEntry = sampleMap.begin();
        currentEntry != sampleMap.end();
        ++currentEntry) {
 
        // If this entry's value is more
        // than the max value
        // Set this entry as the max
        if (currentEntry->second
            > entryWithMaxValue.second) {
 
            entryWithMaxValue
                = make_pair(
                    currentEntry->first,
                    currentEntry->second);
        }
    }
 
    return entryWithMaxValue;
}

void swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
	return;
}



int main(){
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
#endif

	// int arr1[3][3], arr2[3][3];
	// fr(i,3,1){
	// 	fr(j,3,1){
	// 		cin>>arr1[i][j];
	// 	}
	// }
	// fr(i,3,1){
	// 	fr(j,3,1){
	// 		cin>>arr2[i][j];
	// 	}
	// }
	// int ans = 0;
	// fr(i,3,1){
	// 	fr(j,3,1){
	// 		ans = 0;
	// 		fr(k,3,1){
	// 			ans+=arr1[i][k]*arr2[k][j];
	// 		}
	// 		cout<<ans<<" ";
	// 	}
	// 	cout<<endl;
	// }

	
	


	return 0;
}