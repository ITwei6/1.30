#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct S
{
	char name[20];
	int age;
	float n;
};
//int main()
//{//���ļ�
//	struct S s = { "xiao tao",20,100.0 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//������д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{//���ļ�
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//�����ƶ��ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f", s.name, s.age, s.n);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
////struct S
//{
//	char name[20];
//	int age;
//	float n;
//};
//int main()
//{
//	struct S s = { "xiao tao",20,100.0 };
//	char arr[100] = {0};
//	//���ṹ������д�뵽����arr��
//	sprintf(arr,"%s %d %f", s.name, s.age, s.n);
//	printf("%s\n", arr);
//	//���������ݣ����뵽�ṹ����
//	struct S tmp = { 0 };
//	sscanf(arr, "%s %d %f", (tmp.name), &(tmp.age), &(tmp.n));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.n);
//	return 0;
//}
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		perror("fopen");
	}
	else
	{
		//�����ƶ�����
		fwrite(&a, 4, 1, pf);
		fclose(pf);
		pf = NULL;
	}
	return 0;
}
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("Xiao Tao Lai Lo", pFile);
//	fseek(pFile, 9, SEEK_SET);//SEEK_SET�ļ���ͷλ�� ����9��ƫ���������ļ�ָ�뻻�ɸ�λ��
//	fputs("sam", pFile);
//	fclose(pFile);
//	pFile = NULL;
//	return 0;
//}
//int main()
//{
//   
//    long size;
//    FILE* pf = fopen("myfile.txt", "rb");
//    if (pf == NULL)
//    {
//        perror("Error opening file");
//    }
//    else
//    {
//        fseek(pf, 0, SEEK_END);   //�õ�ǰָ�벻���ʼ��λ��
//        rewind(pf);//�õ�ǰָ�뷵�ص��ʼ��λ����ȥ
//        size = ftell(pf);
//        fclose(pf);
//        printf("Size of myfile.txt: %ld bytes.\n", size);
//    }
//    return 0;
//}