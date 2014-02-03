# Assignment 1

- Group 27
  - Linus Oleander, 8806134873
  - Hsin-Kai Chen, 920412C355

## Introduction

In this lab we have to know how different ways of authentications work, and the individual's advanteages and disadvantages, and how can we put it into practice. We also need to know how SUID works, the difference between ruid and euid, and the concept of upgrade or downgrade priviledges while running a program. After this lab we should get more knowledges about the authentication of computer security.

## Answers

### 1.

Password ageing is a way to ensure that the password hasn't been in use too long. The password might be store together with a timespamp indicating when the password was created/changed. In our case the age parameter is a plain counter that's being incremented every time a user is successfully logined.

This is the code we're using in our implementation to indicate that a password is ageing.

```
// login successfully
pwd->pwage++;
// update {pwa} on the system
```

### 2.

- Advantages
  - If the hacker get a hold of the users' password, for example from a leakt database, it might already be expired.

- Disadvantages
  - A continuously changing password might be tempting to write down.
  - The user might pick an easy password to be able to remember it.

### 3a

- Password
  - Database with hashed passwords and a front end with a login form.
- Key card
  - A key card reader and a database with tokens based on the information on the card that the user will end up with.
- Biometrics
  - We need to enroll the user into the system using for the example a fingerprint reader.

### 3b

- User knows: password, pin code
  - Advantages
    - Easy and cheap to implement.
    - User can pick its' own password and change it easily.
    - Can be provided via electronics from a distance, i.e email.
  - Disadvantages
    - The user might write it down. good for hackers, bad for the system.
    - The electronic media, like the email can be hacked.
    - Stored in a database with or without encryption, which might be accessed by a hacked using some cpu power.
- User has: key card, smart card, regular keys
  - Advantages
    - You need both the password and the physical token, if a password exists, more layers of security.
    - A hacker can't eavesdropping, like with a regular password.
  - Disadvantages
    - You need hardware, which might be expensive.
    - A hacker might get a hold of the key.
    - You need to transport the key to the user, physically - it might get stolen.
- User is: biometrics, fingerprint, eyeball, voice
  - Advantages
    - Difficult to copy, nothing to eavesdrop.
    - The user don't have to bring anything.
    - Difficult to lose.
  - Disadvantages
    - Can't be used by everyone, i.e. disable people.
    - You might lose your biometric (like your eye).
    - Difficult and expensive to implement.
    - Might not be very accurate, missmatching for i.e.

### 3.c

- Password
  - We can educate the user about security breaches, for example writing the assword down and to create rememberable passwords.
  - Use better hashing algorithms, like Blowfish instead of md5 which is slower/more secure to use.
  - Use a unique salt for every user to prevent rainbow table-attacks
- Key cards
  - Send the keycard in a safe way or force the user to pick it up at "the office" by him/her self.
  - Add more layers of authentication, like a password authentication
- Biometric
  - Use a system which doesn't require the user to touch everyting, like a voice authentication system.
  - Use a backup authentication system, like a really complicated password to prevent hostage situations.
  - Use an biometric authentication that has been tested and proven to work.

### 4.a

- Keycard
  - Need access to a physical location which makes using a keycard easier than password and username.
  - A lot of users and low budget, which makes keycard cheap to implement, educate and use.

### 4.b

- Biometric
  - We need high security.
  - Nothing to be stolen, which results in a lower risk of intrusion.
  - Not that many users (compared to a school), which makes a biometric authentication easier and cheaper to implement.

### 4.c

- Keycard
  - Same as university

### 4.d

- Password
  - Low risk of intrusion
  - No extra hardware. Most people don't want to buy a seperate system for authentication.
  - Easy to implement.

### 5.

To ensure that we as a user don't pass sensitive information to the wrong system.

### 6.a

- i
  - euid=20716
  - ruid=20716
- ii
  - euid=20716
  - ruid=20716

### 6.b

- S - 0
- S - 20757
- S - 20716
- F - 20716
- F - 20716
- S - 20716

### 7.a

- euid=0
- ruid=20716

### 7.b

To have the higher or lower privileges when running a program, which can be more convenient or safe.

### 8.a

- i
  - euid=0
  - ruid=20716
- ii
  - euid=20716
  - ruid=20716

### 8.b

We might want to jump between permissions during the execution, and to do that we need to start with the highest one possible. When the binary is done with one permission, it will call #setuid to downgrade its' privileges, b/c it doesn't need that much permission anymore. After execution is done, original permission is restored.

## Conclusion

Picking a proper authentication system is just half the battle. Analysing the environment and adjusting the security with respect to the platform and spending time educating the user is as important as chosing a secure authentication system. To high of a security level might result in users *cheating* by writing his/her password down or leaving their keycard in wide open. To low might result in intruders getting in way to easy.