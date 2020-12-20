//
//  MyTextField.h
//  OpenKey
//
//  Created by Maple on 9/11/20.
//  Copyright © 2020 Maple. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@protocol MyTextFieldDelegate
@optional
-(void)onMyTextFieldKeyChange:(unsigned short)keyCode character:(unsigned short)character;
@end

@interface MyTextField : NSTextField<NSTextDelegate>
@property (weak, nonatomic) id<MyTextFieldDelegate> Parent;
@property unsigned short LastKeyCode;
@property unsigned short LastKeyChar;

-(void)setTextByChar:(unsigned short)chr;
@end
