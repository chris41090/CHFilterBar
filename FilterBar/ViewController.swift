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
        let block1 = CHFilterBlock(title: "test " + item.description)
        filterBar.add(block: block1)
        
        filterBar.blocks.first?.title = "Xa xa xa"
   
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        
        let block1 = CHFilterBlock(title: "Elephan")
        

        let block2 = CHFilterBlock(title: "Tiger")
        let block3 = CHFilterBlock(title: "Crocodile")
        let block4 = CHFilterBlock(title: "Diomedea irrorata")
        
        let block5 = CHFilterBlock(title: "cat")
        
        
        filterBar.add(block: block1)
        filterBar.add(block: block2)
        filterBar.add(block: block3)
        filterBar.add(block: block4)
        filterBar.add(block: block5)
    }
}

