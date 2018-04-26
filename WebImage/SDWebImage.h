/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 * (c) Florent Vilmart
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <SDWebImage/SDWebImageCompat.h>

#if SD_UIKIT
#import <UIKit/UIKit.h>
#endif

//! Project version number for WebImage.
FOUNDATION_EXPORT double WebImageVersionNumber;

//! Project version string for WebImage.
FOUNDATION_EXPORT const unsigned char WebImageVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <WebImage/PublicHeader.h>

#import <SDWebImage/SDWebImageManager.h>
#import <SDWebImage/SDWebImageCacheKeyFilter.h>
#import <SDWebImage/SDWebImageCacheSerializer.h>
#import <SDWebImage/SDImageCacheConfig.h>
#import <SDWebImage/SDImageCache.h>
#import <SDWebImage/SDMemoryCache.h>
#import <SDWebImage/SDDiskCache.h>
#import <SDWebImage/SDImageCacheDefine.h>
#import <SDWebImage/SDImageCachesManager.h>
#import <SDWebImage/UIView+WebCache.h>
#import <SDWebImage/UIImageView+WebCache.h>
#import <SDWebImage/UIImageView+HighlightedWebCache.h>
#import <SDWebImage/SDWebImageDownloaderConfig.h>
#import <SDWebImage/SDWebImageDownloaderOperation.h>
#import <SDWebImage/SDWebImageDownloaderRequestModifier.h>
#import <SDWebImage/SDWebImageLoader.h>
#import <SDWebImage/SDWebImageLoadersManager.h>
#import <SDWebImage/UIButton+WebCache.h>
#import <SDWebImage/SDWebImagePrefetcher.h>
#import <SDWebImage/UIView+WebCacheOperation.h>
#import <SDWebImage/UIImage+WebCache.h>
#import <SDWebImage/UIImage+MultiFormat.h>
#import <SDWebImage/SDWebImageOperation.h>
#import <SDWebImage/SDWebImageDownloader.h>
#import <SDWebImage/SDWebImageTransition.h>
#import <SDWebImage/SDWebImageIndicator.h>
#import <SDWebImage/SDImageTransformer.h>
#import <SDWebImage/UIImage+Transform.h>
#import <SDWebImage/SDAnimatedImage.h>
#import <SDWebImage/SDAnimatedImageView.h>
#import <SDWebImage/SDAnimatedImageView+WebCache.h>
#import <SDWebImage/SDWebImageCodersManager.h>
#import <SDWebImage/SDWebImageCoder.h>
#import <SDWebImage/SDWebImageAPNGCoder.h>
#import <SDWebImage/SDWebImageGIFCoder.h>
#import <SDWebImage/SDWebImageImageIOCoder.h>
#import <SDWebImage/SDImageFrame.h>
#import <SDWebImage/SDImageCoderHelper.h>
#import <SDWebImage/UIImage+GIF.h>
#import <SDWebImage/UIImage+ForceDecode.h>
#import <SDWebImage/NSData+ImageContentType.h>
#import <SDWebImage/SDWebImageDefine.h>
#import <SDWebImage/SDWebImageError.h>

// Mac
#if __has_include(<SDWebImage/NSImage+Compatibility.h>)
#import <SDWebImage/NSImage+Compatibility.h>
#endif
#if __has_include(<SDWebImage/NSButton+WebCache.h>)
#import <SDWebImage/NSButton+WebCache.h>
#endif
#if __has_include(<SDWebImage/SDAnimatedImageRep.h>)
#import <SDWebImage/SDAnimatedImageRep.h>
#endif

// MapKit
#if __has_include(<SDWebImage/MKAnnotationView+WebCache.h>)
#import <SDWebImage/MKAnnotationView+WebCache.h>
#endif


// GIF
#if __has_include(<SDWebImage/FLAnimatedImageView+WebCache.h>)
#import <SDWebImage/FLAnimatedImageView+WebCache.h>
#endif

// WebP
#if __has_include(<SDWebImage/UIImage+WebP.h>)
#import <SDWebImage/UIImage+WebP.h>
#import <SDWebImage/SDWebImageWebPCoder.h>
#endif
