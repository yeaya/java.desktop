#ifndef _sun_awt_X11_XEmbedServerTester_h_
#define _sun_awt_X11_XEmbedServerTester_h_
//$ class sun.awt.X11.XEmbedServerTester
//$ extends sun.awt.X11.XEventDispatcher

#include <java/lang/Array.h>
#include <sun/awt/X11/XEventDispatcher.h>

#pragma push_macro("EVENT_LOCK")
#undef EVENT_LOCK
#pragma push_macro("MODAL_CLOSE")
#undef MODAL_CLOSE
#pragma push_macro("OTHER_FRAME")
#undef OTHER_FRAME
#pragma push_macro("SERVER_BOUNDS")
#undef SERVER_BOUNDS
#pragma push_macro("SERVER_FOCUS")
#undef SERVER_FOCUS
#pragma push_macro("SERVER_MODAL")
#undef SERVER_MODAL
#pragma push_macro("SYSTEM_EVENT_MASK")
#undef SYSTEM_EVENT_MASK

namespace java {
	namespace awt {
		class Rectangle;
		class Robot;
	}
}
namespace java {
	namespace util {
		class LinkedList;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XBaseWindow;
			class XEmbedHelper;
			class XEvent;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XEmbedServerTester : public ::sun::awt::X11::XEventDispatcher {
	$class(XEmbedServerTester, 0, ::sun::awt::X11::XEventDispatcher)
public:
	XEmbedServerTester();
	void init$($Array<::java::awt::Rectangle>* serverBounds, int64_t parent);
	int32_t activateServer(int32_t prev);
	int32_t activateServerNoWait(int32_t prev);
	int32_t checkEventList(int32_t position, int32_t event);
	void checkFocusGained(int32_t kind);
	void checkFocusLost();
	void checkFocused();
	void checkFocusedServerNext();
	void checkFocusedServerPrev();
	void checkMapped();
	void checkNotFocused();
	void checkNotMapped();
	void checkWindowActivated();
	int32_t deactivateServer();
	virtual void dispatchEvent(::sun::awt::X11::XEvent* ev) override;
	void dumpReceivedEvents();
	int32_t embed();
	int32_t embedCompletely();
	int32_t focusServer();
	int32_t focusServerNext();
	int32_t focusServerPrev();
	int32_t getEventPos();
	static ::sun::awt::X11::XEmbedServerTester* getTester($Array<::java::awt::Rectangle>* serverBounds, int64_t parent);
	void grabKey();
	int32_t hideModalDialog();
	void initAccel();
	int32_t pressAccelKey();
	void registerAccelerator();
	int32_t requestFocus();
	int32_t requestFocusNoWait();
	void sendMessage(int32_t message);
	void sendMessage(int32_t message, int32_t detail, int64_t data1, int64_t data2);
	int32_t showModalDialog();
	void sleep(int32_t amount);
	virtual void test1_1();
	virtual void test1_2();
	virtual void test1_3();
	virtual void test1_4();
	virtual void test1_5();
	virtual void test1_6();
	virtual void test1_7();
	virtual void test2_5();
	virtual void test2_6();
	virtual void test3_1();
	virtual void test3_3();
	virtual void test3_4();
	virtual void test3_5();
	virtual void test3_6();
	virtual void test4_1();
	virtual void test4_2();
	virtual void test4_3();
	virtual void test4_4();
	virtual void test6_1_1();
	virtual void test6_1_2();
	virtual void test6_1_3();
	virtual void test6_1_4();
	virtual void test6_2_1();
	virtual void test6_2_2();
	virtual void test6_2_3();
	virtual void test6_2_4();
	virtual void test7_1();
	virtual void test7_2();
	virtual void test9_1();
	void ungrabKey();
	void unregisterAccelerator();
	void updateEmbedInfo();
	void waitEmbeddedNotify(int32_t pos);
	void waitFocusGained(int32_t pos);
	void waitFocusLost(int32_t pos);
	void waitForEvent(int32_t position, int32_t event);
	void waitSystemEvent(int32_t position, int32_t event);
	void waitWindowActivated(int32_t pos);
	void waitWindowDeactivated(int32_t pos);
	static ::sun::util::logging::PlatformLogger* xembedLog;
	$Object* EVENT_LOCK = nullptr;
	static const int32_t SYSTEM_EVENT_MASK = 32768;
	int32_t my_version = 0;
	int32_t server_version = 0;
	::sun::awt::X11::XEmbedHelper* xembed = nullptr;
	bool focused = false;
	int32_t focusedKind = 0;
	int32_t focusedServerComponent = 0;
	bool reparent = false;
	int64_t parent = 0;
	bool windowActive = false;
	bool xembedActive = false;
	::sun::awt::X11::XBaseWindow* window = nullptr;
	$volatile(int32_t) eventWaited = 0;
	$volatile(int32_t) eventReceived = 0;
	int32_t mapped = 0;
	int32_t accel_key = 0;
	int32_t accel_keysym = 0;
	int32_t accel_mods = 0;
	static ::java::awt::Rectangle* initialBounds;
	::java::awt::Robot* robot = nullptr;
	$Array<::java::awt::Rectangle>* serverBounds = nullptr;
	static const int32_t SERVER_BOUNDS = 0;
	static const int32_t OTHER_FRAME = 1;
	static const int32_t SERVER_FOCUS = 2;
	static const int32_t SERVER_MODAL = 3;
	static const int32_t MODAL_CLOSE = 4;
	::java::util::LinkedList* events = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("EVENT_LOCK")
#pragma pop_macro("MODAL_CLOSE")
#pragma pop_macro("OTHER_FRAME")
#pragma pop_macro("SERVER_BOUNDS")
#pragma pop_macro("SERVER_FOCUS")
#pragma pop_macro("SERVER_MODAL")
#pragma pop_macro("SYSTEM_EVENT_MASK")

#endif // _sun_awt_X11_XEmbedServerTester_h_