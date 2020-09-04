void selection_sort(int arr[], int n) {
    int min;
    bool b;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        b = 0;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min]) {
                min = j;
                b = 1;
            }
        if (b) {
            swap(arr[min], arr[i]);
            count++;
        }
    }
}
