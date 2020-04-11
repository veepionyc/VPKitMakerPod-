//
//  VPKit.h
//  VPKit
//
//  Created by jonathan on 31/05/2016.
//  Copyright © 2016 jonathan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <VPKit/VPKitClass.h>

NS_ASSUME_NONNULL_BEGIN

@class VPKVeepEditor;



/**
 Public entry point for the VPKit Editor
 */

@interface  VPKit (VPKitMaker)


#pragma mark - view controllers
    
/**---------------------------------------------------------------------------------------
 * @name View Controllers
 *  ---------------------------------------------------------------------------------------
 */

/**
Create a VPKVeepEditor. This is the view controller for creating and editing Veep metadata for image and video content.
*/

+ (nullable VPKVeepEditor*)editorWithImage:(UIImage*)image fromView:(UIView*)view error:( NSError* _Nullable *)error;


#pragma mark - veep distribution

/**
Copy veeps from the default app to a destination app. The default app is invoked by the class method. The destination app instance is passed in as a parameter.
 
 @param veepId The identifier of the veep to be copied.
 @param kit Instance of VPKit that represents the destination app to copy to.
 @param completion Block to run on completion of distribution network request.
 */

+ (void)copyVeep:(NSString*)veepId
           toKit:(VPKit*)kit
      completion:(VPKitPublicVeepErrorCompletionBlock)completion;

/**
Remove the most recent version of a veep from the default app.

 This is a *lightweight* deletion. It deletes the most recent version of a veep leaving previous versions intact.
 
 @param veepId The identifier of the veep to be deleted.
 @param completion Block to run on completion of distribution network request.
 */
+ (void)deleteVeep:(NSString*)veepId
        completion:(VPKBOOLErrorBlock)completion;

/**
Remove the most recent version of a veep from an app instance.

 This is a *lightweight* deletion. It deletes the most recent version of a veep leaving previous versions intact.
 
 @param veepId The identifier of the veep to be deleted.
 @param completion Block to run on completion of distribution network request.
 */
- (void)deleteVeep:(NSString*)veepId
        completion:(VPKBOOLErrorBlock)completion;



/**
Remove all versions of a veep from the default app.
 
 This is a *heavyweight* deletion. It deletes the current version and all previous versions as identified by the veep's root ID.

 @param veepId The identifier of the veep to be removed.

 @param completion Block to run on completion of network request.
 */

+ (void)deleteVeeps:(NSString*)veepId completion:(VPKBOOLErrorBlock)completion;

/**
Remove all versions of a veep from an app instance.

 This is a *heavyweight* deletion. It deletes the current version and all previous versions as identified by the veep's root ID.
 
 @param veepId The identifier of the veep to be removed.
 
 @param completion Block to run on completion of network request.
 */

- (void)deleteVeeps:(NSString*)veepId completion:(VPKBOOLErrorBlock)completion;

NS_ASSUME_NONNULL_END
@end
