CHFilterBar
=======

![Build Status](https://travis-ci.org/devxoul/Toaster.svg?branch=master)
![Swift](https://img.shields.io/badge/Swift-4.0-orange.svg)


Filter Bar is an iOS control created with Swift that implement a bar with customisable text boxes that describes an active filter.



![Swift](https://preview.ibb.co/bFrvHm/Nov_21_2017_18_46_30.gif)


Features
--------

- **Flat Modern Design**
- **Highly Customizable**
- **Cocoa Touch like usage**
- **Closure Base**



At a Glance
-----------

```swift
import CHFilterBar

@IBOutlet var filterBar: CHFilterBar!


let block1 = CHFilterBlock(title:"One")
let block2 = CHFilterBlock(title: "Two")
let block3 = CHFilterBlock(title: "Three")

filterBar.add(block: block1)
filterBar.add(block: block2)
filterBar.add(block: block3)

```


Installation
------------

- **Projects with [CocoaPods](https://cocoapods.org):**

```ruby
pod 'CHFilterBar'
```



Getting Started
---------------

### Setting A Simple FilterBar

Add a UIView to your storyboard and set its class to be a CHFilterBar. The crate an outlet to your code.

```swift
@IBOutlet var filterBar: CHFilterBar!
```

### Adding Filter Blocks

- **Adding a Blocks**:

```swift
let block = CHFilterBlock(title:"One")
filterBar.add(block: block)
```

- **Adding a Block at index**:

```swift
filterBar.add(block: block, at: 1)

```

- **Adding a Block with Callbacks**:

```swift
let block = CHFilterBlock(id: 1, title: "One", action: { (block) in
print("Do something")
}) { (block) in
print("Do something else")
}

filterBar.add(block: block, at: 1)
```

### Removing Filter Bolcks

- **Removing a Blocks**:
- ```swift
filterBar.remove(block: block)

```

### Modyfing Filter Bolcks

- **Modyfing a single a filter Block**:
- ```swift
let block = CHFilterBlock(title: "One")

block.font = UIFont.systemFont(ofSize: 12)
block.backgroundColor = UIColor.red
block.cornerRadius = 0
block.closeButtonImage = UIImage(named:"customClose")

filterBar.add(block: block)

```

- **Modyfing all filter Blocks**:
- ```swift
filterBar.blocksFont = UIFont.systemFont(ofSize: 12)
filterBar.blocksBackgroundColor = UIColor.red
filterBar.blocksCornerRadius = 0
filterBar.blocksCloseButtonImage = UIImage(named:"customClose")

```



Appearance
---------------

Supported appearance properties are:

| Property | Type | Description |
|---|---|---|
| `backgroundColor` | `UIColor` | Background color |
| `cornerRadius` | `CGFloat` | Corner radius |
| `closeButtonImage` | `UIImage` | Close Button Image |
| `textColor` | `UIColor` | Text color |
| `font` | `UIFont` | Font |
| `title` | `String` | Block Title |
|` containerPadding` | `UIEdgeInsest` | The margins sizes of the block |
|` labelPadding` | `UIEdgeInsest` | The margins sizes of the lable inside the block |


Demo
-----------
- ```swift
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

```

![CHFilterBar Screenshot](https://preview.ibb.co/gsWZA6/Screen_Shot_2017_11_21_at_6_39_01_PM.png)


License
-------

CHFilterBar is under [Apached 2.0](https://www.apache.org/licenses/LICENSE-2.0). You can do what the fuck you want with CHFilterBar. See [LICENSE](LICENSE) file for more info.
