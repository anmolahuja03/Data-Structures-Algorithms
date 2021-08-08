


//Insert Operation

int insert(int arr[], int n, int index, int capacity, int pos)
{
    if(n == capacity)
    return n;

    int index = pos - 1;

    for(int i=n-1; i>=index; i--)
    arr[i+1] = arr[i];
    arr[index] = x;
    return (n+1);
}


Delete Operation

int deleteElement(int arr[], int n, int x){
    int i;

    //find the element to be deleted
    for(i=0; i<n; i++){
        if(arr[i] == x)
        break;
    }
    //if element not found
    if(i == n) return n;
    
    //copy the next element to the element to be deleted
    for(int j=i; j<n-1; j++){
        arr[j] = arr[j+1];
    }
    //returing new size of the array
    return n-1;
}