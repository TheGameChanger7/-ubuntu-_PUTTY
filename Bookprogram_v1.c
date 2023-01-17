/*
book 구조체 배열이름: barr
book 구  조  체 이 름: Book
사용되는  함수 이름:
showMenu()                 //메뉴 -> 도서 등록, 도서 검색(대출현황), 종료
readbookinfo()             //입력 -> O
showbookinfo()					//출력 -> O
searchBook()  					//검색 -> X
*/
#include <stdio.h>

typedef struct book // 구조체
{
	char title[30];
	char author[30];
	char publisher[30];
	int price;
} Book;

void readbookinfo(Book * rbi);
void showbookinfo(Book * sbi);

int main()
{
	Book barr[100]; // Book이라는 자료형을 가진barr이라는 이름의 길이가 100인 구조체 배열

	readbookinfo(barr); // barr 이라는 이름의 구조체에 데이터를 저장
	showbookinfo(barr); // barr 이라는 이름의 구조체에 저장된 데이터를 출력
	return 0;
}

void readbookinfo(Book * rbi) // 구조체 포인트 변수선언 따라서 주소(배열이름)이 매개변수로 들어와야한다.
{
	int i;

	for(i = 0; i < 3; i++)
	{
		printf("책의 이름을 입력하시오\n");
		scanf("%s", rbi -> title);
		printf("책의 저자를 입력하시오\n");
		scanf("%s", rbi -> author);
		printf("책의 출판사를 입력하시오\n");
		scanf("%s", rbi -> publisher);
		printf("책의 가격을 입력하시오\n");
		scanf("%d", &rbi -> price);
	}
}
void showbookinfo(Book * sbi)
{
	int i;
	for(i = 0; i < 3; i++)
	{
		printf("책의 이  름: %s \n", sbi -> title);
		printf("책의 저  자: %s \n", sbi -> author);
		printf("책의 출판사: %s \n", sbi -> publisher);
		printf("책의 가  격: %d \n", sbi -> price);
	}
}
