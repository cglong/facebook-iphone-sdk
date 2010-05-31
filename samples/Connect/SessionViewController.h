/*
 * Copyright 2009-2010 Facebook
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0

 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/

#import "FBConnect/FBConnect.h"

@class FBSession;

@interface SessionViewController : UIViewController
    <FBDialogDelegate,
     FBSessionDelegate,
     FBRequestDelegate,
     FBTranslationsLoaderDelegate> {
  IBOutlet UILabel* _label;
  IBOutlet UIButton* _permissionButton;
  IBOutlet UIButton* _feedButton;
  IBOutlet UIButton* _statusButton;
  IBOutlet UIButton* _photoButton;
  IBOutlet FBLoginButton* _loginButton;
  FBSession* _session;
}

@property(nonatomic,readonly) UILabel* label;

- (void)askPermission:(id)target;
- (void)publishFeed:(id)target;
- (void)setStatus:(id)target;
- (void)uploadPhoto:(id)target;
- (void)translationExamples;
- (void)translationsDidLoad;
- (void)translationsDidFailWithError:(NSError *)error;

@end
