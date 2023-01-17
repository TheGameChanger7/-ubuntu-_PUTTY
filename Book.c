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
	struct book bn1, bn2, bn3;
/*
	strcpy(bn1.bookname, "구름");
	strcpy(bn1.writername, "수지");
	strcpy(bn1.publisher,"위즈덤");
	bn1.price = 7000;
*/
	printf("책이름 입력: ");
	scanf("%s %s %s", bn1.bookname, bn2.bookname, bn3.bookname);
	printf("지은이 입력: ");
	scanf("%s %s %s", bn1.writername, bn2.writername, bn3.writername);
	printf("출판사 입력: ");
	scanf("%s %s %s", bn1.publisher, bn2.publisher, bn3.publisher);
	printf("가격 입력: ");
	scanf("%d %d %d", &bn1.price, &bn2.price, &bn3.price);

	printf("책이름: %s \n", bn1.bookname);
	printf("지은이: %s \n", bn1.writername);
	printf("출판사: %s \n", bn1.publisher);
	printf("가  격: %d \n", bn1.price);

	printf("책이름: %s \n", bn2.bookname);
	printf("지은이: %s \n", bn2.writername);
	printf("출판사: %s \n", bn2.publisher);
	printf("가  격: %d \n", bn2.price);

	printf("책이름: %s \n", bn3.bookname);
	printf("지은이: %s \n", bn3.writername);
	printf("출판사: %s \n", bn3.publisher);
	printf("가  격: %d \n", bn3.price);

	return 0;
}
