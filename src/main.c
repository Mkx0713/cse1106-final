
#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define LED_PIN 0
#define MIN_TEMP 68.0
#define MAX_TEMP 76.0
#define SENTINEL -999.0

int main(void)
{
    double temperature;
    double sum = 0.0;
    double average;
    int count = 0;

    if (wiringPiSetup() == -1) {
        printf("GPIO setup failed!\n");
        return 1;
    }

    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);

    printf("Smart Classroom Comfort Monitor\n");
    printf("Comfort range: %.1f F - %.1f F\n",
           MIN_TEMP, MAX_TEMP);

    while (1) {
        printf("\nEnter temperature in F (-999 to quit): ");

        if (scanf("%lf", &temperature) != 1) {
            printf("Invalid input!\n");
            digitalWrite(LED_PIN, LOW);
            return 1;
        }

        if (temperature == SENTINEL) {
            break;
        }

        sum += temperature;
        count++;

        if (temperature < MIN_TEMP ||
            temperature > MAX_TEMP) {

            printf("WARNING: Temperature out of range!\n");
            digitalWrite(LED_PIN, HIGH);

        } else {

            printf("NORMAL: Temperature within range.\n");
            digitalWrite(LED_PIN, LOW);
        }
    }

    digitalWrite(LED_PIN, LOW);

    if (count > 0) {
        average = sum / count;
        printf("\nAverage temperature: %.2f F\n",
               average);
    } else {
        printf("\nNo temperatures entered.\n");
    }

    printf("Program finished.\n");

    return 0;
}
