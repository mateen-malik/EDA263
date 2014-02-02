# Assignment 1

- Group 27
  - Linus Oleander, 8806134873
  - Bill :)

## Introduction

## Answers

### 1.

Password ageing is when a password gets marked everytime a successfull login has occured. In our case the age parameter is being incremented for the newly logined user.

This is the code we're using in our implementation.

```
pwd->pwage++;
```

### 2.

- good stuff
  - hacker might get an old password

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

- knows
  - password, pin code
    - pros
      - easy to implement
      - no hardware
      - easy to expire
      - hidden, if the user don't write it down
      - cheep to implement
        - user can pick its' own password
        - generate password, no cpu power
      - can be provided via electronics from a distance, i.e email
    - cons
      - the user might write it down. good for hackers, bad for the system
      - the electronic media, like the email can be hacked
      - stored in a database with or without encryption, which might be accessed by a hacked using some cpu power.
  - key card, smart card, regular keys
    - pros
      - you need both the password and the physical token, if a password exist
      - a hacker can't eavesdropping, like with a regular password
    - cons
      - more difficult to expire
      - you need hardware, which might be expensive
      - a hacker might get a hold of the key
      - you need to transport the key to the user, physically - it might get stolen
  - biometrics, fingerprint, eyeball, voice
    - pros
      - difficult to copy, nothing to eavesdrop
      - the user don't have to bring anything
      - difficult to lose
    - cons
      - can't be used by everyone
      - not very hygienic (fingerprint reading)
      - you might lose your biometric (like your eye)
      - difficult and expensive to implement

### 3.c

### 4.a

### 4.b

### 4.c

### 4.d

### 5.

### 6.a

### 6.b

### 7.

### 8.a

### 8.b

## Conclusion

## Code