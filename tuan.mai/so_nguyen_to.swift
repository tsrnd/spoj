//
//  main.swift
//  demo
//
//  Created by TuanMaiA. on 8/5/19.
//  Copyright © 2019 TuanMaiA. All rights reserved.
//

import Foundation

var a: Int?
var b: Int?
while let line = readLine() {
    if let num = Int(line.split(separator: " ")[0]) {
        a = num
    }
    if let num = Int(line.split(separator: " ")[1]) {
        b = num
    }
    break
}

if let a = a, let b = b, b >= 2 {
    for i in a...b {
        print("i = \(i)")
        var isNT = true
        if i == 2 {
            print("2")
            continue
        }
        if i == 3 {
            print("3")
            continue
        }
        if i % 2 == 0 {
            continue
        }
        let sqrti = Int(sqrt(Double(i)))
        if sqrti < 2 {
            continue
        }
        for j in 2...sqrti {
            if i % j == 0 {
                isNT = false
                break
            }
        }
        if isNT {
            print(i)
        }
    }
}

