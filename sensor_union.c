#include<stdio.h>

union Sensor
{
    int temperature;
    float voltage;
};

int main()
{
    union Sensor s;

    s.temperature=30;

    printf("Temperature=%d\n",
            s.temperature);

    s.voltage=3.3;

    printf("Voltage=%.2f\n",
            s.voltage);

    return 0;
}
