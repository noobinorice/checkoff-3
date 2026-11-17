#include <stdio.h>
#include <stdint.h>

void print_ip(uint32_t ip) {
    printf("%u.%u.%u.%u",
           (unsigned)((ip >> 24) & 255),
           (unsigned)((ip >> 16) & 255),
           (unsigned)((ip >> 8) & 255),
           (unsigned)(ip & 255));
}

int main(void) {
    // IPv4 address: 192.168.1.10
    uint32_t ip = (192u << 24) |
                  (168u << 16) |
                  (1u << 8) |
                  10u;

    // /24 subnet mask: 255.255.255.0
    uint32_t mask = 0xFFFFFF00u;

    // Calculate network address
    uint32_t network = ip & mask;

    // Calculate broadcast address
    uint32_t broadcast = ip | ~mask;

    printf("IP Address:        ");
    print_ip(ip);

    printf("\nSubnet Mask:       ");
    print_ip(mask);

    printf("\nNetwork Address:   ");
    print_ip(network);

    printf("\nBroadcast Address: ");
    print_ip(broadcast);

    printf("\n");

    return 0;
}
