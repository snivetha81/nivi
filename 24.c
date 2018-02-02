    #include<stdio.h>
    main()
    {
    int i,j,n,t,a[10];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    	scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
    	for(j=i+1;j<=n;j++)
    	{
    		if(a[i]>a[j])
    		{
    			t=a[i];
    			a[i]=a[j];
    			a[j]=t;
    		}
    	}
    	printf("%d",a[i]);	
    
    }
    }
