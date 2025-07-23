# 📘 C++ Data Structures – Complete Study Guide (with Short Definitions & Use Cases)

## ➕ Add, ➖ Remove, and ✏️ Update in Common Data Structures

### Arrays

* **Add**: Assign value at specific index (e.g., `arr[2] = 5;`)
* **Remove**: No direct remove (overwrite with 0 or shift manually)
* **Update**: Reassign at index (e.g., `arr[1] = 99;`)

### Strings

* **Add**: `str += "text"` or `str.insert(pos, "text")`
* **Remove**: `str.erase(pos, len)`
* **Update**: `str.replace(pos, len, "new")`

### Structs

* **Add**: Add values when creating struct or pushing into array/vector
* **Remove**: If inside array/vector, use loop or `erase` if in vector
* **Update**: `student.age = 20;`

### Classes & Objects

* **Add**: Add attributes/methods in class; create object with constructor
* **Remove**: Delete object with `delete` (for `new` allocations)
* **Update**: Use setters or direct access (`obj.var = newVal;` if public)

### Linked Lists

* **Add**: Insert node at head/tail or specific position
* **Remove**: Traverse, unlink and delete target node
* **Update**: `node->data = newVal;`

### Stacks

* **Add**: `push(val)`
* **Remove**: `pop()` (removes top)
* **Update**: No direct update; pop and reinsert if needed

### Queues

* **Add**: `push(val)` (adds to rear)
* **Remove**: `pop()` (removes front)
* **Update**: Not directly supported; use temporary storage

### Vectors

* **Add**: `push_back(val)`, `insert(pos, val)`
* **Remove**: `pop_back()`, `erase(iterator)`
* **Update**: `v[i] = newVal;`

### Maps

* **Add**: `map[key] = val;`
* **Remove**: `erase(key)`
* **Update**: `map[key] = newVal;`

### Sets

* **Add**: `insert(val)`
* **Remove**: `erase(val)`
* **Update**: Remove old, insert new (since direct edit isn’t possible)

### Priority Queues

* **Add**: `push(val)`
* **Remove**: `pop()` (removes top priority)
* **Update**: No direct; remove all, update, rebuild

### Deques

* **Add**: `push_front(val)`, `push_back(val)`
* **Remove**: `pop_front()`, `pop_back()`
* **Update**: `dq[i] = newVal;`
