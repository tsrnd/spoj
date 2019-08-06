func parseInt(_ line: String) -> [Int] {
    return line.split(separator: " ").map { Int(String($0))! }
}

func resolve(a: Int, b: Int) {
    print(a + b)
}

func main() {
    let line = readLine()!
    let ints = parseInt(line)
    resolve(a: ints[0], b: ints[1])
}

main()
