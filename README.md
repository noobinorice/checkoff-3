# IPv4 Networking with Bitwise Operators

## Overview

This project explores how bitwise operators are used in IPv4 networking, specifically to determine network addresses, calculate broadcast addresses, and understand subnetting.

I explored this topic for COMP 211 because I wanted to understand how operations like AND, OR, and NOT are used in real-world systems.

## What I Learned

### 1. Network and Host Addresses

An IPv4 address contains 32 bits divided into a network portion and a host portion.

For example:

- IP address: `192.168.1.10/24`
- Subnet mask: `255.255.255.0`
- Network address: `192.168.1.0`
- Broadcast address: `192.168.1.255`

The subnet mask determines which bits belong to the network.

### 2. Bitwise AND

Bitwise AND is used to calculate a network address.

```c
network = ip & subnet_mask;
```

The subnet mask preserves network bits and clears host bits.

### 3. Broadcast Addresses

A broadcast address has all host bits set to 1.

It can be calculated using:

```c
broadcast = ip | ~subnet_mask;
```

### 4. Subnetting

Subnetting divides a larger network into smaller networks.

For example, `192.168.1.0/24` can be divided into:

- `192.168.1.0/25`
- `192.168.1.128/25`

Each subnet contains 128 total IPv4 addresses.

## C Demonstration

The `src/network.c` program demonstrates how bitwise AND, OR, and NOT calculate network and broadcast addresses.

### How to Run

Compile using GCC:

```bash
gcc -Wall -Wextra -std=c11 src/network.c -o network
```

Run:

```bash
./network
```

Expected output:

```text
IP Address:        192.168.1.10
Subnet Mask:       255.255.255.0
Network Address:   192.168.1.0
Broadcast Address: 192.168.1.255
```

## Presentation

The `slides/` folder contains the LaTeX Beamer source and compiled PDF used for my COMP 211 presentation.

## Key Takeaway

My biggest takeaway was that networking concepts like subnet masks and broadcast addresses can be implemented using simple bitwise operations that we learn in systems programming.

## References

See `references.md` for additional resources.
