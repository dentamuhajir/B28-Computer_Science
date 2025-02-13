#include <stdio.h>
#include <string.h>

// Nested struct
struct Stadium {
    char name[30];
    int capacity;
};

struct Club {
    char name[30];
    int ranking;
    struct Stadium homeStadium; // Nested struct
};

int main() {
    struct Club manu;

    strcpy(manu.name, "Manchester United");
    manu.ranking = 1;

    strcpy(manu.homeStadium.name, "Old Trafford");
    manu.homeStadium.capacity = 74000;

    // Menampilkan informasi
    printf("Club Name: %s\n", manu.name);
    printf("Ranking: %d\n", manu.ranking);
    printf("Stadium Name: %s\n", manu.homeStadium.name);
    printf("Stadium Capacity: %d\n", manu.homeStadium.capacity);

    return 0;
}
