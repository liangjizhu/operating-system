#include <stdio.h>
#include <string.h>

typedef char user[25];

// struct User
// {
//     char name[25];
//     char password[12];
//     int id;
// };
typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main(){
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    // user user1 = "Bro";
    
    // struct User user1 = {"Bro", "password123", 1245234};
    // struct User user2 = {"asdo", "pord123", 121245234};

    User user1 = {"Bro", "password123", 1245234};
    User user2 = {"asdo", "pord123", 121245234};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0;
}