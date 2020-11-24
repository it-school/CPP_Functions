#pragma once

const int N = 5;

int main(int argc, char** argv);

void printArray(int array[N][N]);
void fillArray(int array[N][N]);
void fillArray(int array[N][N], int k);
void processArray(int array[N][N], int k);
int findMaxInArray(int array[N][N], int &x, int &y);
void recursion();