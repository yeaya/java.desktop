#ifndef _sun_awt_X11_XEmbedHelper_h_
#define _sun_awt_X11_XEmbedHelper_h_
//$ class sun.awt.X11.XEmbedHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NON_STANDARD_XEMBED_GTK_GRAB_KEY")
#undef NON_STANDARD_XEMBED_GTK_GRAB_KEY
#pragma push_macro("NON_STANDARD_XEMBED_GTK_UNGRAB_KEY")
#undef NON_STANDARD_XEMBED_GTK_UNGRAB_KEY
#pragma push_macro("XEMBED_ACTIVATE_ACCELERATOR")
#undef XEMBED_ACTIVATE_ACCELERATOR
#pragma push_macro("XEMBED_EMBEDDED_NOTIFY")
#undef XEMBED_EMBEDDED_NOTIFY
#pragma push_macro("XEMBED_FOCUS_CURRENT")
#undef XEMBED_FOCUS_CURRENT
#pragma push_macro("XEMBED_FOCUS_FIRST")
#undef XEMBED_FOCUS_FIRST
#pragma push_macro("XEMBED_FOCUS_IN")
#undef XEMBED_FOCUS_IN
#pragma push_macro("XEMBED_FOCUS_LAST")
#undef XEMBED_FOCUS_LAST
#pragma push_macro("XEMBED_FOCUS_NEXT")
#undef XEMBED_FOCUS_NEXT
#pragma push_macro("XEMBED_FOCUS_OUT")
#undef XEMBED_FOCUS_OUT
#pragma push_macro("XEMBED_FOCUS_PREV")
#undef XEMBED_FOCUS_PREV
#pragma push_macro("XEMBED_GRAB_KEY")
#undef XEMBED_GRAB_KEY
#pragma push_macro("XEMBED_MAPPED")
#undef XEMBED_MAPPED
#pragma push_macro("XEMBED_MODALITY_OFF")
#undef XEMBED_MODALITY_OFF
#pragma push_macro("XEMBED_MODALITY_ON")
#undef XEMBED_MODALITY_ON
#pragma push_macro("XEMBED_MODIFIER_ALT")
#undef XEMBED_MODIFIER_ALT
#pragma push_macro("XEMBED_MODIFIER_CONTROL")
#undef XEMBED_MODIFIER_CONTROL
#pragma push_macro("XEMBED_MODIFIER_HYPER")
#undef XEMBED_MODIFIER_HYPER
#pragma push_macro("XEMBED_MODIFIER_SHIFT")
#undef XEMBED_MODIFIER_SHIFT
#pragma push_macro("XEMBED_MODIFIER_SUPER")
#undef XEMBED_MODIFIER_SUPER
#pragma push_macro("XEMBED_REGISTER_ACCELERATOR")
#undef XEMBED_REGISTER_ACCELERATOR
#pragma push_macro("XEMBED_REQUEST_FOCUS")
#undef XEMBED_REQUEST_FOCUS
#pragma push_macro("XEMBED_UNGRAB_KEY")
#undef XEMBED_UNGRAB_KEY
#pragma push_macro("XEMBED_UNREGISTER_ACCELERATOR")
#undef XEMBED_UNREGISTER_ACCELERATOR
#pragma push_macro("XEMBED_VERSION")
#undef XEMBED_VERSION
#pragma push_macro("XEMBED_WINDOW_ACTIVATE")
#undef XEMBED_WINDOW_ACTIVATE
#pragma push_macro("XEMBED_WINDOW_DEACTIVATE")
#undef XEMBED_WINDOW_DEACTIVATE

namespace java {
	namespace awt {
		class AWTKeyStroke;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class Unsafe;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
			class XClientMessageEvent;
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

class XEmbedHelper : public ::java::lang::Object {
	$class(XEmbedHelper, 0, ::java::lang::Object)
public:
	XEmbedHelper();
	void init$();
	static $String* XEmbedMessageToString(::sun::awt::X11::XClientMessageEvent* msg);
	static $String* focusIdToString(int32_t focus_id);
	virtual ::java::awt::AWTKeyStroke* getKeyStrokeForKeySym(int64_t keysym, int64_t state);
	virtual int32_t getModifiers(int32_t state);
	static $String* msgidToString(int32_t msg_id);
	virtual void sendMessage(int64_t window, int32_t message);
	virtual void sendMessage(int64_t window, int32_t message, int64_t detail, int64_t data1, int64_t data2);
	static ::sun::util::logging::PlatformLogger* xembedLog;
	static ::jdk::internal::misc::Unsafe* unsafe;
	static const int32_t XEMBED_VERSION = 0;
	static const int32_t XEMBED_MAPPED = 1; // (1 << 0)
	static const int32_t XEMBED_EMBEDDED_NOTIFY = 0;
	static const int32_t XEMBED_WINDOW_ACTIVATE = 1;
	static const int32_t XEMBED_WINDOW_DEACTIVATE = 2;
	static const int32_t XEMBED_REQUEST_FOCUS = 3;
	static const int32_t XEMBED_FOCUS_IN = 4;
	static const int32_t XEMBED_FOCUS_OUT = 5;
	static const int32_t XEMBED_FOCUS_NEXT = 6;
	static const int32_t XEMBED_FOCUS_PREV = 7;
	static const int32_t XEMBED_GRAB_KEY = 8;
	static const int32_t XEMBED_UNGRAB_KEY = 9;
	static const int32_t XEMBED_MODALITY_ON = 10;
	static const int32_t XEMBED_MODALITY_OFF = 11;
	static const int32_t XEMBED_REGISTER_ACCELERATOR = 12;
	static const int32_t XEMBED_UNREGISTER_ACCELERATOR = 13;
	static const int32_t XEMBED_ACTIVATE_ACCELERATOR = 14;
	static const int32_t NON_STANDARD_XEMBED_GTK_GRAB_KEY = 108;
	static const int32_t NON_STANDARD_XEMBED_GTK_UNGRAB_KEY = 109;
	static const int32_t XEMBED_FOCUS_CURRENT = 0;
	static const int32_t XEMBED_FOCUS_FIRST = 1;
	static const int32_t XEMBED_FOCUS_LAST = 2;
	static const int32_t XEMBED_MODIFIER_SHIFT = 1; // (1 << 0)
	static const int32_t XEMBED_MODIFIER_CONTROL = 2; // (1 << 1)
	static const int32_t XEMBED_MODIFIER_ALT = 4; // (1 << 2)
	static const int32_t XEMBED_MODIFIER_SUPER = 8; // (1 << 3)
	static const int32_t XEMBED_MODIFIER_HYPER = 16; // (1 << 4)
	static ::sun::awt::X11::XAtom* XEmbedInfo;
	static ::sun::awt::X11::XAtom* XEmbed;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("NON_STANDARD_XEMBED_GTK_GRAB_KEY")
#pragma pop_macro("NON_STANDARD_XEMBED_GTK_UNGRAB_KEY")
#pragma pop_macro("XEMBED_ACTIVATE_ACCELERATOR")
#pragma pop_macro("XEMBED_EMBEDDED_NOTIFY")
#pragma pop_macro("XEMBED_FOCUS_CURRENT")
#pragma pop_macro("XEMBED_FOCUS_FIRST")
#pragma pop_macro("XEMBED_FOCUS_IN")
#pragma pop_macro("XEMBED_FOCUS_LAST")
#pragma pop_macro("XEMBED_FOCUS_NEXT")
#pragma pop_macro("XEMBED_FOCUS_OUT")
#pragma pop_macro("XEMBED_FOCUS_PREV")
#pragma pop_macro("XEMBED_GRAB_KEY")
#pragma pop_macro("XEMBED_MAPPED")
#pragma pop_macro("XEMBED_MODALITY_OFF")
#pragma pop_macro("XEMBED_MODALITY_ON")
#pragma pop_macro("XEMBED_MODIFIER_ALT")
#pragma pop_macro("XEMBED_MODIFIER_CONTROL")
#pragma pop_macro("XEMBED_MODIFIER_HYPER")
#pragma pop_macro("XEMBED_MODIFIER_SHIFT")
#pragma pop_macro("XEMBED_MODIFIER_SUPER")
#pragma pop_macro("XEMBED_REGISTER_ACCELERATOR")
#pragma pop_macro("XEMBED_REQUEST_FOCUS")
#pragma pop_macro("XEMBED_UNGRAB_KEY")
#pragma pop_macro("XEMBED_UNREGISTER_ACCELERATOR")
#pragma pop_macro("XEMBED_VERSION")
#pragma pop_macro("XEMBED_WINDOW_ACTIVATE")
#pragma pop_macro("XEMBED_WINDOW_DEACTIVATE")

#endif // _sun_awt_X11_XEmbedHelper_h_