# Project: More Singly Linked Lists in C

This repository contains C programs that demonstrate various operations on singly linked lists, including printing, counting nodes, adding and deleting nodes, and more. The programs are part of the "More Singly Linked Lists" project.

## Table of Contents

1. [Print List](#1-print-list)
2. [List Length](#2-list-length)
3. [Add Node at the Beginning](#3-add-node-at-the-beginning)
4. [Add Node at the End](#4-add-node-at-the-end)
5. [Free List](#5-free-list)
6. [Free List and Set Head to NULL](#6-free-list-and-set-head-to-null)
7. [Delete the Head Node](#7-delete-the-head-node)
8. [Get Node at Index](#8-get-node-at-index)
9. [Sum All Nodes](#9-sum-all-nodes)
10. [Insert Node at Index](#10-insert-node-at-index)
11. [Delete Node at Index](#11-delete-node-at-index)
12. [Reverse the List](#12-reverse-the-list)
13. [Print List Safely](#13-print-list-safely)

## 1. Print List

- Function: `print_listint`
- Description: Prints all the elements of a listint_t list.
- Prototype: `size_t print_listint(const listint_t *h)`
- Returns: The number of nodes.

## 2. List Length

- Function: `listint_len`
- Description: Returns the number of elements in a linked listint_t list.
- Prototype: `size_t listint_len(const listint_t *h)`

## 3. Add Node at the Beginning

- Function: `add_nodeint`
- Description: Adds a new node at the beginning of a listint_t list.
- Prototype: `listint_t *add_nodeint(listint_t **head, const int n)`
- Returns: The address of the new element or NULL if it failed.

## 4. Add Node at the End

- Function: `add_nodeint_end`
- Description: Adds a new node at the end of a listint_t list.
- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n)`
- Returns: The address of the new element or NULL if it failed.

## 5. Free List

- Function: `free_listint`
- Description: Frees a listint_t list.
- Prototype: `void free_listint(listint_t *head)`

## 6. Free List and Set Head to NULL

- Function: `free_listint2`
- Description: Frees a listint_t list and sets the head to NULL.
- Prototype: `void free_listint2(listint_t **head)`

## 7. Delete the Head Node

- Function: `pop_listint`
- Description: Deletes the head node of a listint_t linked list and returns the head node's data.
- Prototype: `int pop_listint(listint_t **head)`

## 8. Get Node at Index

- Function: `get_nodeint_at_index`
- Description: Returns the nth node of a listint_t linked list.
- Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`
- Returns: The address of the nth node or NULL if it does not exist.

## 9. Sum All Nodes

- Function: `sum_listint`
- Description: Returns the sum of all the data (n) of a listint_t linked list.
- Prototype: `int sum_listint(listint_t *head)`

## 10. Insert Node at Index

- Function: `insert_nodeint_at_index`
- Description: Inserts a new node at a given position in a listint_t list.
- Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)`
- Returns: The address of the new node or NULL if it failed.

## 11. Delete Node at Index

- Function: `delete_nodeint_at_index`
- Description: Deletes the node at a given index in a listint_t list.
- Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index)`
- Returns: 1 if it succeeded, -1 if it failed.

## 12. Reverse the List

- Function: `reverse_listint`
- Description: Reverses a listint_t linked list.
- Prototype: `listint_t *reverse_listint(listint_t **head)`
- Returns: A pointer to the first node of the reversed list.

## 13. Print List Safely

- Function: `print_listint_safe`
- Description: Safely prints a listint_t linked list to avoid infinite loops.
- Prototype: `size_t print_list