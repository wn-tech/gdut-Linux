#include <stdio.h>
#include "menu.h"
#include "cpu.h"
#include "process.h"
#include "memory.h"
#include "storage.h"
#include "exit.h"

#define TRUE 1

int main()
{
    char choice;
    showMenu();

    while (TRUE)
    {
        printf("请输入选项：");
        scanf(" %c", &choice);

        logOption(choice);

        switch (choice)
        {
        case 'A': /* 查看 CPU 硬件信息 */
            showCPUInfo();
            break;
        case 'B': /* 查看进程运行信息 */
            showProcessInfo();
            break;
        case 'C': /* 查看内存硬件信息、内存使用信息 */
            showMemoryInfo();
            break;
        case 'D': /* 查看存储设备硬件信息、存储设备使用信息 */
            showStorageInfo();
            break;
        case 'E': /* 退出 */
            exitProgram();
            return 0;
        default:
            printf("无效的选项，请重新输入。\n");
            logMessage("Invalid choice.");
            break;
        }
    }
}