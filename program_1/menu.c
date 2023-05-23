#include <stdio.h>
#include "menu.h"

/**
 * C 交互菜单显示
 */
void showMenu()
{
    printf("------------------\n");
    printf("C\t交互菜单\n");
    printf("------------------\n");
    printf("A: 查看 CPU 硬件信息\n");
    printf("B: 查看进程运行信息\n");
    printf("C: 查看内存硬件信息、内存使用信息\n");
    printf("D: 查看存储设备硬件信息、存储设备使用信息\n");
    printf("E: 退出\n");
    printf("------------------\n");
}

/**
 * 将用户输入选项输出写入文件 log.txt
 */
void logOption(char choice)
{
    FILE *file = fopen("log.txt", "a");
    if (file != NULL)
    {
        fprintf(file, "Selected choice: %c\n", choice);
        fclose(file);
    }
}

/**
 * 将命令显示信息输出写入文件 log.txt
 */
void logMessage(const char *message)
{
    FILE *file = fopen("log.txt", "a");
    if (file != NULL)
    {
        fprintf(file, "%s\n", message);
        fclose(file);
    }
}
