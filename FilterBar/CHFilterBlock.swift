//
//  FilterBlock.swift
//  FilterBar
//
//  Created by Panayiotis on 31/08/2017.
//  Copyright © 2017 netinfo.netinfoExtensions. All rights reserved.
//

import UIKit


typealias CHFilterBlockAction = ((_ block:CHFilterBlock)->Void)?

class CHFilterBlock:NSObject {
    
    
    weak var filterBar:CHFilterBar?
    
    var id:Any?
    var title:String
    var backgroundColor:UIColor = CHFilterBarConstants.shared.backgroundColor

    var action:CHFilterBlockAction
    var close:CHFilterBlockAction
    var cornerRadius:CGFloat = CHFilterBarConstants.shared.cornerRadius

    var font = CHFilterBarConstants.shared.font
    var labelPadding = CHFilterBarConstants.shared.labelPadding
    var containerPadding = CHFilterBarConstants.shared.containerPadding
    var textColor = CHFilterBarConstants.shared.textColor
    var closeButtonImage = CHFilterBarConstants.shared.closeButtonImage
    var isUserInteractionEnabled = true
    
    private func reload() {
        filterBar?.reload()
    }
    
    func tap() {
        action?(self)
    }
    
    func closeTap() {
        close?(self)
    }
    
    
    private var shouldCallReload = false
    
    init(id:Any? = nil,title:String,action:CHFilterBlockAction = nil,close:CHFilterBlockAction = nil) {
        self.id = id
        self.title = title
        self.close = close
        self.action = action
        
        super.init()
        
        shouldCallReload = true
    }
    
    
}
