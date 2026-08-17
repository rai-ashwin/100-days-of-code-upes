/*
Write a program to input time in seconds and convert it to
hours:minutes:seconds format.
*/

#include <stdio.h>

int main() {
    long long totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%lld", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%lld:%02lld:%02lld\n", hours, minutes, seconds);

    return 0;
}