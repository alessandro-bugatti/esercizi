#include <stdio.h>
#include <stdlib.h>

struct customer {
    char lastName[15];
    char firstName[15];
    unsigned int customerNumber;
    struct {
        char phoneNumber[11];
        char address[50];
        char city[15];
        char state[3];
        char zipCode[6];
        } personal;
} customerRecord = {
        "Doe",
        "John",
        11278,
        {
            "555-555555",
            "Lom Street, 43",
            "Chicago",
            "IL",
            "60007"
        }
    }, *customerPtr;

int main()
{
    customerPtr = &customerRecord;
    printf("Last name in customerRecord: %s\n", customerRecord.lastName);
    printf("Last name in customerPtr: %s\n", customerPtr->lastName);
    printf("First name in customerRecord: %s\n", customerRecord.firstName);
    printf("First name in customerPtr: %s\n", customerPtr->firstName);
    printf("Customer number in customerRecord: %u\n", customerRecord.customerNumber);
    printf("Customer number in customerPtr: %u\n", customerPtr->customerNumber);
    printf("Phone number in personal di customerRecord: %s\n", customerRecord.personal.phoneNumber);
    printf("Phone number in personal di customerPtr: %s\n", customerPtr->personal.phoneNumber);
    printf("Address in personal di customerRecord: %s\n", customerRecord.personal.address);
    printf("Address in personal di customerPtr: %s\n", customerPtr->personal.address);
    printf("City in personal di customerRecord: %s\n", customerRecord.personal.city);
    printf("City in personal di customerPtr: %s\n", customerPtr->personal.city);
    printf("State in personal di customerRecord: %s\n", customerRecord.personal.state);
    printf("State in personal di customerPtr: %s\n", customerPtr->personal.state);
    printf("ZipCode in personal di customerRecord: %s\n", customerRecord.personal.zipCode);
    printf("ZipCode in personal di customerPtr: %s\n", customerPtr->personal.zipCode);
    return 0;
}
