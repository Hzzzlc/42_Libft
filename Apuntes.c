//Apuntes paara Makefile
// Nuestros archivos .c o .h

// gcc -E  => Preprocessor code: std output
// gcc -S  => compiler (.s)
// gcc -c  => assembler (.o) ****
// gcc -o  => linker (.out)

//============= MAINS ========================

//--------- isalpha --------------------

/*int main()
{
	ft_isalpha('s')
	print("%d");
	return 0;
} */

//----------- isdigit ------------------------
//retorna 2048.
/* int main()
{
	int c = 'a';
	//int result = isdigit('a');
	int result =  ft_isdigit(c);
	printf("Retorna: %d", result);
}
*/

//----------------- isalnum ------------------
//devuelve 8.
//si es entre a y z mayus y minus o un digito.
/* int main()
{
	int result = ft_isalnum('h');
	printf("%d", result);

	return 0;
}
*/

//------------------------ isascii --------------
/* int main()
{
	int result= ft_isascii('A');
	printf("%d ", result);
	return 0;
} */

//------------------- isprint -----------------

// espacio hasta ~. 32-127
/* int main()
{
	int result = ft_isprint(11);
	printf("%d", result);
	return 0;
}
*/

//------------------- strlcpy/strlcat -------------------
/*
int main()
{
	char dest[50] = "como estas";
	char src[50] = "hola ";
	size_t result;
	size_t size = 5;
	result = ft_strlcpy(dest, src, size);
	printf("%zu", result);
	return 0;
}

int main()
{
	char dest[30] = "como ";
	char src[30] = "hola ";
	size_t result;
	size_t size = 5;
	result = ft_strlcat(dest, src, size);
	printf("%zu", result);

	return 0;
}
*/

//---------------------------- memset ----------------
/*
int main ()
{
	char	s[50] = "Hola como estas";
	int c = 'x';
	size_t n = 5;
	ft_memset(s, c, n);
	printf("%s", s);
	return 0;
}
*/

//------------------ bzero -------------------------
/*
int main()
{
	char s[30] = "hola";
	size_t n = 5;
	ft_bzero(s, n);
	printf("%s", s);
	return 0;
} */

//-------------------------- memcpy/memmove ---------------------
/*
int main()
{
	char dest[30];
	char src[50] = "hola como estas";
	size_t n = 5;
	ft_memcpy(dest, src, n);
	printf("src es :%s", src);
	printf("\ndest es : %s", dest);
	return 0;
}
int main()
{
	char dest[30];
	char src[50] = "hola como estas";
	size_t n = 4;
	ft_memmove(dest, src, n);
	printf("original : %s", src);
	printf("\nla copia : %s", dest);
	return 0;
} */

//------------------------------ toupper / tolower---------------------
/*
int main()
{
	int c = 's';
	printf("La letra original : %c", c);
	int result = ft_toupper(c);
	printf("\nLa letra en mayusuculas : %c", result);
	return 0;
}

int main()
{
	char c = 'A';
	char result = ft_tolower(c);
	printf("la letra original : %c", c);
	printf("\nla letra en minusculas : %c", result);
	return 0;
}
*/

//-------------------------------- strchr -----------------
 /*
int main()
{
	char str[50] = "Hola como estas";
	int c = 'c';
	char *result = ft_strchr(str, c);
	printf("la cadena es hasta : %s", result);
	return 0;
}

 */

//-------------------------- strrchr ---------------------
/*
int main()
{
	char s[50] = "hola como estas";
	int c = 'o';
	char *result = ft_strrchr(s, c);
	printf("el resultado es : %s", result);
	return 0;
}
*/
//-------------------------- strncmp -------------------------
/*
int main()
{
	char str1[50] = "hola como";
	char str2[50] = "hola";
	size_t n = 5;
	size_t result = ft_strncmp(str1, str2, n);
	printf("la diferencia es : %zu", result);
	return 0;
}
*/
//----------------------- memcmp -----------------
/*
int main()
{
	char str1[40] = "Hola como estas";
	char str2[40] = "Hola";
	size_t n = 7;
	size_t result = ft_memcmp(str1, str2, n);
	printf("el resultado es : %zu", result);
	return 0;
}*/

//--------------------- memchr ---------------
/*
int main()
{
	char s[50] = "Hola como estas";
	int c = 'o';
	size_t n = 7;
	char *result = ft_memchr(s, c, n);
	printf("%s", result);
	return 0;
}

*/

//--------------------- strnstr ------------------------
/*
int main()
{
	char *result = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	printf("%s", result);
	return(0);
}
*/
//------------------------- atoi-----------------------------
/*
int main()
{
	char str[10] = "123";
	int str1 = ft_atoi(str);
	printf("La cadena %s \nPasado a int : %d", str, str1);
	return 0;
}
*/
//substr
/*  int main()  {
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
		if (!(strsub = ft_substr(str, 7, 10)))
		printf("NULL");
		else
			printf("%s\n", strsub);
   }

*/
//------------------------- calloc -------------------
/*
int main()
{
	size_t n = 3;
	size_t m = 5;
	void *result = ft_calloc(n, m);
	printf("%p", result);
	return 0;
}
*/
// -------------------- strdup --------------------
/*
int main()
{
	char str[50] = "hola como estas";
	printf("La cadena original es : %s", str);
	ft_strdup(str);
	printf("\nLa cadena copia es : %s", str);
	return 0;
}*/
//------------------------- substr -----------------
/*

  int main()
  {
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
	if (!(strsub = ft_substr(str, 7, 10)))
			printf("NULL");
		else
			printf("%s\n", strsub);
   }

*/
//------------------------- strjoin ------------------
/*
int main()
{
	char str1[50] = "Hola como ";
	char str2[50] = "estas";
	char *result = ft_strjoin(str1, str2);
	printf("%s", result);
	return 0;
}
*/

//---------------------------- STRTRIM-----------------------
/*
int main()
{
	char str1[100] = "----------hola como estas-----------";
	char *set = "-";
	char *result = ft_strtrim(str1, set);
	printf("%s", result);
	return 0;
}
*/
//--------------- itoa ----------------
/*
int main()
{
	int n = 123;
	printf("El numero en int : %d", n);
	char *result = ft_itoa(n);
	printf("\nEl numero en char : %s", result);
}
*/
//-------------------------- strmapi ----------------------------
/*
//Funcion para printear :
char touppercase(unsigned int i, char c)
{
    (void) i;
    return ((char)ft_toupper(c));
}
//Funcion principal :
int main()
{
    char *original = "hola mundo!";
    char *resultado;
    resultado = ft_strmapi(original, touppercase);
    printf("%s", resultado);
    return (0);
}
*/
//--------------------- SPLIT --------------------------
/*
int main(void)
{
	char **result;
    int i;
    char *str = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";

	i = 0;
    result = ft_split(str, ' ');

    while (result[i])
	{
		printf("String [%d]: %s", i, result[i]);
		i++;
	}

	return (0);
}

*/
//------------------------- striteri -------------
/*
void touppercase(unsigned int i, char *s)
{
	(void)i;
	*s = ft_toupper(*s);
}
int main()
{
	char principal[30] = "hola como estas";
	printf("La cadena principal es : %s", principal);
	ft_striteri(principal, touppercase);
	printf("\nLa cadena modificada : %s", principal);
	return 0;
}
*/
//------------------ Putchar_fd -----------------------
/*
int main()
{
	char c = 'c';
	int fd = 1;
	ft_putchar_fd(c, fd);
	return	0;
}

*/
//---------------------- Putstr_fd--------------------
/*
int main()
{
	int fd = 1;
	char s[50] = "hola como estas";
	ft_putstr_fd(s, fd);

	return 0;
}
*/
//---------------- putnbr ---------------
/*
int main()
{
	int numero = 123;
	int fd = 1;

	ft_putnbr_fd(numero, fd);
	return 0;
}
*/
