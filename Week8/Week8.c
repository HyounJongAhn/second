#define _CRT_SECURE_NO_WARNINGS 

#include "mytype.h"
#include <stdio.h>
#include "util.h"
//구조체 각각 을 멤버라고 함

void test1() {
	
	struct _STUDENT1_ {

		int age;
		double height;
		char name[20];
	
	};

	struct _STUDENT2_ {


		char name[24];
		int age;
		double height;
	};

	struct _STUDENT3_ { 
		int age;
		double height;
		char name[24];
	};

	struct _STUDENT4_ {
		char name[20];
	};

	struct _STUDENT5_ {
		int a;
		short b;
		int c;
		short d;
	};
		
	struct _STUDENT6_ {
		char a;
		char b;
		int c;
		long long d;
	};
	struct _STUDENT1_ stw1;
	struct _STUDENT2_ stw2;
	struct _STUDENT3_ stw3;
	struct _STUDENT4_ stw4;
	struct _STUDENT5_ stw5;
	struct _STUDENT6_ stw6;

	printf("size: %d\n", sizeof(stw1));
	printf("size: %d\n", sizeof(stw2));
	printf("size: %d\n", sizeof(stw3));
	printf("size: %d\n", sizeof(stw4));
	printf("size: %d\n", sizeof(stw5));
	printf("size: %d\n", sizeof(stw6));


}

void test2() {
	

	STUDENT stv1 = { "SSC",2019015,"Seucrity",39,"Seoul" }, stv2 = { "Cook",2019016,"IOS",60,"NY" };
	printf("학생정보 1 출력\n");
	printf("이름 : %s\n", stv1.name);
	printf("학번 : %d\n", stv1.id);
	printf("전공 : %s\n", stv1.major);
	printf("나이 : %d\n", stv1.age);
	printf("주소 : %s\n", stv1.addr);

	printf("\n학생정보 2 출력\n");
	printf("이름 : %s\n", stv2.name);
	printf("학번 : %d\n", stv2.id);
	printf("전공 : %s\n", stv2.major);
	printf("나이 : %d\n", stv2.age);
	printf("주소 : %s\n", stv2.addr);

	printf("\n학생 1 이름 입력:\n");
	scanf("%s", stv1.name);
	printf("학생 1 ID 입력:\n");
	scanf("%d", &(stv1.id));
	printf("학생 1 전공 입력:\n");
	scanf("%s", stv1.major);
	printf("학생 1 나이 입력:\n");
	scanf("%d", &(stv1.age));
	printf("학생 1 주소 입력:\n");
	scanf("%s", stv1.addr);

	printf("학생정보 1 출력\n");
	printf("이름 : %s\n", stv1.name);
	printf("학번 : %d\n", stv1.id);
	printf("전공 : %s\n", stv1.major);
	printf("나이 : %d\n", stv1.age);
	printf("주소 : %s\n", stv1.addr);

}

void test3() {
	HIGH_STUDENT stu1;

	printf("\n학생 1 이름 입력:\n");
	scanf("%s", stu1.pf.name);
	printf("학생 1 ID 입력:\n");
	scanf("%d", &(stu1.id));
	printf("학생 1 나이 입력:\n");
	scanf("%d", &(stu1.pf.age));
	printf("학생 1 키 입력:\n");
	scanf("%lf", &stu1.pf.height);
	printf("학생 1 성적 입력:\n");
	scanf("%lf", &stu1.grade);

	printf("\n 이름: %s\n", stu1.pf.name);
	printf("ID: %d\n", stu1.id);
	printf("나이: %d\n", stu1.pf.age);
	printf("키: %lf\n", stu1.pf.name);
	printf("성적 : %lf\n", stu1.grade);
}

void test4() {
	STUDENT stu[3];
	int i;

	printf("[학생 정보 입력]\n");
	for (i = 0; i < sizeof(stu) / sizeof(STUDENT); i++) {
		printf("\n학생 %d 이름 입력: \n", i + 1);
		scanf("%s", stu[i].name);

		printf("\n학생 %d ID 입력: \n", i + 1);
		scanf("%d", &(stu[i].id));

		printf("\n학생 %d 전공 입력: \n", i + 1);
		scanf("%s", stu[i].major);

		printf("\n학생 %d 나이 입력: \n", i + 1);
		scanf("%d", &(stu[i].age));

		printf("\n학생 %d 주소 입력: \n", i + 1);
		scanf("%s", stu[i].addr);


	}

	printf("[학생 정보 출력]\n");
	for (i = 0; i < sizeof(stu) / sizeof(STUDENT); i++) {
		printf("\n학생 %d 이름 : %s\n", i + 1, stu[i].name);
		printf("\n학생 %d ID : %d\n", i + 1, stu[i].id);
		printf("\n학생 %d 전공 : %s\n", i + 1, stu[i].major);
		printf("\n학생 %d 나이 : %d\n", i + 1, stu[i].age);
		printf("\n학생 %d 주소 : %s\n", i + 1, stu[i].addr);
	}
}
void test5() {
	STU_PROFILE students[2];

	input_data(students, sizeof(students) / sizeof(STU_PROFILE));
	elite(students, sizeof(students) / sizeof(STU_PROFILE));

}

int main() {
	//test1();
	//test2();  
	//test3();
	//test4();
	test5();


	getchar;
	return 0;
}