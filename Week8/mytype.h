#pragma once
typedef struct _STUDENT_ {
	char name[32];
	int id;
	char major[32];
	int age;
	char addr[32];

}STUDENT;

typedef struct _PROFILE_ {
	char name[32];
	int age;
	double height;

}PROFILE;

typedef struct _HIGH_STUDENT_ {
	PROFILE pf;
	int id;
	double grade;
}HIGH_STUDENT;

typedef struct STU_PROFILE {
	char name[32];
	int english;
	double grade;
}STU_PROFILE;