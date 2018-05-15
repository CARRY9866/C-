
struct hash_handle{
    struct dnode *hashTab;
    u_int maxHash;
    char *keyBuf;
    char *keyBufptr;
    u_int maxkeyBufLen;
}//使用linked list sturcture
//假設單一keyBuf array of linked list
//所有的malloc()都要有一個pointer來記住他的位址，因為將來要free()，做好memory 管理，避免memory leak
h_find()
h_insert()
h_delete()

h_insert(struct hash_handle *hdb, char *key)