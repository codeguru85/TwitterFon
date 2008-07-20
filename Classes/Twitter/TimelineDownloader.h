#import <UIKit/UIKit.h>

@interface TimelineDownloader : NSObject
{
	NSObject*           delegate;
	NSURLConnection*    conn;
	NSMutableData*      buf;
    NSString*           method;
}

- (id)initWithDelegate:(NSObject*)delegate;
- (void)get:(NSString*)method;

@end