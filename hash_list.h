#ifndef __HASH_LIST_H__
#define __HASH_LIST_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char *char_ptr;

typedef struct hash_item
{
  char_ptr key;
  char_ptr value;
  struct hash_item *next;
  struct hash_item *previous;
} Hash_Item;

typedef struct hash_list
{
  Hash_Item *head;
  Hash_Item *last;
  int count;
} Hash_List;

typedef Hash_Item *Hash_Item_Ptr;
typedef Hash_List *Hash_List_Ptr;

Hash_Item_Ptr create_hash_item(char_ptr key, char_ptr value);
Hash_List_Ptr create_hash_list();

Hash_Item_Ptr get_hash_item_of(Hash_List_Ptr list, char_ptr key);
Hash_Item_Ptr remove_from_hash_list(Hash_List_Ptr list, char_ptr key);
void add_to_hash_list(char_ptr key, char_ptr value, Hash_List_Ptr hash_list);

void display_hash_item(Hash_Item_Ptr item);
void display_hash_list(Hash_List_Ptr hash_list);

#endif