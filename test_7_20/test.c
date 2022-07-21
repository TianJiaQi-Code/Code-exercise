#define _CRT_SECURE_NO_WARNINGS 1

char* my_strcpy(char* dest, const char* src);

int main()
{
	char* (*pf)(char*,const char*) = my_strcpy;
	char* (*pfArr[4])(char*, const char*) = {my_strcpy,my_strcpy,my_strcpy,my_strcpy};
	return 0;
}
