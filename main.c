#include "hash_table.h"

int main(void);
int main(void)
{
  Hash_Table_Ptr table = create_hash_table(5);

  printf("\nInserting ...\n");
  insert("34", "10", table);
  insert("Name", "naveen", table);
  insert("Age", "19", table);
  insert("School", "ZPHS Lingampally", table);
  insert("College", "GIOE EastMarredpally", table);
  insert("Office", "Thoughtworks", table);

  printf("\nHash Table : \n");
  display_hash_table(table);

  printf("\nSearching ...\n");
  display_hash_item(search("34", table));
  printf("\n");
  display_hash_item(search("3", table));
  printf("\n");

  printf("\nDeleting ...\n");
  display_hash_item(delete ("34", table));
  display_hash_item(delete ("3", table));

  printf("\nHash Table : \n");
  display_hash_table(table);

  return 0;
}