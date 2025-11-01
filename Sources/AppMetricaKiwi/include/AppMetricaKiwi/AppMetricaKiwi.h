//
// Licensed under the terms in License.txt
//
// Copyright 2010 Allen Ding. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <XCTest/XCTest.h>

//! Project version number for Kiwi.
FOUNDATION_EXPORT double AppMetricaKiwiVersionNumber;

//! Project version string for Kiwi.
FOUNDATION_EXPORT const unsigned char AppMetricaKiwiVersionString[];

// This needs to come first.
#import <AppMetricaKiwi/KiwiConfiguration.h>

#if defined(__cplusplus)
extern "C" {
#endif

#import <AppMetricaKiwi/KWAfterAllNode.h>
#import <AppMetricaKiwi/KWAfterEachNode.h>
#import <AppMetricaKiwi/KWAny.h>
#import <AppMetricaKiwi/KWAsyncVerifier.h>
#import <AppMetricaKiwi/KWBeforeAllNode.h>
#import <AppMetricaKiwi/KWBeforeEachNode.h>
#import <AppMetricaKiwi/KWBlock.h>
#import <AppMetricaKiwi/KWBlockNode.h>
#import <AppMetricaKiwi/KWCallSite.h>
#import <AppMetricaKiwi/KWCaptureSpy.h>
#import <AppMetricaKiwi/KWContextNode.h>
#import <AppMetricaKiwi/KWCountType.h>
#import <AppMetricaKiwi/KWDeviceInfo.h>
#import <AppMetricaKiwi/KWExample.h>
#import <AppMetricaKiwi/KWExampleDelegate.h>
#import <AppMetricaKiwi/KWExampleNode.h>
#import <AppMetricaKiwi/KWExampleNodeVisitor.h>
#import <AppMetricaKiwi/KWExampleSuiteBuilder.h>
#import <AppMetricaKiwi/KWExistVerifier.h>
#import <AppMetricaKiwi/KWExpectationType.h>
#import <AppMetricaKiwi/KWFailure.h>
#import <AppMetricaKiwi/KWFormatter.h>
#import <AppMetricaKiwi/KWFutureObject.h>
#import <AppMetricaKiwi/KWInvocationCapturer.h>
#import <AppMetricaKiwi/KWItNode.h>
#import <AppMetricaKiwi/KWLet.h>
#import <AppMetricaKiwi/KWMessagePattern.h>
#import <AppMetricaKiwi/KWMessageSpying.h>
#import <AppMetricaKiwi/KWMock.h>
#import <AppMetricaKiwi/KWNull.h>
#import <AppMetricaKiwi/KWObjCUtilities.h>
#import <AppMetricaKiwi/KWPendingNode.h>
#import <AppMetricaKiwi/KWProbe.h>
#import <AppMetricaKiwi/KWReporting.h>
#import <AppMetricaKiwi/KWSharedExample.h>
#import <AppMetricaKiwi/KWSpec.h>
#import <AppMetricaKiwi/KWStringUtilities.h>
#import <AppMetricaKiwi/KWStub.h>
#import <AppMetricaKiwi/KWSuiteConfigurationBase.h>
#import <AppMetricaKiwi/KWValue.h>
#import <AppMetricaKiwi/KWVerifying.h>

// Matchers
#ifndef KIWI_DISABLE_MATCHERS

#import <AppMetricaKiwi/KWBeBetweenMatcher.h>
#import <AppMetricaKiwi/KWBeEmptyMatcher.h>
#import <AppMetricaKiwi/KWBeIdenticalToMatcher.h>
#import <AppMetricaKiwi/KWBeKindOfClassMatcher.h>
#import <AppMetricaKiwi/KWBeMemberOfClassMatcher.h>
#import <AppMetricaKiwi/KWBeSubclassOfClassMatcher.h>
#import <AppMetricaKiwi/KWBeTrueMatcher.h>
#import <AppMetricaKiwi/KWBeWithinMatcher.h>
#import <AppMetricaKiwi/KWBeZeroMatcher.h>
#import <AppMetricaKiwi/KWBlockRaiseMatcher.h>
#import <AppMetricaKiwi/KWChangeMatcher.h>
#import <AppMetricaKiwi/KWConformToProtocolMatcher.h>
#import <AppMetricaKiwi/KWContainMatcher.h>
#import <AppMetricaKiwi/KWContainStringMatcher.h>
#import <AppMetricaKiwi/KWEqualMatcher.h>
#import <AppMetricaKiwi/KWGenericMatcher.h>
#import <AppMetricaKiwi/KWHaveMatcher.h>
#import <AppMetricaKiwi/KWHaveValueMatcher.h>
#import <AppMetricaKiwi/KWInequalityMatcher.h>
#import <AppMetricaKiwi/KWMatchVerifier.h>
#import <AppMetricaKiwi/KWMatcher.h>
#import <AppMetricaKiwi/KWMatcherFactory.h>
#import <AppMetricaKiwi/KWMatchers.h>
#import <AppMetricaKiwi/KWMatching.h>
#import <AppMetricaKiwi/KWNilMatcher.h>
#import <AppMetricaKiwi/KWNotificationMatcher.h>
#import <AppMetricaKiwi/KWReceiveMatcher.h>
#import <AppMetricaKiwi/KWRegisterMatchersNode.h>
#import <AppMetricaKiwi/KWRegularExpressionPatternMatcher.h>
#import <AppMetricaKiwi/KWRespondToSelectorMatcher.h>
#import <AppMetricaKiwi/KWStringContainsMatcher.h>
#import <AppMetricaKiwi/KWStringPrefixMatcher.h>
#import <AppMetricaKiwi/KWUserDefinedMatcher.h>

#endif

// Public Foundation Categories
#import <AppMetricaKiwi/NSObject+KiwiMockAdditions.h>
#import <AppMetricaKiwi/NSObject+KiwiSpyAdditions.h>
#import <AppMetricaKiwi/NSObject+KiwiStubAdditions.h>
#import <AppMetricaKiwi/NSObject+KiwiVerifierAdditions.h>
#import <AppMetricaKiwi/NSProxy+KiwiVerifierAdditions.h>

#import <AppMetricaKiwi/KiwiMacros.h>

// Some Foundation headers use Kiwi keywords (e.g. 'should') as identifiers for
// parameter names. Including this last allows the use of Kiwi keywords without
// conflicting with these headers (hopefully!).
#import <AppMetricaKiwi/KiwiBlockMacros.h>

#if defined(__cplusplus)
}
#endif
