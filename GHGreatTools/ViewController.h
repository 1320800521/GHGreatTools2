//
//  ViewController.h
//  GHGreatTools
//
//  Created by 51Talk_zhaoguanghui on 2018/2/28.
//  Copyright © 2018年 ApesStudio. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@interface ViewController : NSViewController <WebResourceLoadDelegate>
@property(nonatomic,weak)IBOutlet WebView* webView;
@property(nonatomic,weak)IBOutlet NSSegmentedControl* seg;
@end

