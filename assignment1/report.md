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

- good stuff
  - hacker might get an old password
  - it can avoid the replay attack

- bad stuff
  - the user might write the password down
  - the user might pick an easy password to be able to remember it

### 3a

- password
  - database with hashed passwords and a front end with a login form
- key card
  - a key card reader and a database with tokens based on the information on the card that the user will end up with.
- biometrics
  - we need to enroll the user into the system using for the example a fingerprint reader.

### 3b

- User knows: password, pin code
  - pros
    - Easy and cheap to implement.
    - User can pick its' own password and change it easily.
    - Can be provided via electronics from a distance, i.e email.
  - cons
    - The user might write it down. good for hackers, bad for the system.
    - The electronic media, like the email can be hacked.
    - Stored in a database with or without encryption, which might be accessed by a hacked using some cpu power.
- User has: key card, smart card, regular keys
  - pros
    - You need both the password and the physical token, if a password exists, more layers of security.
    - A hacker can't eavesdropping, like with a regular password.
  - cons
    - You need hardware, which might be expensive.
    - A hacker might get a hold of the key.
    - You need to transport the key to the user, physically - it might get stolen.
- User is: biometrics, fingerprint, eyeball, voice
  - pros
    - Difficult to copy, nothing to eavesdrop.
    - The user don't have to bring anything.
    - Difficult to lose.
  - cons
    - Can't be used by everyone, i.e. disable people.
    - You might lose your biometric (like your eye).
    - Difficult and expensive to implement.
    - Might not be very accurate, missmatching for i.e.

### 3.c

- password
  - we can educate the user about not writing the password down and how to remember and to create rememberable passwords.
  - use better hashing algorithms, like blow fish instead of md5
  - use a unique salt for every user to prevent rainbow table-attacks
- key cards
  - send the keycard in a safe way (rec post in sweden) or force the user to pick it up at "the office" by him/her self.
  - add more layers of authentication, like a password for i.e
- biometric
  - use a system which doesn't require the user to touch everyting, like a voice authentication system.
  - use a backup authentication system, like a really complicated password to prevent you losing you arm or an eye.
  - use an biometric authentication that has been tested and proven to work

### 4.a

- keycard
  - need access to a physical location, which makes using a keycard easier than password and username
  - a lot of users, which makes keycard cheap to implement

### 4.b

- biometric
  - we need high security
  - nothing to be stolen <==> lower risk of intrusion
  - not that many users, which makes a biometric authentication easier and cheaper to implement

### 4.c

- keycard
  - same as university

### 4.d

- password
  - low risk of intrusion
  - easy to remember and implement

### 5.

- to ensure that we as a user don't pass sensitive information to the wrong system

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

## Code
