#import <UIKit/UIKit.h>

@interface FriendTimelineDownloader : NSObject
{
	NSObject* delegate;
	NSURLConnection* conn;
	NSMutableData* buf;
}

@property (nonatomic, readonly) BOOL active;

- (id)initWithDelegate:(NSObject*)delegate;
- (void)get;

@end