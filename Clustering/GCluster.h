#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <GoogleMapsM4B/GMSMarker.h>

@protocol GCluster <NSObject>

@property(nonatomic, assign, readonly) CLLocationCoordinate2D position;

@property(nonatomic, strong, readonly) NSSet *items;

@property(nonatomic, strong) GMSMarker *marker;

@end
