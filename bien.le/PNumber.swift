//
//  PNumber.swift
//  
//
//  Created by Bien Le Q. on 8/13/19.
//

import Foundation

var a: Int?
var b: Int?
var ans: [Bool] = []

while let line = readLine() {
    let arr = line.split(separator: " ")
    let num1 = min(Int(arr[0])!, Int(arr[1])!)
    let num2 = max(Int(arr[0])!, Int(arr[1])!)

    if num2 < 10 {
        for i in num1...num2 {
            if i == 2 || i == 3 || i == 5 || i == 7 {
                print(i)
            }
        }
    } else {
        ans = [Bool](repeating: true, count: num2 - num1 + 1)
        for i in 2...num2 {
            var j = max(i * i, (num1 + (i - 1)) / i * i)
            while j <= num2 {
                ans[j - num1] = false
                j += i
            }
        }
        let ind = max(num1, 2)
        for i in ind...num2 {
            if ans[i - num1] {
                print(i)
            }
        }
    }
}
