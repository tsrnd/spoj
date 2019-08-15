//
//  POST.swift
//  
//
//  Created by Bien Le Q. on 8/12/19.
//

import Foundation

var num1: [Character] = []
var num2: [Character] = []

while let line = readLine() {
    let arr = line.split(separator: " ")
    var num1: [Character] = arr[0].reversed()
    var num2: [Character] = arr[1].reversed()
    if num1.count > num2.count {
        let tmp = num1
        num1 = num2
        num2 = tmp
    }
    var carry = 0
    var result = ""
    for i in 0..<num1.count {
        let sum = Int(String(num1[i]))! + Int(String(num2[i]))! + carry
        result += String(sum % 10)
        carry = sum / 10
    }
    for i in num1.count..<num2.count {
        let sum = Int(String(num2[i]))! + carry
        result += String(sum % 10)
        carry = sum / 10
    }

    if carry > 0 {
        result += String(carry)
    }
    print(String(result.reversed()))
}
