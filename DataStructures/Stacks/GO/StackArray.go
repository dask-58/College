package main

import "fmt"

type Stack struct{
	arr []int
	top int
}

func NewStack() *Stack{
	return &Stack{
		arr: make([]int, 0),
		top: -1,
	}
}

func (s *Stack) Push(value int){
	s.top++
	s.arr = append(s.arr, value)
	fmt.Println()
	fmt.Printf("%d pushed into the stack\n", value)
}

func (s *Stack) Pop() int{
	if s.top == -1 {
		fmt.Println("Stack is empty. Cannot pop.")
		return -1
	}
	temp := s.arr[s.top]
	s.top--
	fmt.Println()
	fmt.Printf("%d popped from the stack\n", temp)
	return temp
}

func (s *Stack) TopElement() int{
	if s.top == -1 {
		fmt.Println("Stack is empty")
		return -1
	}
	return s.arr[s.top]
}

func (s *Stack) Size() int{
	return s.top + 1
}

func (s *Stack) Display(){
	if s.top == -1 {
		fmt.Println("Stack is Empty")
		return
	}
	fmt.Println()
	fmt.Println("Stack elements:")
	for i := s.top; i >= 0; i-- {
		fmt.Printf("|%d|\n", s.arr[i])
	}
	fmt.Println()
}

func main(){
	mystack := NewStack()
	var choice, value int

	for{
		fmt.Print("\n1. Push\n2. Pop\n3. Top Element\n4. Size\n5. Display\n6. Exit\nEnter your choice: ")
		fmt.Scan(&choice)

		switch choice{
			case 1:
				fmt.Print("Enter value to push: ")
				fmt.Scan(&value)
				mystack.Push(value)
			case 2:
				mystack.Pop()
			case 3:
				fmt.Printf("Top Element: %d\n", mystack.TopElement())
			case 4:
				fmt.Printf("Size: %d\n", mystack.Size())
			case 5:
				mystack.Display()
			case 6:
				fmt.Println("Exiting program...")
				fmt.Println("Program exited.")
				return
			default:
				fmt.Println("Invalid choice. Try again.")
		}
	}
}
