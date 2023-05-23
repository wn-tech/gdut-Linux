#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "exit.h"
#include "menu.h"

/**
 * 使用 exit(0) 终止程序的执行
 */
void exitProgram()
{
    logMessage("Exiting program...");
    exit(0);
}
