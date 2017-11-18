Pod::Spec.new do |s|
  s.name             = 'CHFilterBar'
  s.version          = '0.1.0'
  s.summary          = 'Filter Bar is an iOS control created with Swift that implement a bar with customisable text boxes that describes an active filter'
 

 
  s.homepage         = 'https://github.com/chris41090/CHFilterBar'
  s.author           = { 'Christos Chadjikyriacou' => 'christos.chadjikyriacou@gmail.com' }
  s.source           = { :git => 'https://github.com/chris41090/CHFilterBar.git', :tag => s.version.to_s }

  s.ios.deployment_target = '10.0'
  s.source_files = 'FilterBar/*.swift'
 
end