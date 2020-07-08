#ifndef __HASH_TABLE_H__
#define __HASH_TABLE_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct hash_item
{
  int key;
  int value;
} Hash_Item;

typedef struct hash_table
{
  int size;
  Hash_Item **items;
} Hash_Table;

typedef Hash_Item *Hash_Item_Ptr;
typedef Hash_Table *Hash_Table_Ptr;

Hash_Table_Ptr create_hash_table(int size);
Hash_Item_Ptr create_hash_item(int key, int value);

int hash_function(int key, int size);

void insert(int key, int value, Hash_Table_Ptr table);


#endif