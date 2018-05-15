// Open addressing(Array only)
// stored in array
/*insertion*/
    hv = hash(key%)%H;  // ..>hashsize
    while(hash[hv]!=NULL){
        hv=(hv+1)%H;
    }hashTab[hv]=strdup(key);
/*search:   (membership) IsMember*/
 hv = hash(key)%H;
while(hashTab[hv]!=NULL){
    if(strcmp(key,hashTab[hv])==0) return FOUND;
    hv=(hv+1)%H;
}return NotFound;
/*缺點:
-Collision機率較linklist高
-有可能有clustering effect (一些不同Key撞在一起)
-可能overflow table被填滿(當loading factor 趨近於1 performance 糟糕) better loding factor : 0.5 
-不supprot delete data (因為可能造成search fail)

優點:
-簡單明確
-事先知道array大小
*/