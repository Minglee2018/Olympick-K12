
 #include <bits/stdc++.h>
main()
{
	int n ,x,y,max=-(1e7);
	std::cin>>n;
	while(n--)
	{
		std::cin>>x;
		if(sqrt(x)!=(int)sqrt(x) && x>max) max = x;
	}
	std::cout<<max;
}
