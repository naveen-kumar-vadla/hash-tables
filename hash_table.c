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

void insert(int key, int value, Hash_Table_Ptr table)
{
  int array_index = hash_function(key, table->size);
  while (table->items[array_index] && table->items[array_index]->key != key)
  {
    array_index++;
    array_index %= table->size;
  }
  table->items[array_index] = create_hash_item(key, value);
}

Hash_Item_Ptr search(int key, Hash_Table_Ptr table)
{
  int array_index = hash_function(key, table->size);
  Hash_Item_Ptr searching_item = NULL;
  int is_found = 0;
  while (table->items[array_index] && !is_found)
  {
    if (table->items[array_index]->key == key)
    {
      searching_item = table->items[array_index];
      is_found = 1;
    }
    array_index++;
    array_index %= table->size;
  }
  return searching_item;
}
