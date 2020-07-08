#include "hash_table.h"

Hash_Table_Ptr create_hash_table(int size)
{
  Hash_Table_Ptr hash_table = malloc(sizeof(Hash_Table));
  hash_table->size = size;
  hash_table->items = malloc(sizeof(Hash_Item_Ptr) * size);
  return hash_table;
}

Hash_Item_Ptr create_hash_item(int key, int value)
{
  Hash_Item_Ptr hash_item = malloc(sizeof(Hash_Item));
  hash_item->key = key;
  hash_item->value = value;
  return hash_item;
}

int hash_function(int key, int size)
{
  return key % size;
}