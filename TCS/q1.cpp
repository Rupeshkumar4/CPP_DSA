 int n =sizeof(A)/sizeof(A[0]);

 int sum = 0;

 for(int i=0; i<n; i++){
    sum += A[i];
 }

 for(int i=0; i<n;i++){
    cout<<sum-A[i];
 }