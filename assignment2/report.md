# Assignment 2

- Group 27
  - Linus Oleander, 8806134873
  - Hsin-Kai Chen, 920412C355

## Answers

### 1.

- Linus Oleander, Group 27, 
- Hsin-Kai Chen, Group 27, 920412C355

### 2.

    > gpg --fingerprint 551B0640
    0ADD 6020 4121 B03E A4E2  55ED D39C C5E6 551B 0640

### 3.

Here we use the software Thunderbird as our mail client. The reasons that we use it is because it is easy to use and already combined with the gpg key so that we can directly encrypt our message through the Thunderbird's interface.

### 4.

Hsin-Kai Chen: I think I won't use it in the future since that most of my friends are not computer science students. It is too hard for them to decrypt my message using gpg. We don't care about the security of our message that much. But if I want to encrypt my own file, I will consider to use it since it is safer.

Linus: TODO

### 5. (signing)

- A
  - Integrity
    - Only certain users should be able to change data. The data passed 
    to the system can be verified using signing.
  - Availability

- B (signing)
  1. D = H(M) => Hash message M
  2. S = D xor K => Sign hashed value with equal size key K
  3. Send S,M to receiver

- C
  - We can sign a message in two ways; one using a public key encryption and the other one using a hash function. The hash function requires less CPU and can in the case of MD5 compress the message down to 128 bits, which is an advantage if the bandwidth and CPU is slow.

### 6. (encryption)

- Confidentiality
  - Only certain users should be able to read the data. Using encryption
  only authorized users has read access.