#include <stdio.h>

void swap(int *, int *);
void heapify(int[], int, int);
void heapSort(int[], int);

int main(){
	int t, n, k, ele,i;
	scanf("%d", &t);
	while(t--){
		
		scanf("%d %d",&n,&k);
		int arr[n];
		for (i=0;i<n;i++)
			scanf("%d",&arr[i]);
		//sorting algo
		heapSort(arr, n);
		
		ele=0,i=0;
		while(i<n){
		    if(ele==arr[i])	{	        
		        ele++;
		        i++;
		    }
		    else{
		        if(k>0){
		            k--;
		            ele++;
		            if (ele>arr[i])
		            	i++;
		        }
		        else		        	
		        	break;		            
		    }		        
		}	
		printf("%d\n",ele+k);
			
	}
	
	return 0;
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
void heapify(int arr[], int n, int i) {
    // Find largest among root, left child and right child
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
      largest = left;
  
    if (right < n && arr[right] > arr[largest])
      largest = right;
  
    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
  }
  
  // Main function to do heap sort
void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);
  
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
  }
  
