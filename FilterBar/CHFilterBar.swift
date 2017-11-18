//
//  FilterBar.swift
//  FilterBar
//
//  Created by Panayiotis on 31/08/2017.
//  Copyright © 2017 netinfo.netinfoExtensions. All rights reserved.
//

import UIKit


protocol CHFilterBarDelegate:class {
    func filterBar(filterBar:CHFilterBar,didCloseBlock block:CHFilterBlock)
    func filterBar(filterBar:CHFilterBar,didAddBlock block:CHFilterBlock)
}

class CHFilterBar: UIView {

    
    weak var delegate:CHFilterBarDelegate?

    override init(frame: CGRect) {
        super.init(frame: frame)
        initialize()
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        initialize()
    }
    
    private func initialize() {
        addSubview(collectionView)
    }
    
    var blockSpacing:CGFloat = CHFilterBarConstants.shared.blockSpacing {
        didSet {
            collectionView.reloadData()
        }
    }
    
    var blocksBackgroundColor:UIColor = CHFilterBarConstants.shared.backgroundColor {
        didSet {
            _ = blocks.map({$0.backgroundColor = blocksBackgroundColor})
            reload()
        }
    }

    var blocksCornerRadius:CGFloat = CHFilterBarConstants.shared.cornerRadius {
        didSet {
            _ = blocks.map({$0.cornerRadius = blocksCornerRadius})
            reload()
        }
    }
    var blocksFont = CHFilterBarConstants.shared.font    {
        didSet {
            _ = blocks.map({$0.font = blocksFont})
            reload()
        }
    }
    
    
    var blocksLabelPadding = CHFilterBarConstants.shared.labelPadding {
        didSet {
            _ = blocks.map({$0.labelPadding = blocksLabelPadding})
            reload()
        }
    }
    var blocksContainerPadding = CHFilterBarConstants.shared.containerPadding {
        didSet {
            _ = blocks.map({$0.containerPadding = blocksContainerPadding})
            reload()
        }
    }
    
    
    var blocksTextColor = CHFilterBarConstants.shared.textColor{
        didSet {
            _ = blocks.map({$0.textColor = blocksTextColor})
            reload()
        }
    }
    
    
    var blocksCloseButtonImage = CHFilterBarConstants.shared.closeButtonImage {
        didSet {
            _ = blocks.map({$0.closeButtonImage = blocksCloseButtonImage})
            reload()
        }
    }
    
    
    lazy var collectionViewFlowLayout:UICollectionViewFlowLayout = {
        let layout = UICollectionViewFlowLayout()
        layout.scrollDirection = .horizontal
        layout.minimumInteritemSpacing = 0
        layout.minimumLineSpacing = 0
        return layout
    }()

    
    lazy var collectionView:UICollectionView = {
        
        let identifier = CHFilterBlockCollectionViewCell.identiefier
        let nib = UINib(nibName: identifier, bundle: nil)
        let collectionView = UICollectionView(frame: self.bounds, collectionViewLayout: self.collectionViewFlowLayout)
        collectionView.delegate = self
        collectionView.dataSource = self
        collectionView.register(nib, forCellWithReuseIdentifier: identifier)
        collectionView.backgroundColor = UIColor.clear
        return collectionView
    }()
    
    
    var blocks = [CHFilterBlock]()
    
    
    func reload() {
        UIView.transition(with: collectionView, duration: 0.25, options: .transitionCrossDissolve, animations: {
            self.collectionView.reloadData()
        }, completion: nil)
    }
    
    func add(block:CHFilterBlock, at index:Int = 0) {
        block.filterBar = self
        collectionView.reloadData()
        blocks.insert(block, at: index)
        reload()
        
        delegate?.filterBar(filterBar: self, didAddBlock: block)
    }
    
    
    func remove(block:CHFilterBlock) {
        guard let offset = blocks.enumerated().filter({$0.element == block}).first?.offset else { return }
        blocks.remove(at: offset)
        let indexPath = IndexPath(item: offset, section: 0)
        self.collectionView.deleteItems(at: [indexPath])
        
        
        delegate?.filterBar(filterBar: self, didCloseBlock: block)

    }
    
    override func layoutSubviews() {
        super.layoutSubviews()
        collectionView.frame = self.bounds
    }

}


extension CHFilterBar:UICollectionViewDelegate,UICollectionViewDataSource,UICollectionViewDelegateFlowLayout {
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return blocks.count
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
       
 
        let block = blocks[indexPath.row]
        let extraPadding = block.containerPadding.left + block.containerPadding.right + block.labelPadding.left + block.labelPadding.right + 10 + 40
        let height = bounds.height
        let width  = (block.title as NSString).size(attributes: [NSFontAttributeName:block.font]).width + extraPadding
        
        return CGSize(width: width, height: height)
    }
    

    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumLineSpacingForSectionAt section: Int) -> CGFloat {
        return blockSpacing
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumInteritemSpacingForSectionAt section: Int) -> CGFloat {
        return blockSpacing
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let identifier = CHFilterBlockCollectionViewCell.identiefier
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: identifier, for: indexPath) as! CHFilterBlockCollectionViewCell
        cell.filterBlock = blocks[indexPath.row]
        cell.delegate = self
        return cell
    }
    

    
}

extension CHFilterBar:CHFilterBlockCollectionViewCellDelegate {
    func filterBlockCollectionViewCell(cell: CHFilterBlockCollectionViewCell, didTapClose filterBlock: CHFilterBlock) {
        remove(block: filterBlock)
    }
}
