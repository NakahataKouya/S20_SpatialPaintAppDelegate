//
//  S20_SpatialPaintAppDelegate.h
//  S20_SpatialPaint
//
//  Created by 中畑 虎也 on 10/12/04.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyTitleViewController.h"
#import "MyPaintViewController.h"

@interface S20_SpatialPaintAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	MyTitleViewController * myTitleVCont;
	MyPaintViewController * myPaintVCont;
}

-(void) drive;

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

