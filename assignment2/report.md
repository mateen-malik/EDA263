# Assignment 2

- Group 27
  - Linus Oleander, 8806134873
  - Hsin-Kai Chen, 920412C355

## Answers

### 1.

- Linus Oleander, Group 27, 8806134873
- Hsin-Kai Chen, Group 27, 920412C355

### 2.

    > gpg --fingerprint 551B0640
    0ADD 6020 4121 B03E A4E2  55ED D39C C5E6 551B 0640

### 3.

Here we use the software Thunderbird as our mail client. The reasons that we use it is because it is easy to use and already combined with the gpg key so that we can directly encrypt our message through the Thunderbird's interface.

### 4.

Hsin-Kai Chen: I think I won't use it in the future since that most of my friends are not computer science students. It is too hard for them to decrypt my message using gpg. We don't care about the security of our message that much. But if I want to encrypt my own file, I will consider to use it since it is safer.

### 5. (signing)

- A
  - Confidentiality
    - The message isn't secure in that sense that it can be readable by anyone. 
  - Integrity
    - Only certain users should be able to change data. The data passed 
    to the system can be verified using signing.
  - Availability
    - We use signing to check that only the legitimate user can get the resources from the system. Otherwise we reject it. This can prevent the distributed Denial-of-Service attacks and ensure the availibilty that every part of the system is functioning correctly and the information is available.

- B (signing)
  - 1. D = H(M) => Hash message M.
  - 2. S = D xor K => Sign hashed value with equal size key K.
  - 3. Send S,M to receiver.

- C
  - We can sign a message in two ways; one using a public key encryption and the other one using a hash function. The hash function requires less CPU and can in the case of MD5 compress the message down to 128 bits, which is an advantage if the bandwidth and CPU is slow.

### 6. (encryption)

- A
  - Confidentiality
    - Only certain users should be able to read the data. Using encryption
    only authorized users has read access.

- B
  - Encryption
    - 1. Generate random key K.
    - 2. Encrypt the date using key K to D'.
    - 3. Encrypt K with receiver's public key to K'.
    - 4. Send D' and K' to receiver.

  - Decryption
    - 1. Receive D and K.
    - 2. Use receiver's private key to decrypt K to K'.
    - 3. Use K' to decrypt D to D'.
    - 4. D' is the message from sender.
- C
  - Conventional Encryption:
    - 1. It is fast.
    - 2. It is simple.
    - 3. It is low cost.

  - Public Key Cryptography
    - 1. The distribution of key is easier to achieve.
    - 2. It is safer because only owner knows his private key.

### 7.

A key is marked as trusted by an owner if any of these requirements are meet:

- You as an owener has signed it personally.
- It has been signed by one fully trusted key owner.
- It has been signed by three marginally trusted key owners.

... and the path of signed keys leading from the key in question back to your own key is less than six steps.

The trusted parameter for a person in you keychain is the truested-value you have set by your self. The validity on the other hand is the calculated value based on your web-of-trust.

### 8.

- (a) Elena trust: unknown, validity: unknown
- (b) Elena trust: unknown, validity: marginal