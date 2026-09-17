# Learned Index in C++

An experimental C++ implementation of learned index structures,
inspired by the paper:

> The Case for Learned Index Structures
> Kraska et al.

## Overview

Traditional indexes such as B-Trees explicitly store information
about the location of keys.

Learned indexes take a different approach: instead of explicitly
storing this information, a model learns the relationship between
keys and their positions in a sorted dataset.

This project investigates whether learned models can efficiently
predict key positions and how their performance compares with
traditional search structures.

## Implemented Structures

- Binary Search
- B-Tree
- Linear Regression Learned Index
- Polynomial Learned Index
- Hierarchical Learned Index
- Neural Network Learned Index

## Evaluation

The implementations will be evaluated based on:

- Search latency
- Construction time
- Memory usage
- Prediction error
- Dataset size
- Data distribution

## Reference

Kraska, T., Beutel, A., Chi, E. H., Dean, J., & Polyzotis, N.

"The Case for Learned Index Structures."
Proceedings of the 2018 International Conference on Management
of Data (SIGMOD), 2018.
