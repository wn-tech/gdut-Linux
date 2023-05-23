#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cpu.h"
#include "menu.h"

/**
 * 查看 CPU 硬件信息：lscpu
 * 将命令输出写入文件 log.txt
 */
void showCPUInfo()
{
    logMessage("Showing CPU hardware information...");

    // 使用 popen() 函数执行 Linux 命令并读取输出
    FILE *cmd_output = popen("lscpu", "r");
    if (cmd_output == NULL)
    {
        logMessage("Error executing command.");
        return;
    }

    // 读取命令输出并将其写入 log.txt 文件
    FILE *log_file = fopen("log.txt", "a");
    if (log_file == NULL)
    {
        logMessage("Error opening log file.");
        pclose(cmd_output);
        return;
    }

    // 逐行读取命令输出并写入 log.txt 文件
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), cmd_output) != NULL)
    {
        fprintf(log_file, "%s", buffer);
    }

    // 关闭文件和命令输出
    fclose(log_file);
    pclose(cmd_output);
}
