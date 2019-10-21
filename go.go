package main
import "fmt"
import "os"
import "time"
import "strconv"

func main() {

	before := time.Now()

	f, err := os.Create("output.txt")
	_ = err

	for x := 1; x < 100001; x++ {
		fmt.Println(x)
		l, err := f.WriteString(strconv.Itoa(x) + "\n")
		_ = l
		_ = err
	}

	f.Close()

	after := time.Now()

	fmt.Println(after.Sub(before))
}