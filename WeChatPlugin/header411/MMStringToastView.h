//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAnimateView.h"

@class MMAnimateVerticallyCenteredTextFieldWrapper, NSMutableArray, NSString;

@interface MMStringToastView : MMAnimateView
{
    BOOL m_animationDone;
    NSString *m_currentString;
    NSMutableArray *m_remainStringList;
    MMAnimateVerticallyCenteredTextFieldWrapper *m_currentLabel;
    MMAnimateVerticallyCenteredTextFieldWrapper *m_nextLabel;
    NSMutableArray *m_remainTimeList;
}

@property(retain, nonatomic) NSMutableArray *m_remainTimeList; // @synthesize m_remainTimeList;
@property(nonatomic) BOOL m_animationDone; // @synthesize m_animationDone;
@property(retain, nonatomic) MMAnimateVerticallyCenteredTextFieldWrapper *m_nextLabel; // @synthesize m_nextLabel;
@property(retain, nonatomic) MMAnimateVerticallyCenteredTextFieldWrapper *m_currentLabel; // @synthesize m_currentLabel;
@property(retain, nonatomic) NSMutableArray *m_remainStringList; // @synthesize m_remainStringList;
@property(retain, nonatomic) NSString *m_currentString; // @synthesize m_currentString;
- (void).cxx_destruct;
- (struct CGRect)getStringSuggestRect:(id)arg1 withWithConstrain:(double)arg2;
- (void)timerFunction;
- (void)clearCurrentString;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (void)addScrollingString:(id)arg1;
- (void)commInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
