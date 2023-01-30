#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct S
{
	char name[20];
	int age;
	float n;
};
//int main()
//{//打开文件
//	struct S s = { "xiao tao",20,100.0 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{//打开文件
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制读文件
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
//	//讲结构体数据写入到数组arr里
//	sprintf(arr,"%s %d %f", s.name, s.age, s.n);
//	printf("%s\n", arr);
//	//将数组内容，读入到结构体内
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
		//二进制读数据
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
//	fseek(pFile, 9, SEEK_SET);//SEEK_SET文件开头位置 朝后9个偏移量，将文件指针换成该位置
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
//        fseek(pf, 0, SEEK_END);   //让当前指针不在最开始的位置
//        rewind(pf);//让当前指针返回到最开始的位置上去
//        size = ftell(pf);
//        fclose(pf);
//        printf("Size of myfile.txt: %ld bytes.\n", size);
//    }
//    return 0;
//}