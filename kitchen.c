#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 10

struct KitchenItem {
    char name[30];
    char location[50];
};

int main() {
    struct KitchenItem items[MAX_ITEMS] = {
        {"spoon", "Top drawer near the sink"},
        {"fork", "Top drawer near the sink"},
        {"knife", "Knife rack on the counter"},
        {"plate", "Upper cupboard above the dishwasher"},
        {"bowl", "Lower cupboard next to the fridge"},
        {"pan", "Bottom drawer under the stove"},
        {"pressure cooker", "Corner cupboard near the window"},
        {"mixer", "Appliance shelf next to the microwave"},
        {"glass", "Upper cupboard above the sink"},
        {"ladle", "Utensil holder next to the stove"}
    };

    char input[30];
    int found = 0;

    while (1) {
        printf("\nEnter a kitchen item (or type 'exit' to quit): ");
        scanf("%s", input);

        if (strcmp(input, "exit") == 0) {
            printf("Goodbye! Happy organizing!\n");
            break;
        }

        found = 0;
        for (int i = 0; i < MAX_ITEMS; i++) {
            if (strcmp(input, items[i].name) == 0) {
                printf("The %s is kept in: %s\n", input, items[i].location);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Sorry, I don't know where the %s is kept.\n", input);
        }
    }

    return 0;
}

