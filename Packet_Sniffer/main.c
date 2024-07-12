#include <stdio.h>
#include <stdlib.h>
#include <pcap.h>
#include <errno.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argv, char* argc[]){
    char error[PCAP_ERRBUF_SIZE];
    pcap_if_t *interfaces, *temp;
    int count = 0;

    if(pcap_findalldevs(&interfaces, error) == -1){
        printf("There is no Devices in the Interface");
        return -1;
    }

    printf("The Devices that are Connected in the Interface are : \n");
    for(temp = interfaces; temp; temp = temp->next){
        printf("#%d : %s", ++count, temp->name);
    }
    return 0;

}