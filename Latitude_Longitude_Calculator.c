#include<stdio.h>

int main () {
int long_degrees , long_minutes , long_seconds;
int lat_degrees , lat_minutes , lat_seconds;
float latitude , longitude;
char lat_dir,lon_dir;

printf("Enter Degree, Minutes and Seconds of Longitude: ");
scanf("%d %d %d" , &long_degrees , &long_minutes , &long_seconds );

printf("\nEnter Latitude Direction (North or South): ");
scanf(" %c" , &lat_dir);

printf("\nEnter Degree, Minutes and Seconds of Latitude: ");
scanf("%d %d %d" , &lat_degrees , &lat_minutes , &lat_seconds);

printf("\nEnter Longitude Direction (East or West): ");
scanf(" %c", &lon_dir);

longitude = long_degrees + (long_minutes / 60.0) + (long_seconds / 3600.0);
latitude  = lat_degrees  + (lat_minutes  / 60.0) + (lat_seconds  / 3600.0);


    if(lat_dir == 'S' || lat_dir == 's') {
        latitude = -latitude;
    }

    if(lon_dir == 'W' || lon_dir == 'w') {
        longitude = -longitude;
    }

printf("\nLongitude: %.2f° (%c)\nLatitude : %.2f° (%c)\n", 
           latitude, lat_dir,
           longitude, lon_dir
           );
           
if(latitude > 0) {
printf("\nLatitude is Above the Equator" ); }

else if(latitude < 0) {
printf("\nLatitude is Below the Equator" ); }

else { printf("\natitude is on the Equator" ); 
}

return 0;
}



