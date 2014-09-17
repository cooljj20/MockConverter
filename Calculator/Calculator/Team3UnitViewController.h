//
//  Team3UnitViewController.h
//  Calculator
//
//  Created by James Garcia on 9/13/14.
//  Copyright (c) 2014 Team3. All rights reserved.
//

#import "Team3DataViewController.h"

@interface Team3UnitViewController : Team3DataViewController<UIPickerViewDataSource, UIPickerViewDelegate>
@property (weak, nonatomic) IBOutlet UIPickerView *unitPicker;
@property (weak, nonatomic) IBOutlet UIPickerView *unitPicker2;

@end
