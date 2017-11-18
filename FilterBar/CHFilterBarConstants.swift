//
//  FilterBarConstant.swift
//  FilterBar
//
//  Created by Christos Chadjikyriacou on 31/08/2017.
//  Copyright © 2017 netinfo.netinfoExtensions. All rights reserved.
//

import UIKit


class CHFilterBarConstants {
    
    static let shared = CHFilterBarConstants()
    let closeButtonImage:UIImage? = UIImage(named: "close")
    let blockSpacing:CGFloat = 0
    let backgroundColor:UIColor = UIColor(red: 82/255, green: 147/255, blue: 206/255, alpha: 1)
    let cornerRadius:CGFloat = 4
    let font = UIFont.systemFont(ofSize: 13)
    let labelPadding = UIEdgeInsetsMake(2, 2, 2, 2)
    let containerPadding = UIEdgeInsetsMake(2, 2, 2, 2)
    let textColor = UIColor.white
    let isUserInteractionEnabled = true
}
