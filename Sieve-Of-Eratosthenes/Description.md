# Sieve Of Eratosthenes
## One of the most efficient way to generate prime numbers
### memset(prime, true, sizeof(prime));
above line first initialises every boolean array element corresponding to every number as true, (considering prime in the beginning)

### for (int p=2; p*p<=n; p++)
### if (prime[p] == true)
### for (int i=p*p; i<=n; i += p)
### prime[i] = false;
These four lines are the building block of our algorithm

#### if checks for prime number and then make all its multiple as false
#### it starts from p*p because till i reaches p, all composite numbers less than p*p are already marked
