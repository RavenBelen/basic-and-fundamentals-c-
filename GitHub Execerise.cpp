/* Raven Joseph S. Belen 
   IT2B */
   #include <iostream>
   using namespace std;
   
   int main() {
       int arr1[10], arr2[10], descNum[20];
       int totalElements = 20; // Correct total elements count
   
       // Input for array 1
       for (int i = 0; i < 10; i++) {
           cout << "Enter numbers for arr1 [" << i + 1 << "/10]: ";
           cin >> arr1[i];
           descNum[i] = arr1[i]; // Store in descNum array
       }
       
       cout<<"Now insert for Array 2!!!!"<<endl;
   
       // Input for array 2
       for (int i = 0; i < 10; i++) {
           cout << "Enter numbers for arr2 [" << i + 1 << "/10]: ";
           cin >> arr2[i];
           descNum[i + 10] = arr2[i]; // Store in descNum array correctly
       }
   
   
   
       // Sorting in descending order using Bubble Sort
       for (int i = 0; i < totalElements - 1; i++) {
           for (int j = 0; j < totalElements - i - 1; j++) {
               if (descNum[j] < descNum[j + 1]) { // Swap if next number is larger
                   int temp = descNum[j];
                   descNum[j] = descNum[j + 1];
                   descNum[j + 1] = temp;
               }
           }
       }
   
       // Output sorted numbers
       cout << "Numbers in Descending Order: ";
       for (int i = 0; i < totalElements; i++) {
           cout << descNum[i] << " ";
       }
   
       return 0;
   }
   