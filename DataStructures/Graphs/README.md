### Algo for BFS:

- Initialization: Enqueue the starting node into a queue and mark it as visited.
- Exploration: While the queue is not empty:
  Dequeue a node from the queue and visit it (e.g., print its value).
  For each unvisited neighbor of the dequeued node:
  Enqueue the neighbor into the queue.
  Mark the neighbor as visited.
- Termination: Repeat step 2 until the queue is empty.
