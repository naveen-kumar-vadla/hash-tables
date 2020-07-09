#include "hash_table.h"

int main(void);
int main(void)
{
  Hash_Table_Ptr table = create_hash_table(5);

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
  printf("\n");
  display_hash_item(search(3, table));
  printf("\n");

  printf("\nDeleting ...\n");
  display_hash_item(delete (34, table));
  display_hash_item(delete (3, table));

  printf("\nHash Table : \n");
  display_hash_table(table);

  return 0;
}