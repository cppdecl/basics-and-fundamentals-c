/* C2B / Coffee */

#include <iostream> 

void CutieBubSortDesc(int arr[], int size) 
{
    bool swapped;
    for (int i = 0; i < size - 1; ++i) 
    {
        swapped = false;
        for (int j = 0; j < size - i - 1; ++j) 
        {
            if (arr[j] < arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main()
{
    int arrOne[10], arrTwo[10], arrFinal[20] = {};
    
    std::cout << "Input Elements For Array One\n";
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "arrOne[" << i << "]: ";
        std::cin >> arrOne[i];
    }
    
    std::cout << "Input Elements For Array Two\n";
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "arrTwo[" << i << "]: ";
        std::cin >> arrTwo[i];
    }
    
    std::cout << "Combined Array\n";
    for (int i = 0; i < 20; ++i)
    {
        int tArrInd = i % 10;
        
        arrFinal[i] = i <= 9 ? arrOne[tArrInd] : arrTwo[tArrInd];
        std::cout << "arrFinal[" << i << "]: " << arrFinal[i] << "\n";
    }
    
    CutieBubSortDesc(arrFinal, 20);
    
    std::cout << "Sorted Array in Descending Order\n";
    for (int i = 0; i < 20; ++i)
    {
        std::cout << "arrFinal[" << i << "]: " << arrFinal[i] << "\n";
    }
    
    return 0;
}