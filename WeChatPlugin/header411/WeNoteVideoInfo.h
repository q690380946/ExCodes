//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WeNoteVideoInfo : NSObject
{
    unsigned int _duration;
    double _width;
    double _height;
    NSString *_videoPath;
    NSString *_thumbImagePath;
    NSString *_videoFileName;
}

@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *videoFileName; // @synthesize videoFileName=_videoFileName;
@property(retain, nonatomic) NSString *thumbImagePath; // @synthesize thumbImagePath=_thumbImagePath;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;

@end

