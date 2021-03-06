//
//  MGTargetModel.h
//  MGDataBinder_Example
//
//  Created by maling on 2020/12/25.
//  Copyright © 2020 Maling1255. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MGPropertyType.h"
NS_ASSUME_NONNULL_BEGIN

@interface MGTargetEntity : NSObject

@property (nonatomic, copy, readonly) NSString *bindId;
@property (nonatomic, copy, readonly) NSString *signId;
@property (nonatomic, strong) id target;
@property (nonatomic, copy) NSString *property;
@property (nonatomic, strong) MGPropertyType *propertyType;
@property (nonatomic, assign, getter=isControlAction) BOOL controlAction;
@property (nonatomic, assign) UIControlEvents controlEvent;
@property (nonatomic, copy, nullable) id actionBlock;
@property (nonatomic, assign) MGBlockType blockType;

- (BOOL)didChangeValue;
- (void)setValue:(id)value;

@end

NS_ASSUME_NONNULL_END
