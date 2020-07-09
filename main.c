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

  return 0;
}