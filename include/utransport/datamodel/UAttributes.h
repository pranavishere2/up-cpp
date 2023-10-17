/*
 * Copyright (c) 2023 General Motors GTO LLC
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef _UATTRIBUTES_
#define _UATTRIBUTES_

#include <memory>
#include <include/uri/up_uri.h>
#include <include/uuid/uuid_gen.h>
#include "UMessageType.h"
#include "USerializationHint.h"
#include "UPriority.h"

using namespace uri_datamodel;

namespace uprotocol 
{
    namespace utransport
    {
        namespace datamodel
        {
            class UAttributes
            {               
                public:

                    class UAttributesBuilder; 

                    UAttributes() {
                        this->id_ = nullptr;
                        this->type_ = UMessageType::UNDEFINED;
                        this->priority_ = UPriority::UNDEFINED;

                         //optional
                        this->ttl_ = std::nullopt;             
                        this->token_ = std::nullopt;
                        this->hint_ = std::nullopt;
                        this->sink_ = std::nullopt; 
                        this->plevel_ = std::nullopt;
                        this->commstatus_ = std::nullopt;
                        this->reqid_ = std::nullopt; 
                    };

                    /**
                    * Construct the transport UAttributes object.
                    *
                    * @param id                Unique identifier for the message
                    * @param type              Message type
                    * @param priority          Message priority
                    * @return Returns a constructed UAttributes.
                    */
                    UAttributes(UUID id, UMessageType type, UPriority priority) {
                        //once the UUID class is aligned this code needs to be changed
                        this->id_ = std::make_shared<st_uuid_v6>();
                        
                        std::memcpy(
                            this->id_.get(), 
                            id, 
                            sizeof(st_uuid_v6));

                        this->type_ = type;
                        this->priority_ = priority;

                        //optional
                        this->ttl_ = std::nullopt;             
                        this->token_ = std::nullopt;
                        this->hint_ = std::nullopt;
                        this->sink_ = std::nullopt; 
                        this->plevel_ = std::nullopt;
                        this->commstatus_ = std::nullopt;
                        this->reqid_ = std::nullopt; 
                    }
                                    
                    /**
                    * Unique identifier for the message.
                    * @return Returns the unique identifier for the message.
                    */
                    UUID id() const {

                        return id_.get();
                    }

                    /**
                    * Message type.
                    * @return Returns the message type.
                    */
                    UMessageType type() const {

                        return type_;
                    }

                    /**
                    * uProtocol Prioritization classifications. 
                    * @return Returns the configured uProtocol Prioritization classifications.
                    */
                    UPriority priority() const {

                        return priority_;
                    }

                    /**
                    * hint regarding the bytes contained within the UPayload.
                    * @return Returns an Optional hint regarding the bytes contained within the UPayload.
                    */
                    std::optional<int32_t> ttl() const {

                        return ttl_;
                    }

                    /**
                    * Oauth2 access token to perform the access request defined in the request message.
                    * @return Returns an Optional token attribute.
                    */
                    std::optional<std::string> token() const {

                        return token_;
                    }

                    /**
                    * How long this event should live for after it was generated (in milliseconds).
                    * Events without this attribute (or value is 0) MUST NOT timeout.
                    * @return Returns an Optional time to live attribute.
                    */
                    std::optional<USerializationHint> serializationHint() const {

                        return hint_;
                    }

                    /**
                    * an explicit destination URI.
                    * @return Returns an Optional destination URI attribute.
                    */
                    std::optional<UUri> sink() const {

                        return sink_;
                    }

                    /**
                    * The reqid is used to return a response for a specific request.
                    * @return Returns an Optional requestId attribute.
                    */
                    std::optional<UUID> reqid() const {

                        return reqid_;
                    }

                    /**
                    * The permission level of the message.
                    * @return Returns an Optional permission level attribute.
                    */
                    std::optional<int32_t> plevel() const {

                        return plevel_;    
                    }

                    /**
                    * The communication status of the message.
                    * @return Returns an Optional communication status attribute.
                    */
                    std::optional<int32_t> commstatus() const {

                        return commstatus_;                        
                    }

                    class UAttributesBuilder
                    {
                        public:
                            UAttributesBuilder(UUID id, UMessageType type, UPriority priority) {
                                attributes_ = std::make_shared<UAttributes>(id, 
                                                                            type, 
                                                                            priority);
                            }

                            UAttributesBuilder& withTtl(int ttl) {

                                attributes_->ttl_ = ttl;
                                return *this;
                            }

                            UAttributesBuilder& withToken(const std::string& token) {

                                attributes_->token_ = token;
                                return *this;
                            }

                            UAttributesBuilder& withHint(const USerializationHint& hint) {

                                attributes_->hint_ = hint;
                                return *this;
                            }

                            UAttributesBuilder& withSink(const UUri& sink) {

                               // attributes_->sink_ = sink;
                                return *this;
                            }

                            UAttributesBuilder& withPermissionLevel(int plevel) {

                                attributes_->plevel_ = plevel;
                                return *this;
                            }

                            UAttributesBuilder& withCommStatus(int commstatus) {

                                attributes_->commstatus_ = commstatus;
                                return *this;
                            }

                            UAttributesBuilder& withReqId(const UUID& reqid) {

                                attributes_->reqid_ = reqid;
                                return *this;
                            }

                            UAttributes build() {

                                return *attributes_;
                            }

                        private:
                            std::shared_ptr<UAttributes> attributes_;
                    };
                    
                private:

                    std::shared_ptr<st_uuid_v6> id_;            // Unique identifier for the message
                    UMessageType type_;                         // Message type
                    UPriority priority_;                        // Message priority
                    // Optional Attributes 
                    std::optional<int32_t> ttl_;                // Time to live in milliseconds
                    std::optional<std::string> token_;          // Authorization token used for TAP
                    std::optional<USerializationHint> hint_;    // Hint regarding the bytes contained within the UPayload
                    std::optional<UUri> sink_;                  // Explicit destination URI
                    std::optional<int32_t> plevel_;             // Permission Level
                    std::optional<int32_t> commstatus_;         // Communication Status
                    std::optional<UUID> reqid_;                 // Request ID
            };
        }
    } 
}

#endif /* _UATTRIBUTES_*/