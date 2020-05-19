#include <bundles/bundles.h>

PUBLIC @interface BundleEditor : NSWindowController <NSBrowserDelegate>
@property (class, readonly) BundleEditor* sharedInstance;
- (void)revealBundleItem:(bundles::item_ptr const&)anItem;
- (IBAction)browserSelectionDidChange:(id)sender;
@end
