//
//  HushWebTab.h
//  HushWeb_iOS
//
//  Created by Noel Feliciano on 2012-10-08.
//  Copyright (c) 2012 Noel Feliciano. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HushWebTab : NSObject

@property (nonatomic, strong) NSMutableArray *tabHistory;
@property (nonatomic, strong) UIImageView *cachedImage;
@property (nonatomic, strong) UIWebView *webView;

@end



/*******

 A tab.
 Contains the history of NSURLs, an image to use for the current url, and a webview


*/