/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSFontManager.h"

@interface _MailNSFontManager : NSFontManager
{
    double _fontSize;
    BOOL _isMultiple;
}

- (id)convertFont:(id)arg1;
- (unsigned long long)currentFontAction;
- (void)modifyFontSize:(double)arg1;
- (void)setSelectedFont:(id)arg1 isMultiple:(BOOL)arg2;
- (void)postSelectedFontChangeNotification;

@end

