# include<stdio.h>

int main() {
    int year, leap_years = 0, total_days = 0, day_of_week;
    
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Count leap years from year 1 to (year-1)
    for (int i = 1; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            leap_years++;
        }
    }
    
    // Calculate total days
    total_days = (year - 1 - leap_years) * 365 + leap_years * 366;
    
    // Find day of week (0 = Monday, 1 = Tuesday, ..., 6 = Sunday)
    day_of_week = total_days % 7;
    
    printf("\nThe day on January 1, %d is: ", year);
    
    switch (day_of_week) {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }
    
    return 0;
}