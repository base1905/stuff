#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45

struct film {
	char title[TSIZE];
	int rating;
	struct film *next;
	struct film *prev;
};

char *s_gets(char * st, int n);

int main(void)
{
	struct film *head = NULL;
	struct film *tmp = NULL;
	struct film *current;
	char input[TSIZE];

	puts("Введите название первого фильма:");
	while (s_gets(input, TSIZE) != NULL && input[0] != '\0')
	{
		current = (struct film *)malloc(sizeof(struct film));

		if (head == NULL)	/* первая структура */
		{
			head = current;
			head->prev = NULL;
		}
		else				/* последующие структуры */
			tmp->next = current;
		current->next = NULL;
		current->prev = tmp;

		strcpy(current->title, input);
		puts("Введите свое значение рейтинга <0-10>:");
		scanf("%d", &current->rating);
		while (getchar () != '\n')
			continue;
		puts("Введите название следующего фильма (иди пустую строку для прекращения ввода):");
		tmp = current;
	}
	if (head == NULL)
		printf("Данные не введены.");
	else
		printf("Список фильмов:\n");

	current = head;
	while (current != NULL)
	{
		printf("Фильм: %s Рейтинг: %d\n", current->title, current->rating);
		current = current->next;
	}

	while (current != NULL)
	{
		printf("Фильм: %s Рейтинг: %d\n", current->title, current->rating);
		current = current->prev;
	}


	current = head;
	while (current != NULL)
	{
		//current = head;

		free(current);

		current = current->next;
	}

	printf("Программа завершена.\n");
	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
		continue;
	}
return ret_val;

}