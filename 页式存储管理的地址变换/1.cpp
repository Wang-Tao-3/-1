#include<stdio.h>
main()
{
	int p,d,la,pa,ps,a[100],i;
	/*paΪ�����ַ��laΪ�����ַ��psΪҳ���С��a[100]���ҳ���ж�Ӧ�����ҳ�ţ�nΪҳ����*/
	int c,b,n;
	//printf("�ڴ�Ĵ�С=");
	//scanf("%d");
	printf("���̵Ĵ�С=");
	scanf("%d",&a);
    printf("������ҳ���Сps=");/*����ҳ���С*/
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

	
	//printf("������ҳ����n=");/*����ҳ����*/
	//scanf("%d",&n);
	for(i=0;i<n;i++)
		{
			printf("����ҳ���е�%dҳ���п��=",i);
			scanf("%d",&a[i]);
		}/*����ҳ���������ҳ��*/
	printf("�������߼���ַla=");/*�����߼���ַ*/
	scanf("%d",&la);
	
		p=la/ps;d=la-p*ps;/*pΪҳ�����ҳ�ţ�dΪҳ��λ��*/
		pa=a[p]*ps+d;
		printf("�߼���ַΪ%d�������ַΪ%d",la,pa);
}