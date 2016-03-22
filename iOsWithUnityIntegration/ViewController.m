//
//  ViewController.m
//  iOsWithUnityIntegration
//
//  Created by user on 21.03.16.
//  Copyright © 2016 re-mondes. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)buttonLoadUnityClicked:(UIButton *)sender
{
    UIView *unityView = UnityGetGLView();
    unityView.frame = self.view.frame;
    [self.view addSubview:unityView];
}

@end
