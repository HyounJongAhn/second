#define _CRT_SECURE_NO_WARNINGS 

#include "mytype.h"
#include <stdio.h>
#include "util.h"
//����ü ���� �� ������ ��

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
	printf("�л����� 1 ���\n");
	printf("�̸� : %s\n", stv1.name);
	printf("�й� : %d\n", stv1.id);
	printf("���� : %s\n", stv1.major);
	printf("���� : %d\n", stv1.age);
	printf("�ּ� : %s\n", stv1.addr);

	printf("\n�л����� 2 ���\n");
	printf("�̸� : %s\n", stv2.name);
	printf("�й� : %d\n", stv2.id);
	printf("���� : %s\n", stv2.major);
	printf("���� : %d\n", stv2.age);
	printf("�ּ� : %s\n", stv2.addr);

	printf("\n�л� 1 �̸� �Է�:\n");
	scanf("%s", stv1.name);
	printf("�л� 1 ID �Է�:\n");
	scanf("%d", &(stv1.id));
	printf("�л� 1 ���� �Է�:\n");
	scanf("%s", stv1.major);
	printf("�л� 1 ���� �Է�:\n");
	scanf("%d", &(stv1.age));
	printf("�л� 1 �ּ� �Է�:\n");
	scanf("%s", stv1.addr);

	printf("�л����� 1 ���\n");
	printf("�̸� : %s\n", stv1.name);
	printf("�й� : %d\n", stv1.id);
	printf("���� : %s\n", stv1.major);
	printf("���� : %d\n", stv1.age);
	printf("�ּ� : %s\n", stv1.addr);

}

void test3() {
	HIGH_STUDENT stu1;

	printf("\n�л� 1 �̸� �Է�:\n");
	scanf("%s", stu1.pf.name);
	printf("�л� 1 ID �Է�:\n");
	scanf("%d", &(stu1.id));
	printf("�л� 1 ���� �Է�:\n");
	scanf("%d", &(stu1.pf.age));
	printf("�л� 1 Ű �Է�:\n");
	scanf("%lf", &stu1.pf.height);
	printf("�л� 1 ���� �Է�:\n");
	scanf("%lf", &stu1.grade);

	printf("\n �̸�: %s\n", stu1.pf.name);
	printf("ID: %d\n", stu1.id);
	printf("����: %d\n", stu1.pf.age);
	printf("Ű: %lf\n", stu1.pf.name);
	printf("���� : %lf\n", stu1.grade);
}

void test4() {
	STUDENT stu[3];
	int i;

	printf("[�л� ���� �Է�]\n");
	for (i = 0; i < sizeof(stu) / sizeof(STUDENT); i++) {
		printf("\n�л� %d �̸� �Է�: \n", i + 1);
		scanf("%s", stu[i].name);

		printf("\n�л� %d ID �Է�: \n", i + 1);
		scanf("%d", &(stu[i].id));

		printf("\n�л� %d ���� �Է�: \n", i + 1);
		scanf("%s", stu[i].major);

		printf("\n�л� %d ���� �Է�: \n", i + 1);
		scanf("%d", &(stu[i].age));

		printf("\n�л� %d �ּ� �Է�: \n", i + 1);
		scanf("%s", stu[i].addr);


	}

	printf("[�л� ���� ���]\n");
	for (i = 0; i < sizeof(stu) / sizeof(STUDENT); i++) {
		printf("\n�л� %d �̸� : %s\n", i + 1, stu[i].name);
		printf("\n�л� %d ID : %d\n", i + 1, stu[i].id);
		printf("\n�л� %d ���� : %s\n", i + 1, stu[i].major);
		printf("\n�л� %d ���� : %d\n", i + 1, stu[i].age);
		printf("\n�л� %d �ּ� : %s\n", i + 1, stu[i].addr);
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