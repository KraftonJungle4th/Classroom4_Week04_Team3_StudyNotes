#include "rbtree.h"

#include <stdlib.h>

rbtree *new_rbtree(void) {
  rbtree *p = (rbtree *)calloc(1, sizeof(rbtree));
  // TODO: initialize struct if needed
  p->root = NULL;
  p->nil = NULL;
  // 포인터는 화살표로 접근
  // 일반변수는 .으로 접근
  return p;
}

void delete_rbtree(rbtree *t) {
  // TODO: reclaim the tree nodes's memory
  free(t);
}

node_t *rbtree_insert(rbtree *t, const key_t key) {
  // TODO: implement insert

  // 새로운 node_t인 new_node 생성
  // new_node에 key랑 color랑 할당
  // Rb트리의 루트에 new_ node의 주소를 할당한다
  node_t new_node;
  new_node.key = key;
  new_node.parent = NULL;
  new_node.left = NULL;
  new_node.right = NULL;
  t->root = &new_node;
  return t->root; 
}

node_t *rbtree_find(const rbtree *t, const key_t key) {
  // TODO: implement find
  return t->root;
}

node_t *rbtree_min(const rbtree *t) {
  // TODO: implement find
  return t->root;
}

node_t *rbtree_max(const rbtree *t) {
  // TODO: implement find
  return t->root;
}

int rbtree_erase(rbtree *t, node_t *p) {
  // TODO: implement erase
  return 0;
}

int rbtree_to_array(const rbtree *t, key_t *arr, const size_t n) {
  // TODO: implement to_array
  return 0;
}