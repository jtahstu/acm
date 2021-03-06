﻿/**
 * Project Name: Ai_homework
 * File Name: AI_homework.java
 * Created on: 2015/6/30 19：00
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 * 用C#实现数独的求解
 */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace AI_homework {
    class Program {
        //出题，采用静态数组
        static int[,] pu = new int[9, 9]
        {
        {0,0,0,7,2,8,0,0,0},
        {0,9,0,0,5,1,6,0,0},
        {0,0,0,0,6,0,0,8,2},
        {3,0,0,8,0,2,7,0,4},
        {1,7,4,0,3,0,0,2,0},
        {2,8,0,5,0,0,0,3,0},
        {0,1,0,3,0,0,2,0,0},
        {0,0,7,0,4,6,0,0,5},
        {0,0,6,1,0,0,0,4,9} };
        static void Main(string[] args) {
            Show();
            GetAnswer(0);
            Console.ReadLine();
        }
        /// <summary>
        /// 验证函数
        /// </summary>
        /// <param name="i"></param>
        /// <param name="j"></param>
        /// <returns></returns>
        static bool IsValid(int i, int j) {
            int n = pu[i, j];
            int[] query = new int[9] { 0, 0, 0, 3, 3, 3, 6, 6, 6 };
            int t, u;
            //每一行每一列是否重复
            for (t = 0; t < 9; t++) {
                if ((t != i && pu[t, j] == n) || (t != j && pu[i, t] == n))
                    return false;
            }
            //每个九宫格是否重复
            for (t = query[i]; t < query[i] + 3; t++) {
                for (u = query[j]; u < query[j] + 3; u++) {
                    if ((t != i || u != j) && pu[t, u] == n)
                        return false;
                }
            }
            return true;
        }
        /// <summary>
        /// 显示函数
        /// </summary>
        static void Show() {
            for (var i = 0; i < 9; i++) {
                for (var j = 0; j < 9; j++) {
                    Console.Write(pu[i, j] + " ");
                }
                Console.WriteLine();
            }
            Console.WriteLine("------");
        }
        /// <summary>
        /// 使用回溯算法求解
        /// </summary>
        /// <param name="n"></param>
        static void GetAnswer(int n) {
            if (n == 81) {//是否已经是最后一个格子
                Show();
                return;
            }
            int i = n / 9, j = n % 9;
            if (pu[i, j] != 0) {//如果当前格子不需要填数字，就跳到下一个格子
                GetAnswer(n + 1);
                return;
            }
            for (int k = 0; k < 9; k++) {
                pu[i, j]++;//当前格子进行尝试所有解
                if (IsValid(i, j))
                    GetAnswer(n + 1);//验证通过，就继续下一个
            }
            pu[i, j] = 0;  //如果上面的单元无解，还原，就回溯
            return;
        }
    }
}