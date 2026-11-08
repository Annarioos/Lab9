```mermaid
graph TD
    Start([Начало программы]) --> Init[setlocale, объявление переменных]
    
    %% --- ЗАДАНИЕ 1.1 ---
    Init --> Print1[Печать: 'Задание 1. Таблица умножения']
    Print1 --> For1_R_Init[r = 1]
    For1_R_Cond{r <= ROW} -->|Да| For1_C_Init[c = 1]
    For1_R_Cond -->|Нет| Print2
    
    For1_C_Cond{c <= COL} -->|Да| PrintPif[Печать pif r, c]
    PrintPif --> For1_C_Inc[c = c + 1]
    For1_C_Inc --> For1_C_Cond
    
    For1_C_Cond -->|Нет| For1_R_NL[Печать '\n']
    For1_R_NL --> For1_R_Inc[r = r + 1]
    For1_R_Inc --> For1_R_Cond

    %% --- ЗАДАНИЕ 1.2 ---
    Print2[Печать: 'Задание 1.2. Левый нижний треугольник'] --> For2_R_Init[r = 1]
    For2_R_Cond{r <= ROW} -->|Да| For2_C_Init[c = 1]
    For2_R_Cond -->|Нет| Print3
    
    For2_C_Cond{c <= r} -->|Да| PrintPif2[Печать pif r, c]
    PrintPif2 --> For2_C_Inc[c = c + 1]
    For2_C_Inc --> For2_C_Cond
    
    For2_C_Cond -->|Нет| For2_R_NL[Печать '\n']
    For2_R_NL --> For2_R_Inc[r = r + 1]
    For2_R_Inc --> For2_R_Cond

    %% --- ЗАДАНИЕ 1.3 ---
    Print3[Печать: 'Задание 1.3. Вариант 9'] --> For3_R_Init[r = 1]
    For3_R_Cond{r <= V_ROW} -->|Да| For3_C_Init[c = 1]
    For3_R_Cond -->|Нет| Print4
    
    For3_C_Cond{c <= 6 - r} -->|Да| PrintMat[Печать mat r]
    PrintMat --> For3_C_Inc[c = c + 1]
    For3_C_Inc --> For3_C_Cond
    
    For3_C_Cond -->|Нет| For3_R_NL[Печать '\n']
    For3_R_NL --> For3_R_Inc[r = r + 1]
    For3_R_Inc --> For3_R_Cond

    %% --- ЗАДАНИЕ 2 ---
    Print4[Печать: 'Задание 2...'] --> DoStart[Ввод числа n]
    
    DoStart --> CallSumma[Вызов функции: s = summa n]
    CallSumma --> PrintResult[Печать результата s]
    PrintResult --> AskOtv[Запрос и ввод ответа: otv]
    
    AskOtv --> DoCond{"otv == 'y' || otv == 'Y'"}
    DoCond -->|Да| DoStart
    DoCond -->|Нет| End([Конец программы])

    %% --- ПОДПРОГРАММЫ ---
    subgraph Функция pif(r, c)
        pif_start([pif]) --> pif_ret[return r * c]
    end

    subgraph Функция mat(r)
        mat_start([mat]) --> mat_ret[return r * 5]
    end

    subgraph Функция summa(num)
        sum_start([summa]) --> sum_init[sum = 0]
        sum_init --> sum_div[num = num / 10]
        sum_div --> sum_while{num > 0}
        
        sum_while -->|Да| sum_mod[k = num % 10]
        sum_mod --> sum_if{k % 2 == 0}
        sum_if -->|Да| sum_add[sum = sum + k]
        sum_if -->|Нет| sum_step[num = num / 10]
        sum_add --> sum_step
        sum_step --> sum_while
        
        sum_while -->|Нет| sum_ret[return sum]
    end
```
