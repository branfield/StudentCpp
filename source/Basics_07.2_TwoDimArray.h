// ��������������� ����:
// ��������� ������

#pragma once
#include <iostream>
using namespace std;

namespace TwoDimArray
{
   void main()
   {
      /*
       * � ��������� ������� ��������� ������� ����� ������ ��� ������ ������.
       * ��������, ��������, ����� ������� ������ ��������� �� ���� �����������.
       * ����� ��������� 3 �������.
       * 
       * 3 �������� � � ������� �� 2 ������.
       * 
       * ��������� ��� ���������� ����� 3 ���������
       * 1. ��������� ��������� ��������
       * 2. ���� ������� ������
       * 3. ��������� ������
       * 
       * ���������� ������ ������ �� �������:
       * 
       * 1. ��������� ��������� ��������
       * ��� ������� �������� ����� ��������� ���� ����������� ������ �� 2 ������
       */

      int arrayStudent1[2];
      // ������ ������� ����� ����� ����������
      arrayStudent1[0] = 5;
      arrayStudent1[1] = 5;
      int arrayStudent2[2];
      // ������ - ����������
      arrayStudent2[2] = 2;
      arrayStudent2[3] = 2;
      int arrayStudent3[2];
      // ������ - ��������������
      arrayStudent3[4] = 4;
      arrayStudent3[5] = 3;

      /*
       * �����, �������� �������. ����� ��������, ��� �������. ����� ��� �� ���?
       * ���������������. ��������, �� �� ����� �� ������ ���������, ������� ����� ���������.
       * ������������ ������ ����� ������� ��������� ������ ����� ��������� � ������.
       * ������� ����� ������� ����������? 10? 50? 100? 1000?
       * � ���? ��� �� ���������? � ��� ���������� � ������ ����������� ����� ����������?
       * 
       * � �����, ��� �� �� ����� ����������. �� ����� ���������� � ����� ������ �������.
       * ��� ������ ���� ������� �����.
       */

      /*
       * 2. ���� ������ ��� ���� ������
       * 
       * ����� ��������� ������ ��� 3 ������� ����������� 6 ����� ������
       * ������ 0 � 1 ����� �������� ��� �������� 0 
       * (���������� ��������� � 0, ��� � �������)
       * ������ 2 � 3 - ������ 1 ��������
       * ������ 4 � 5 - ������ 2 ��������
       */

      int array1[6];
      
      array1[0] = 5;
      array1[1] = 5;
      
      array1[2] = 2;
      array1[3] = 2;

      array1[4] = 4;
      array1[5] = 3;

      /*
       * ���� � ��� ���� 3 �������� � ������� �� 2 ������. ��� ��� �������� � ����� �������.
       * �� ������ �������� � ���������������� (��������, �� ���-�� ������ �����������,
       * ��� ������ ���������� � ������� ������ ���� ������ ����������).
       * 
       *  �����, ��������, ��� �� ����� ��������� ������ ��� n ��������� � m ���������.
       *  ������ ������� ��� �������� ����� ����� ���� ����� ����� n * m
       *  
       * �� ��� ����������, ������, � ������ �� ������ ���������� � ������� ��������?
       * ���� ���������� ���� � 0, �� ��� ����� ������� � �������� 1 � ���������� � �������� 0
       * 
       * ���� ����������� �� ������������� ������� ����, �� ������ ������ ����� �� ������� - 2
       * 
       * ����� �������� ������� ������� ������� ������ ������ � �������: 
       * i * m + j = 1 * 2 + 0 = 2
       * ��� i - ������ �������� ��������, � j - ������ ������ ����������
       * 
       * ����� ������� ����� �����������������. ������������ ������ ����� ��������, ����� ����������,
       * � ���������, ��������� �������, ������ ������ ������.
       * 
       * ������.
       */

      /*
       * �� ����� �� ������������ ���� ������� ��������. ������ ��� ������ ��������� � ��������
       * �������, ������ ����� ������ ������ ������... ���, �� ��� ������.
       * 
       * ������� �� ���� ������ ���������������� ���� ������� ����������� ��������.
       * � ������ ������ ��� ����� ���������� ���������� �������.
       * 
       * 3. ��������� ������
       */

      int array[3][2]; // 3 �������� �� 2-� �����������
      // ������ 0 ��������
      array[0][0] = 5; // 0 ����������
      array[0][1] = 5; // 1 ����������
      // ������ 1 ��������
      array[1][0] = 2; // 0 ����������
      array[1][1] = 2; // 1 ����������
      // ������ 2 ��������
      array[2][0] = 4; // 0 ����������
      array[2][1] = 3; // 1 ����������

      /*
       * ����� �� ������������ ���� ��������� ������? 
       * �� ��������� �� ������ �������� (���� ������) �� ������ �������� ����� ������� ����������.
       * ��, �� ��� �����. �� ���������� ���� �����������, ������ �� ����� �� ����� �������
       * ������ �����, ����� ������ �������� � ���������� �������������.
       * ���� ��� �� ����� ����������� ���������� �� �������.
       * 
       * ��� �� ��� ��������.
       * 
       * �� ����� ���� ������ ���������� ������� - ��� ���� �������������� "�����" ��� ������������.
       * � ������ "���������" ������ ���������� ����������� � ������, ��� ���� "�������" �������,
       * ��� �� ���� ������ ������ �� ������ �������.
       * 
       * �� ������� ���� ������ ����� �� ���� ��������� �� ���.
       * 
       * int array[3][2];
       * ������������� ������������ � ��������
       * int array[3 * 2];
       * 
       * � �������
       * array[i][j];
       * ������������� �
       * array[i * m + j];
       * 
       * �� ����� ����, ��� �� �������, ���� �������� [] - ��� ���� ����� � �� ����� ����
       * ��� �������� ��� ������� ��-�������:
       * 
       * *(array + i * m + j);
       * 
       * � ��� �������� ������ ����� ������� �������:
       * 
       * array[i][j];
       */

      /*
       * �� ������, � �������������� ��������� �������� �����������, �� ��� �� ��� �������� � ������.
       * ����� �� ���� ������ ��� ������: ��������� ������ ������������� ������������ 
       * � ������� ��������� ������. � ������ ������ 
       * 
       * int array[3][2];
       * 
       * � ������ �������� ���:
       * 
       *       0      1      2      3      4      5
       *    |------|------|------|------|------|------|
       *    |  5   |  5   |  2   |  2   |  4   |  3   |
       *    |------|------|------|------|------|------|
       *    ^             ^             ^             ^
       *    |-------------|-------------|-------------|
       *     ������ 1 ��.   ������ 2 ��.  ������ 3 ��.
       *     
       * ��� ���: 
       * 
       * ������ ����� ����������� �������� � ������ �������.
       * ������ � �������� �������. ������ ���� ���� �� ������. 
       * ������������ � ������ ����� ���� ������, ���� �����.
       * ������� "����", "����" � ������ ���� �� ����� �� �����������.
       * 
       * ��, ��������� ������ �� ������ � ������������� ����� �� ������� ��� �������.
       * �� 
       * 
       * ������� ������ � ������ ���� �� �����. 
       * 
       * ������ �������. ��� ������ � �������� �������� ������.
       */
   }
}