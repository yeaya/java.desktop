#ifndef _com_apple_eawt__AppEventHandler$_NativeEvent_h_
#define _com_apple_eawt__AppEventHandler$_NativeEvent_h_
//$ class com.apple.eawt._AppEventHandler$_NativeEvent
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace apple {
		namespace eawt {

class _AppEventHandler$_NativeEvent : public ::java::lang::Object {
	$class(_AppEventHandler$_NativeEvent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	_AppEventHandler$_NativeEvent();
	void init$($ObjectArray* args);
	virtual $Object* get(int32_t i);
	$ObjectArray* args = nullptr;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppEventHandler$_NativeEvent_h_