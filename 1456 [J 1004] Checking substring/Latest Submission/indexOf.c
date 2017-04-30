 #include <string.h>
 int indexOf(const char *s1, const char *s2)
 {
	char *s11 = s1;
	char *s21 = s2;
	int i, j, len = strlen(s11), len2 = strlen(s21);
	for (i = 0; i < len; i++) if (s11[i] == '\n') s11[i] = '\0';
	for (i = 0; i < len2; i++) if (s21[i] == '\n') s21[i] = '\0';
 	int count = 0;
 	for (i = 0; i < len2; i++)
 		{
 		count = 0;
 		char s3[80];
 		for (j = i; count < len - 1; j ++)
 			s3[count++] = s21[j];
		s3[count] = '\0'; 
 		if (!strcmp(s11,s3))
 			return i;
 		}
 	return -1;
 }
