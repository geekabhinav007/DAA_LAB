# General DAA Questions

## Diffference between Algorithm and Program?

An algorithm is a step by step procedure to solve a problem. It is a finite set of instructions to solve a problem. It is a set of rules to be followed in calculations or other problem-solving operations, especially by a computer.

A program is a set of instructions written in a programming language to perform a specific task. It is a collection of instructions that perform a specific task when executed by a computer.

## Priori Analysis vs Posteriori Analysis

Priori Analysis is a method of estimating the time complexity of an algorithm before the algorithm is implemented. It is based on the assumption that the algorithm is implemented in the best possible way.

Posteriori Analysis is a method of estimating the time complexity of an algorithm after the algorithm is implemented. It is based on the actual implementation of the algorithm.

## Characteristics of an Algorithm

An algorithm should be:

- **Unambiguous or Definiteness**: The algorithm should be clear and unambiguous. It should not be vague or ambiguous.

- **Input**: The algorithm should have 0 or more well-defined inputs.

- **Output**: The algorithm should have 1 or more well-defined outputs, and should match the desired output.

- **Finiteness**: The algorithm should terminate after a finite number of steps.

- **Effectiveness**: The algorithm should be effective in terms of time and space.

## Time Complexity of an Algorithm having While Loop, Do-While Loop and Conditional Statements

- **While Loop**: The time complexity of the following while loop is O(n).

```java
int i = 0;
while(i < n){
    // do something
    i++;
}
```

- **Do-While Loop**: The time complexity of the following do-while loop is O(n).

```java
int i = 0;
do{
    // do something
    i++;
}while(i < n);
```

- **Conditional Statements**: The time complexity of the following conditional statement is O(1).

```java
if(i < n){
    // do something
}
```

## Types of Time Functions

- **Constant Time**: The time complexity of the following code snippet is O(1).

```java
int i = 0;
while(i < 100){
    // do something
    i++;
}
```

- **Linear Time**: The time complexity of the following code snippet is O(n).

```java
int i = 0;
while(i < n){
    // do something
    i++;
}
```

- **Quadratic Time and Cubic Time**: The time complexity of the following code snippet is O(n<sup>2</sup>) or O(n<sup>3</sup>) e.t.c.

```java
for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        // do something
    }
}
```

```java
for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        for(int k = 0; k<n; k++){
            // do something
        }
    }
}
```

- **Logarithmic Time**: The time complexity of the following code snippet is O(log n) or O(log<sub>2</sub>(n)).

```java

int i = 0;
while(i < n){
    // do something
    i = i * 2;
}
```

- **Exponential Time**: The time complexity of the following code snippet is O(2<sup>n</sup>) or O(3<sup>n</sup>) or O(n<sup>n</sup>)  .

```java
for(int i = 0; i<2<sup>n</sup>; i++){
    // do something
}
```

> Note: 1 < log(n) < $\sqrt{n}$ < n < nlog(n) < n<sup>2</sup> < n<sup>3</sup> < 2<sup>n</sup> < 3<sup>n</sup> < n<sup>n</sup>

![img](https://adrianmejia.com/images/time-complexity-examples.png)

## properties of Asymptotic Notations

- **Constant Factor**: The constant factor is ignored in asymptotic analysis.

- **Lower Order Terms**: The lower order terms are ignored in asymptotic analysis.

- **Higher Order Terms**: The higher order terms are considered in asymptotic analysis.

## Best Case, Worst Case and Average Case Analysis

- **Best Case**: The best case analysis is the analysis of the best possible input to an algorithm.

- **Worst Case**: The worst case analysis is the analysis of the worst possible input to an algorithm.

- **Average Case**: The average case analysis is the analysis of the average input to an algorithm.

> Average case analysis is not always possible. It is possible only when the probability of occurrence of each input is known.

Average Case = sum of all possible case time complexity / number of cases
