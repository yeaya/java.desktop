#ifndef _com_apple_eawt__AppMiscHandlers_h_
#define _com_apple_eawt__AppMiscHandlers_h_
//$ class com.apple.eawt._AppMiscHandlers
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace eawt {

class _AppMiscHandlers : public ::java::lang::Object {
	$class(_AppMiscHandlers, $NO_CLASS_INIT, ::java::lang::Object)
public:
	_AppMiscHandlers();
	void init$();
	static void disableSuddenTermination();
	static void enableSuddenTermination();
	static bool isSuddenTerminationEnbaled();
	static void nativeDisableSuddenTermination();
	static void nativeEnableSuddenTermination();
	static void nativeOpenHelpViewer();
	static void nativeRequestActivation(bool allWindows);
	static void nativeRequestUserAttention(bool critical);
	static void openHelpViewer();
	static void requestActivation(bool allWindows);
	static void requestUserAttention(bool critical);
	static bool isSuddenTerminationEnabled;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt__AppMiscHandlers_h_