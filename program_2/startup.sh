#!/bin/bash

while true; do
  # 获取系统日期
  YEAR=$(date +%Y | cut -c 3-4)
  DATE=$(date +$YEAR/%m/%d)

  # 显示菜单列表
  echo "------------------"
  echo -e "Linux\t$DATE"
  echo "------------------"
  echo "A: 查看进程信息"
  echo "B: 查看用户信息"
  echo "C: 显示当前目录信息"
  echo "D: 显示计算机名、Linux 内核版本、当前 IP 地址"
  echo "E: 退出"

  # 读取用户输入
  read -p "请输入选项: " choice

  # 根据用户选择执行相应功能
  case "$choice" in
    A|a|1)
      # 查看进程信息
      ps aux
      ;;
    B|b|2)
      # 查看用户信息
      who
      ;;
    C|c|3)
      # 显示当前目录信息
      ls -l
      ;;
    D|d|4)
      # 显示计算机名、Linux 内核版本、当前 IP 地址
      hostname
      uname -r
      # 提取出当前 IP 地址：显示网络接口的配置信息 | 过滤出包含 "inet "，以获取包括 IPv4 和 IPv6 地址的行 | 使用 AWK 工具打印每行的第二个字段
      ip addr show | grep 'inet ' | awk '{print $2}'
      ;;
    E|e|5)
      # 退出
      echo "退出程序"
      exit 0
      ;;
    *)
      echo "无效的选项"
      ;;
  esac

  # 分隔菜单和结果
  echo
done
