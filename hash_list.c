#include "hash_table.h"

Hash_Item_Ptr create_hash_item(int key, int value)
{
  Hash_Item_Ptr hash_item = malloc(sizeof(Hash_Item));
  hash_item->key = key;
  hash_item->value = value;
  hash_item->next = NULL;
  return hash_item;
}

Hash_List_Ptr create_hash_list()
{
  Hash_List_Ptr hash_list = malloc(sizeof(Hash_List));
  hash_list->head = NULL;
  hash_list->last = NULL;
  hash_list->count = 0;
  return hash_list;
}

void add_to_hash_list(int key, int value, Hash_List_Ptr hash_list)
{
  Hash_Item_Ptr hash_item = create_hash_item(key, value);
  Hash_Item_Ptr *ptr_to_set = &hash_list->head;
  if (hash_list->head != NULL)
  {
    ptr_to_set = &hash_list->last->next;
  }
  (*ptr_to_set) = hash_item;
  hash_list->last = hash_item;
  hash_list->count++;
}

void display_hash_item(Hash_Item_Ptr item)
{
  printf("%2d=%2d ", item->key, item->value);
}

void display_hash_list(Hash_List_Ptr hash_list)
{
  if (hash_list != NULL)
  {
    Hash_Item_Ptr p_walk = hash_list->head;
    while (p_walk)
    {
      display_hash_item(p_walk);
      p_walk = p_walk->next;
    }
  }
  printf("\n");
}