/*
Memory allocation in C++ is done by two methods:

    - Static Memory Allocation (SMA) -> compile time allocation
    - Dynamic Memory allocation (DMA) -> Run time allocation



-------------------------------------------------------

    * Static Memory Allocation (SMA)
    int main(){
        int x;
        char ch;
        int arr[100];
    }

    - SMA, size and location where variables will be stored is fixed during compile time.

    - location is saved, but actual physical memory is not allocated to the variable at compile time, actual physical memory is allocated at runtime

    - SMA is slightly faster than DMA

    - allocation and deallocation is done by compiler itself

-------------------------------------------------------

    * Dynamic Memory allocation (DMA)
    - happens during the execution of the program in the heap memory

    - "new" is used to allocate memory
    - "delete" is used to deallocate memory

    - allocation and deallocation needs to be done by us.

    int main(){

        int n;
        cin >> n;

        allocate memory
        int *arr = new int[n];

        for(int i = 0; i< n;i++){
            cout << arr[i] << " ";
        }

        free up space
        delete []arr;

    }


*/