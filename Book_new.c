// 세권의 책 구조체 책의 이름, 저자, 출판사, 가격

#include <stdio.h>
#include <string.h>

struct book
{
	char bookname[20];
	char writername[20];
	char publisher[20];
	int price;
};

int main()
{
	struct book Book[3];
	int i;

	for(i = 0; i < 3; i++)
	{
	printf("책이름 입력: ");
	scanf("%s", Book[i].bookname);
	printf("지은이 입력: ");
	scanf("%s", Book[i].writername);
	printf("출판사 입력: ");
	scanf("%s", Book[i].publisher);
	printf("가  격 입력: ");
	scanf("%d", &Book[i].price); // int price가 변수라서 무조건 주소 연산자 사용해야 컴파일 가능.
	}
	for(i = 0; i < 3; i++)
	{
	printf("책이름: %s \n", Book[i].bookname);
	printf("지은이: %s \n", Book[i].writername);
	printf("출판사: %s \n", Book[i].publisher);
	printf("가  격: %d \n", Book[i].price);
	}
	return 0;
}
