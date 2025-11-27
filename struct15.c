#include <stdio.h>

struct Weather 
{
    char city[30];
    float temperature;
    int humidity;
    float windSpeed;
    char condition[20];
};

int main() 
{
    struct Weather w;

    printf("Enter city name: ");
    scanf("%s", w.city);

    printf("Enter temperature (°C): ");
    scanf("%f", &w.temperature);

    printf("Enter humidity (%%): ");
    scanf("%d", &w.humidity);

    printf("Enter wind speed (km/h): ");
    scanf("%f", &w.windSpeed);

    printf("Enter weather condition (Sunny/Rainy/Cloudy): ");
    scanf("%s", w.condition);

    printf("\n------ WEATHER REPORT ------\n");
    printf("City: %s\n", w.city);
    printf("Temperature: %.2f °C\n", w.temperature);
    printf("Humidity: %d%%\n", w.humidity);
    printf("Wind Speed: %.2f km/h\n", w.windSpeed);
    printf("Condition: %s\n", w.condition);

    return 0;
}
