//
//  ViewController.swift
//  FilterBar
//
//  Created by Panayiotis on 31/08/2017.
//  Copyright © 2017 netinfo.netinfoExtensions. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet var filterBar: CHFilterBar!
    
    var item = 0

    @IBAction func add(_ sender: Any) {
        
        item += 1
        let block1 = CHFilterBlock(title: "Test" + item.description)
        block1.backgroundColor = UIColor.black
        filterBar.add(block: block1)

   
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        let block1 = CHFilterBlock(title: "One")
        block1.backgroundColor = UIColor.red
        filterBar.add(block: block1)
        
        let block2 = CHFilterBlock(title: "Two")
        block2.backgroundColor = UIColor.blue
        filterBar.add(block: block2)
        
        let block3 = CHFilterBlock(title: "Three")
        block3.backgroundColor = UIColor.green
        filterBar.add(block: block3)
    }

}

