#include <unistd.h>
 
/* type: 0 - vertical, 1 - horizontal, 2 - diagonal, 3 - reverse diagonal*/
 
#define SIZE 10
 
char used_place(char used[4][SIZE * 2], int type, int x, int y)
{
    if (type == 0)
        return used[type][x];
    if (type == 1)
        return used[type][y];
    if (type == 2)
        return used[type][9 + x - y];
    if (type == 3)
        return used[type][x + y];
    return 0; /* СОСИ ЛОХ ТЫ НЕПРАВИЛЬНО ВЫЗВАЛ ФУНКЦИЮ */
}
 
void set_used_place(char used[4][SIZE * 2], int x, int y, char st)
{
    used[0][x] = st;
    used[1][y] = st;
    used[2][9 + x - y] = st;
    used[3][x + y] = st;
}
 
void print_answer(int answer[SIZE])
{
    int column;
    char print;
 
    column = 0;
    while (column < SIZE)
    {
        print = '0' + answer[column];
        write(1, &print, 1);
        ++column;
    }
    write(1, "\n", 1);
}
 
int find_all_answers(char used[4][SIZE * 2], int answer[SIZE], int x, int y, int left_figures)
{  
    int answers;
 
    answers = 0;
    if (left_figures == 0) /* еее боййййй */
    {
        print_answer(answer);
        return (1);
    }
    if (x >= SIZE || y >= SIZE || (SIZE - x) < left_figures) /* cringe */
    {
        return (0);
    }
    if (left_figures > 0 && !used_place(used, 0, x, y) && !used_place(used, 1, x, y)  /* Пытаемся ёбнуть фигурку в (x, y) */
        && !used_place(used, 2, x, y) && !used_place(used, 3, x, y))
    {
        answer[x] = y;
        set_used_place(used, x, y, 1);
        answers += find_all_answers(used, answer, x + 1, 0, left_figures - 1);
        set_used_place(used, x, y, 0);
    }
    answers += find_all_answers(used, answer, x, y + 1, left_figures);
    return (answers);
}
 
int ft_ten_queens_puzzle(void)
{
    char used[4][SIZE * 2];
    int answer[SIZE];
    int i;
    int j;
 
    i = 0;
    j = 0;
    while (i < 4)
    {
        j = 0;
        while (j < SIZE * 2)
        {
            used[i][j] = 0;
            ++j;
        }
        ++i;
    }
    return (find_all_answers(used, answer, 0, 0, SIZE));
}
 
 
#include <stdio.h>
 
int main() {
    int res = ft_ten_queens_puzzle();
    printf("found answers: %d\n", res);
    return 0;
}