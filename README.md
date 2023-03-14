# Soal 1
Ethical Hacking 2023
---
## Deskripsi
Help Bafer Remember his favorite number!
Looks like Bafer use his favorite number as Phone's password. But He forget the password.

Password generated randomly using random number generator.
There is 2 vulnerability
- srand(time(NULL))
- printf(buff)

For training, we use guessing random number generator game to findout what is the random number generated. By doing this, It can help us scripting with looks for an example using pwntools. But learning about srand(time(NULL)) also can be helpfull to understand about predicted random number.

---
## Anggota
- Aldi - 1906350635
- Ghifari Zakaria Ramadhan - 1906350591
- Mikhael Deo Barli - 1906350572	
---
## Compiling
```
gcc chall.c -o chall
```
---
## Deployment
- Install docker engine>=19.03.12 and docker-compose>=1.26.2.
- Run the container using:
    ```
    docker-compose up --build --detach
    ```
