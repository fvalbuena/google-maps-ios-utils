//
//  ClusterRenderer.h
//  Parkingmobility
//
//  Created by Colin Edwards on 1/18/14.
//  Copyright (c) 2014 Colin Edwards. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GoogleMapsM4B/GoogleMaps.h>

@protocol GClusterRenderer <NSObject>

- (void)clustersChanged:(NSSet*)clusters;

@end
