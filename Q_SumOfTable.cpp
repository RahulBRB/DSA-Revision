// Given an integer find the sum of values of that table.
// If input=10, then output=550
// Ex: 10*1 + 10*2 + 10*3 + 10*4 + 10*5 + 10*6 + 10*7 + 10*8 + 10*9 + 10*10 = 550

int sumOfTable(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += n * i;  // Adding n * i to the sum
    }
    return sum;  // Return the total sum after the loop
}
