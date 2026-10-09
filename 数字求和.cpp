#include <stdio.h>
// 函数：用循环计算1到N的和，is_show_process控制是否显示计算过程
int sum_from_1_to_N(int N, int is_show_process) {
    int sum = 0;
    int i;
    for (i = 1; i <= N; i++) {
        sum += i;
        // 如果开启了过程显示，打印当前步骤
        if (is_show_process {
            if (i == 1) {
                printf("%d", i);
            } else {
                printf(" + %d", i);
            }
        }
    }
    if (is_show_process) {
        printf(" = ");
    }
    return sum;
}
int main() {
    int N;
    char choice;
    int show_process;

    printf("=== 1到N整数求和程序 ===\n");
    printf("是否显示计算过程？(1=显示 0=不显示): ");
    scanf("%d", &show_process);
    do {
        printf("\n请输入一个正整数N: ");
        if (scanf("%d", &N) != 1 || N <= 0) {
            printf("输入无效！请输入正整数。\n");
            // 清空输入缓冲区，防止死循环
            while (getchar() != '\n');
            continue;
        }
        // 调用求和函数
        int result = sum_from_1_to_N(N, show_process);
        printf("%d\n", result);
        // 询问是否继续
        printf("是否继续计算？(y/n): ");
        scanf(" %c", &choice); // 前面加空格，跳过换行符
    } while (choice == 'y' || choice == 'Y');
    printf("程序结束。\n");
    return 0;
}
