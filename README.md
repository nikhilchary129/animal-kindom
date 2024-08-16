




## *Animal Kingdom: Prey and Predator*

**Time limit per test:** 2 seconds  
**Memory limit per test:** 256 megabytes

There are 100 rooms arranged in a row and 99 doors between them; the i-th door connects rooms i and i+1. Each door can be either locked or unlocked. Initially, all doors are unlocked.

You know that:

- The Prey is in some room from the segment `[l, r]`
- The Predator is in some room from the segment `[L, R]`
- The Prey and the Predator are in different rooms.

To ensure the Prey's safety, you need to lock some doors so that the Predator cannot reach the Prey. Your task is to determine the smallest number of doors you need to lock to ensure that the Predator cannot meet the Prey, regardless of their starting positions inside the given segments.

### Input

The first line contains a single integer `t` (1 ≤ t ≤ 10^4) — the number of test cases.

For each test case:

- The first line contains two integers `l` and `r` (1 ≤ l < r ≤ 100) — the bounds of the segment of rooms where the Prey is located.
- The second line contains two integers `L` and `R` (1 ≤ L < R ≤ 100) — the bounds of the segment of rooms where the Predator is located.

### Output

For each test case, print a single integer — the smallest number of doors you have to lock so that the Predator and the Prey cannot meet, regardless of their starting positions inside the given segments.

### Example

**Input**
```
4
1 2
3 4
2 5
2 5
3 7
6 7
4 5
2 8

```

**Output**
```
1
3
2
3

```

**Note**

- In the first test case, it is sufficient to lock the door between rooms 2
 and 3
.

- In the second test case, the following doors have to be locked: (2,3)
, (3,4)
, (4,5)
.

- In the third test case, the following doors have to be locked: (5,6)
 and (6,7)

.

**Algorithim**
>brute force
 >implementation
