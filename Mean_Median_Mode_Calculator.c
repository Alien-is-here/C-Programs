#include<stdio.h>
#include<math.h>

void sort_array(int arr[],int n){
int i , j;
for (int i =0;i<n;i++){
	for (j = 0; j<n-i-1;j++){
		if (arr[j] > arr[j+1])
			{int temp = arr[j];
		    arr[j] = arr[j + 1];
		    arr[j + 1] = temp;}
		    }
        }
   }   
   
int calculate_mode(int arr[], int n) {
    int max_value = 0, max_count = 0, i, j;
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            max_value = arr[i];
        }
    }
    if (max_count == 1) { 
        return -1; 
    } else {
        return max_value;
    }
}

int main() {
int arr[5];
int i,n,a;
int sum =0, mode;
double mean, std, median, sd;

printf("Size of array: ");
scanf("%d", &n);

for ( i = 0 ; i<n; i++) {
	printf("Enter value :");
	scanf("%d", &arr[i]);
	sum += arr[i];
	//printf("%d", arr[i]); 
	
	}
	 printf("SUM IS: %d\n",sum);
	 mean = sum/5;
	 printf("MAEN IS: %.2f\n",mean);
	 sort_array(arr, 5);
	 
	 printf("Sorted array: \n");
	 for (int k = 0; k < n; k++) {
     printf("%d\n", arr[k]);}
     
     median = arr[n / 2];
     printf("MEDIAN IS: %f\n",median);
     
     for (a = 0; a < 5; ++a) {
        sd += pow(arr[a] - mean, 2);
    }
     std = sqrt(sd / 5);
	 printf("STANDARD DEVIATION IS: %.2f\n",std);
	 
	 mode = calculate_mode(arr, 5);
	 if (mode == -1) {
        printf("MODE IS: No mode\n");
     } else {
        printf("MODE IS: %d\n", mode);
     }
	
return 0;
}
