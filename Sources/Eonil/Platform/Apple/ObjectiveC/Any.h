//
//  Any.h
//  Cocoa++
//
//  Created by Hoon H. on 4/20/14.
//  Copyright (c) 2014 Eonil. All rights reserved.
//

#pragma once
#include "../Common.h"

EONIL_PLATFORM_APPLE_NAMESPACE_BEGIN


///*!
// Represents semantical behavior of an Objective-C object.
// */
//class
//Content
//{
//	
//};


/*!
 Wraps semantics of Objective-C `id` type.
 Each object uniquely owns an underlying Objective-C object.
 
 @note
 You must use `nullptr` explicitly to make `nil` state.
 */
class
Any
{
public:
	Any() = delete;
	Any(std::nullptr_t);
	Any(__unsafe_unretained id);
	~Any();
	
	operator __unsafe_unretained id() const;
	
public:
	Any(Any const&);
	Any(Any&&);
	
	auto	operator=(Any const&) -> Any&;
	auto	operator=(Any&&) -> Any&;
	
public:
//	auto	copy() const -> Any;

protected:
	template <typename T> auto
	get_objc_object() const ->  __unsafe_unretained T*
	{
#ifndef __OBJC__
		/*!
		 This method is available only for Objective-C context.
		 */
		EONIL_COCOA_DEBUG_ASSERT(false);
#endif
		
		/*!
		 This assertion is activated only on Objective-C context.
		 */
		EONIL_COCOA_ASSERT_OBJC_TYPE_OR_NIL(_objc_object_ptr, T);
		return	_objc_object_ptr;
	}
	
private:
	__strong id	_objc_object_ptr	{};
};










EONIL_PLATFORM_APPLE_NAMESPACE_END
