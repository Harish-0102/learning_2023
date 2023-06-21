//time difference between two times
#include <stdio.h>

struct pre_req {
    int Hours;
    int Minutes;
    int Seconds;
};

struct pre_req cal_time_diff(struct pre_req t1, struct pre_req t2) 
{
    struct pre_req diff;
    int Seconds1, Seconds2, timeDiff;

  
    Seconds1 = t1.Hours * 3600 + t1.Minutes * 60 + t1.Seconds;

  
    Seconds2 = t2.Hours * 3600 + t2.Minutes * 60 + t2.Seconds;

    
    timeDiff = Seconds2 - Seconds1;

    
    if (timeDiff < 0)
        timeDiff += 24 * 3600;

   
    diff.Hours = timeDiff / 3600;
    timeDiff = timeDiff % 3600;
    diff.Minutes = timeDiff / 60;
    diff.Seconds = timeDiff % 60;

    return diff;
}

int main() {
    struct pre_req Time1, Time2, diff;

    // Read time1 from the user
    printf("Enter time1 (HH MM SS): ");
    scanf("%d %d %d", &Time1.Hours, &Time1.Minutes, &Time1.Seconds);

    // Read time2 from the user
    printf("Enter time2 (HH MM SS): ");
    scanf("%d %d %d", &Time2.Hours, &Time2.Minutes, &Time2.Seconds);

    // Calculate the difference
    diff = cal_time_diff(Time1, Time2);

    // Display the difference
    printf("Time difference between Time1 and Time2 is : %02d:%02d:%02d\n", diff.Hours, diff.Minutes, diff.Seconds);

    return 0;
}
