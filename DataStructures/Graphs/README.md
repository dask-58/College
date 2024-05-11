### Algo for BFS:

- Initialization: Enqueue the starting node into a queue and mark it as visited.
- Exploration: While the queue is not empty:
  Dequeue a node from the queue and visit it (e.g., print its value).
  For each unvisited neighbor of the dequeued node:
  Enqueue the neighbor into the queue.
  Mark the neighbor as visited.
- Termination: Repeat step 2 until the queue is empty.


Step1: Initially queue and visited arrays are empty.
![image](https://github.com/dask-58/College/assets/140686560/c0a51234-edf4-4953-b1b6-a9b49014b240)
<br></br>
Step2: Push node 0 into queue and mark it visited.
![image](https://github.com/dask-58/College/assets/140686560/f7048474-720f-482d-8454-157f83d3d093)
<br></br>
Step 3: Remove node 0 from the front of queue and visit the unvisited neighbours and push them into queue.
![image](https://github.com/dask-58/College/assets/140686560/849d4a08-d85b-4f4a-a4bc-0a1eb801a37b)
<br></br>
Step 4: Remove node 1 from the front of queue and visit the unvisited neighbours and push them into queue.
![image](https://github.com/dask-58/College/assets/140686560/4b2df01d-8bc6-46f8-bb65-5a05066b0581)
<br></br>
Step 5: Remove node 2 from the front of queue and visit the unvisited neighbours and push them into queue.
![image](https://github.com/dask-58/College/assets/140686560/973a7ca2-6a77-420f-8cb6-7361bcf7cb96)
<br></br>
Step 6: Remove node 3 from the front of queue and visit the unvisited neighbours and push them into queue. 
As we can see that every neighbours of node 3 is visited, so move to the next node that are in the front of the queue.
![image](https://github.com/dask-58/College/assets/140686560/40f96846-b497-42b8-ad9a-5e04ffbe0104)
<br></br>
Steps 7: Remove node 4 from the front of queue and visit the unvisited neighbours and push them into queue. 
As we can see that every neighbours of node 4 are visited, so move to the next node that is in the front of the queue.
![image](https://github.com/dask-58/College/assets/140686560/3479cf36-0186-4e1e-b2a5-b7414c22314e)
<br></br>

Now, Queue becomes empty, So, terminate these process of iteration.


[implementation](https://github.com/dask-58/College/blob/main/DataStructures/Graphs/bfs.c)
