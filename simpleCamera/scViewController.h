//
//  scViewController.h
//  simpleCamera
//
//  Created by Tom Berman on 03/08/2013.
//  Copyright (c) 2013 A & T Design. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AVCamCaptureManager, AVCamPreviewView, AVCaptureVideoPreviewLayer;


@interface scViewController : UIViewController <UIImagePickerControllerDelegate> {
}

@property (strong, nonatomic) IBOutlet UIView *videoPreviewView;
@property (nonatomic,retain) AVCamCaptureManager *captureManager;
@property (nonatomic,retain) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer;

- (IBAction)addMetaData:(UIButton *)sender;

@end
