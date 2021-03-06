//
//  DessertInfo.h
//  DailyDessert
//
//  Created by Krishantha Jayathilake on 2014/02/02.
//  Copyright (c) 2014 TechOne. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Dessert, User;

@interface DessertInfo : NSManagedObject

@property (nonatomic, retain) NSNumber * count;
@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) Dessert *dessert;
@property (nonatomic, retain) User *user;

@end
