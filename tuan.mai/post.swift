var a: Int?
var b: Int?
while let line = readLine() {
    if let num = Int(line.split(separator: " ")[0]) {
        a = num
    }
    if let num = Int(line.split(separator: " ")[1]) {
        b = num
    }
    print(a! + b!)
}
