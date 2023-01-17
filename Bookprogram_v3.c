/*
book 구조체 배열이름: barr
book 구  조  체 이 름: Book
사용되는  함수 이름:
showMenu()                 //메뉴 -> O
readbookinfo()             //입력 -> O
showbookinfo()					//출력 -> O
searchbook()  					//검색 -> X
*/
#include <stdio.h>

typedef struct book // 구조체
{
	char title[30];
	char author[30];
	char publisher[30];
	int price;
	int borrowed;
} Book;

void readbookinfo(Book * rbi, int * total);
void showbookinfo(Book * sbi, int * total);
void searchbook(Book * sb);

int main()
{
	Book barr[100]; // Book이라는 구조체 자료형을가진 barr이라는 이름의길이가 100인  배열
	int menuchoice; // 메뉴를 선택
	int totalbooknum = 0; //책 번호 (book[0], book[1], book[2]...)
	while (1)
	{
 		printf("도서 관리 프로그램 \n");
 		printf("메뉴를 선택하세요 \n");
 		printf("1. 책을 새로 추가하기 \n");
 		printf("2. 책의 등록 확인하기 \n");
 		printf("3. 책을 검색하기 \n");
 		printf("4. 책을 빌리기 \n");
 		printf("5. 책을 반납하기 \n");
 		printf("6. 프로그램 종료 \n");

		printf("당신의 선택은 : ");
		scanf("%d", &menuchoice);
		printf("\n");
		if(menuchoice == 1)
		{
			//책을 추가하는 함수 호출
			readbookinfo(barr, &totalbooknum); // barr 이라는 이름의 구조체에 데이터를 저장
		}
		else if(menuchoice == 2)
		{
			//책을 확인하는 함수 호출
			showbookinfo(barr, &totalbooknum); //
		}
		else if(menuchoice == 3)
		{
			//책을 검색하는 함수 호출
			searchbook(barr);
		}
		else if(menuchoice == 4)
		{
			//책을 빌리는 함수 호출
		}
		else if(menuchoice == 5)
		{
			//책을 반납하는 함수 호출
		}
		else if(menuchoice == 6)
		{
			//프로그램 종료
			break;
		}
		else
		{
			printf("번호를 다시 입력해주세요 (1~6) \n");
		}
	}

	return 0;
}

void readbookinfo(Book * rbi,int * total) // 구조체 포인트 변수선언 따라서 주소(배열이름)이 매개변수로 들어와야한다.
{
	if(*total >= 100)
	{
		printf("저장 공간이 부족합니다.");
	}
	printf("-------도서 추가-------\n");
	printf("책의 이름을 입력하시오\n");
	scanf("%s", rbi[*total].title);
	printf("책의 저자를 입력하시오\n");
	scanf("%s", rbi[*total].author);
	printf("책의 출판사를 입력하시오\n");
	scanf("%s", rbi[*total].publisher);
	printf("책의 가격을 입력하시오\n");
	scanf("%d", &(rbi[*total]).price);
	rbi[*total].borrowed = 0;

	printf("\n");
	printf("책의 등록이 완료되었습니다. \n");

	(*total)++;

	printf("\n");
}

void showbookinfo(Book * sbi, int * total) // Book이라는 구조체  자료형을 가진 sbi라는 이름의 포인터 선언;
{
	int i;
	for(i = 0 ; i < *total; i++) 
	{
		printf("책의 이  름: %s \n", sbi[i].title);
		printf("책의 저  자: %s \n", sbi[i]. author);
		printf("책의 출판사: %s \n", sbi[i].publisher);
		printf("책의 가  격: %d 원 \n", sbi[i].price);
		if((sbi[i].borrowed) == 0)
		{
			printf("대여 상태: 대여 가능\n");
		}
		else
		{
			printf("대여 상태: 대여불가능\n");
		}
		printf("\n");
	}
}

void searchbook(Book * sb)
{
	char search[30]
	int choice;
	printf("검색 방법\n 1 : 이름 \n 2 : 저자 \n 3 : 출판사");
	scanf("%d", &choice);
}
