/*
    Time complexity : O(N * log(N))
    Space complexity : O(N)

    Where 'N' is the total number of elements in the array/list.
*/

// Function to merge the two subarrays.
long long merge(long long arr[], int left, int mid, int right){
    int i = left, j = mid, k = 0;
    long long invCount = 0;
    int temp[(right - left + 1)];

    while ((i < mid) && (j <= right)){
        if (arr[i] <= arr[j]){
            temp[k] = arr[i];
            ++k;
            ++i;
        }
        else{
            temp[k] = arr[j];
            invCount += (mid - i);
            ++k;
            ++j;
        }
    }

    while (i < mid){
        temp[k] = arr[i];
        ++k;
        ++i;
    }

    while (j <= right){
        temp[k] = arr[j];
        ++k;
        ++j;
    }

    for (i = left, k = 0; i <= right; i++, k++){
        arr[i] = temp[k];
    }

    return invCount;
}

// Function to split two subarrays and then merge them and count inversions.
long long mergeSort(long long arr[], int left, int right){
    long long invCount = 0;

    if (right > left){
        int mid = (right + left) / 2;

        /* 
            Divide the array into two parts
            total inversion count will be the
            sum of 'INVCOUNT' of left part +
            'INVCOUNT' of right part + 'INVCOUNT' of
            their combined part.
        */
        invCount = mergeSort(arr, left, mid);
        invCount += mergeSort(arr, mid + 1, right);

        // Merge both parts and count their combined inversions.
        invCount += merge(arr, left, mid + 1, right);
    }
    return invCount;
}

long long getInversions(long long arr[], int n){
    return mergeSort(arr, 0, n - 1);
}