//
//  MacroViewController.h
//  OpenKey
//
//  Created by Maple on 9/11/20.
//  Copyright © 2020 Maple. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface MacroViewController : NSViewController<NSTableViewDataSource, NSTableViewDelegate, NSTextFieldDelegate>
@property (weak) IBOutlet NSTableView *tableView;
@property (weak) IBOutlet NSTextField *macroName;
@property (weak) IBOutlet NSTextField *macroContent;

@property (weak) IBOutlet NSButton *buttonAdd;
@property (weak) IBOutlet NSButton *AutoCapsMacro;

@end

NS_ASSUME_NONNULL_END
