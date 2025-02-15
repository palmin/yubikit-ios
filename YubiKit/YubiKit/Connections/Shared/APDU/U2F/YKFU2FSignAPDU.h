// Copyright 2018-2019 Yubico AB
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>
#import "YKFAPDU.h"

@class YKFU2FSignRequest;

NS_ASSUME_NONNULL_BEGIN

@interface YKFU2FSignAPDU : YKFAPDU

@property (nonatomic, readonly) NSString *clientData;

- (nullable instancetype)initWithChallenge:(NSString *)challenge
                                 keyHandle:(NSString *)keyHandle
                                     appId:(NSString *)appId;

// allow signing raw messages instead of JSON useful for id_ecdsa_sk
// authentication in SSH.
- (instancetype)initWithRawClientData:(NSData *)rawClientData
                            keyHandle:(NSString *)keyHandle
                                appId:(NSString *)appId NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
