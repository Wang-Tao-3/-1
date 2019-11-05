#include<stdio.h>
main()
{
	int p,d,la,pa,ps,a[100],i;
	/*pa为物理地址，la为物理地址，ps为页面大小，a[100]存放页表中对应主存的页号，n为页面数*/
	int c,b,n;
	//printf("内存的大小=");
	//scanf("%d");
	printf("进程的大小=");
	scanf("%d",&a);
    printf("请输入页面大小ps=");/*输入页面大小*/
	scanf("%d",&ps);
	n=c/ps;
	b=c%ps;
	if(c>0)
	{
		n=n+1;
	}
	else
	{
		n=n;
	}

	
	//printf("请输入页面数n=");/*输入页面数*/
	//scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			printf("输入页表中第%d页项中块号=",i);
			scanf("%d",&a[i]);
		}/*输入页表中主存的页号*/
	printf("请输入逻辑地址la=");/*输入逻辑地址*/
	scanf("%d",&la);
	
		p=la/ps;d=la-p*ps;/*p为页表项的页号，d为页内位移*/
		pa=a[p]*ps+d;
		printf("逻辑地址为%d的物理地址为%d",la,pa);
}