// Samanta Gimenez Fluture, 2022-03-30, Review

/*
Pointers

int var;
var = 10;
int *pvar;
pvar = &var;
*pvar = 25;
var = 35;
cout << *pvar << " - " << var << endl;
35 - 35

var
- ---------------- -
|  10 -> 25 -> 35  | 2000
- ---------------- -
4 bytes

pvar
- ---------------- -
|  2000            | 2008
- ---------------- -
4 bytes

> why to use pointers?
> because even if you have local variables inside functions,
> with pointers you can access from anywhere,
> because you're accessing the address of it

*/

