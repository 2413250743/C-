//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int b[100] = {'\0'};//����ȫ������b
//int main()
//{
//	void trans(int *p);//������������
//		int m, n;
//		int a[100] = { '\0' }; int *p = a;
//	printf("������m,n(nΪ��������,m,n�ÿո������:\n");//����n���������鳤��
//	scanf("%d%d", &m,&n);
//	printf("�������飺\n");
//	for (int i = 0; i < n; i++)
//		scanf("%d",&a[i]);//�õ�������
//	trans(p,m,n);
//	printf("�����������Ϊ��\n");
//	for (int i = 0; i < n; i++)//��������������
//		printf("%d ", b[i]);
//	printf("\n");
//	return 0;
//}
//void trans(int *p,int m,int n)//�����������
//{
//	int i = 0;
//	for (; i < m; i++)//����m������b����
//		b[i] = *(p + (n - m) + i);
//	for (i = 0; i < n - m; i++)//��ǰn-m��������
//		b[m+i] = *(p + i);
//}