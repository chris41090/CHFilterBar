//
//  FilterBlockCollectionViewCell.swift
//  FilterBar
//
//  Created by Panayiotis on 31/08/2017.
//  Copyright © 2017 netinfo.netinfoExtensions. All rights reserved.
//

import UIKit

protocol CHFilterBlockCollectionViewCellDelegate:class {
    func filterBlockCollectionViewCell(cell:CHFilterBlockCollectionViewCell,didTapClose filterBlock:CHFilterBlock)
}

class CHFilterBlockCollectionViewCell: UICollectionViewCell {
    
    static let identiefier = "CHFilterBlockCollectionViewCell"
    
    
    weak var delegate:CHFilterBlockCollectionViewCellDelegate?

    @IBOutlet var container: UIView!
    @IBOutlet var label: UILabel!
    @IBOutlet var button: UIButton!
    @IBOutlet var closeButton: UIButton!
    @IBOutlet weak var closeImageView: UIImageView!
    
    @IBOutlet var containerTopConstraint: NSLayoutConstraint!
    @IBOutlet var containerBottomConstraint: NSLayoutConstraint!
    @IBOutlet var containerLeftConstraint: NSLayoutConstraint!
    @IBOutlet var containerRightConstraint: NSLayoutConstraint!
    
    @IBOutlet var labelRightConstraint: NSLayoutConstraint!
    @IBOutlet var labelLeftConstraint: NSLayoutConstraint!
    @IBOutlet var labalTopConstraint: NSLayoutConstraint!
    @IBOutlet var labelBottomConstraint: NSLayoutConstraint!
    
    
    
    
    var filterBlock:CHFilterBlock! {
        didSet {
            
            closeImageView.image = filterBlock.closeButtonImage ?? CHFilterBarConstants.shared.closeButtonImage
            
            button.isUserInteractionEnabled = filterBlock.isUserInteractionEnabled
            
            container.backgroundColor = filterBlock.backgroundColor
            container.clipsToBounds = true
            container.layer.cornerRadius =  filterBlock.cornerRadius
            
            containerRightConstraint.constant = filterBlock.containerPadding.right
            containerLeftConstraint.constant = filterBlock.containerPadding.left
            containerTopConstraint.constant = filterBlock.containerPadding.top
            containerBottomConstraint.constant = filterBlock.containerPadding.bottom
            
            label.text = filterBlock.title
            label.font = filterBlock.font
            label.textColor = filterBlock.textColor
            
            labelRightConstraint.constant = filterBlock.labelPadding.right
            labelLeftConstraint.constant = filterBlock.labelPadding.left
            labalTopConstraint.constant = filterBlock.labelPadding.top
            labelBottomConstraint.constant = filterBlock.labelPadding.bottom
            
            layoutIfNeeded()
            
        }
    }

    @IBAction func tap(_ sender: UIButton) {
        filterBlock.tap()
    }
    
    @IBAction func close(_ sender: Any) {
        filterBlock.closeTap()
        delegate?.filterBlockCollectionViewCell(cell: self, didTapClose: filterBlock)
    }


}
