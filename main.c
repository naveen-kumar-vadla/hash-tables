#include "hash_table.h"

void display_hash_item(Hash_Item_Ptr item);
void display_hash_item(Hash_Item_Ptr item)
{
  if (item)
    printf("Key = %2d , Value = %2d\n", item->key, item->value);
  else
    printf("Key = -- , Value = --\n");
}

void display_hash_table(Hash_Table_Ptr table);
void display_hash_table(Hash_Table_Ptr table)
{
  for (int i = 0; i < table->size; i++)
  {
    printf("Index = %2d , ", i);
    display_hash_item(table->items[i]);
  }
}

int main(void);
int main(void)
{
  Hash_Table_Ptr table = create_hash_table(50);

  printf("\nInserting ...\n");
  insert(34, 10, table);
  insert(89, 20, table);
  insert(29, 30, table);
  insert(5, 40, table);
  insert(13, 50, table);

  printf("\nHash Table : \n");
  display_hash_table(table);

  printf("\nSearching ...\n");
  display_hash_item(search(34, table));
  display_hash_item(search(3, table));

  printf("\nDeleting ...\n");
  display_hash_item(delete(34, table));
  display_hash_item(delete(3, table));

  printf("\nHash Table : \n");
  display_hash_table(table);

  return 0;
}