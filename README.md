# Learn C-Lang
### Author [Dickson](www.github.com/deeksonparlma)
## Structure
## preprocessor directives
```
#include<x.h>
```
* examples of preprocessor directives

 ``
 <stdio.h> , <math.h> , <string.h>
 ``

## int main()
This is an entry point to any C program

```
int main()
{
 //statements
}
```

## Variables
#### Declaration
  ```
  Datatype Name;
  ```
#### Initialization
  ```
  Datatype Name = Value;
  ```

#### Constants
### Declaration
#### local constants
```
const Datatype Name= Value;
```
#### Global constants
```
#define Name Value
```

* Global constants have no semi-colon at the end of the line

## Arrays
#### Declaration
```
Datatype Name[size];
```
#### Initialization
```
Datatype Name[size] = {Value,value,Value};
```
## Functions
#### Declaration
```
Datatype Name(arg1,arg2);
```
* usually done below preprocessor directives and before int main() Function

##### Initialization
```
Datatype Name(arg1,arg2){
  //statements
}
```

## Output data
```
printf("");
```

## Collect Data and assign a variable
```
scanf("%d",&variable);
```

## Loops
### while
```
while(condition)
{
//statements
  increment++;
}
```

### Do...while

```
do
{
  //statements
}
while(condition)
```
executes the statements at least once before the condition is checked

### For loop
```
for (i=0; i<ArraySize; i++)
{
 //statements
}
```

* Break - exits loop completely
* Continue - Skips statements for current iteration before proceeding to the next iteration
