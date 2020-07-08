#include "hash_table.h"

void display_hash_item(Hash_Item_Ptr item);
void display_hash_item(Hash_Item_Ptr item)
{
  if (item)
    printf("Key = %d , Value = %d\n", item->key, item->value);
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

  printf("\nHash Table : \n");
  display_hash_table(table);

  return 0;
}