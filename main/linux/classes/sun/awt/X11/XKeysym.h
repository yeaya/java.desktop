#ifndef _sun_awt_X11_XKeysym_h_
#define _sun_awt_X11_XKeysym_h_
//$ class sun.awt.X11.XKeysym
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Hashtable;
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
			class XKeyEvent;
			class XKeysym$Keysym2JavaKeycode;
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

class XKeysym : public ::java::lang::Object {
	$class(XKeysym, 0, ::java::lang::Object)
public:
	XKeysym();
	void init$();
	static char16_t convertKeysym(int64_t ks, int32_t state);
	static ::sun::awt::X11::XKeysym$Keysym2JavaKeycode* getJavaKeycode(int64_t keysym);
	static ::sun::awt::X11::XKeysym$Keysym2JavaKeycode* getJavaKeycode(::sun::awt::X11::XKeyEvent* ev);
	static int32_t getJavaKeycodeOnly(::sun::awt::X11::XKeyEvent* ev);
	static int64_t getKeypadKeysym(::sun::awt::X11::XKeyEvent* ev);
	static int64_t getKeysym(::sun::awt::X11::XKeyEvent* ev);
	static int32_t getLegacyJavaKeycodeOnly(::sun::awt::X11::XKeyEvent* ev);
	static int64_t getUppercaseAlphabetic(int64_t keysym);
	static bool isKPEvent(::sun::awt::X11::XKeyEvent* ev);
	static int64_t javaKeycode2Keysym(int32_t jkey);
	static int64_t xkeycode2keysym(::sun::awt::X11::XKeyEvent* ev, int32_t ndx);
	static int64_t xkeycode2keysym_noxkb(::sun::awt::X11::XKeyEvent* ev, int32_t ndx);
	static int64_t xkeycode2keysym_xkb(::sun::awt::X11::XKeyEvent* ev, int32_t ndx);
	static int64_t xkeycode2primary_keysym(::sun::awt::X11::XKeyEvent* ev);
	static ::jdk::internal::misc::Unsafe* unsafe;
	static ::java::util::Hashtable* keysym2JavaKeycodeHash;
	static ::java::util::Hashtable* keysym2UCSHash;
	static ::java::util::Hashtable* uppercaseHash;
	static ::java::util::Hashtable* javaKeycode2KeysymHash;
	static int64_t keysym_lowercase;
	static int64_t keysym_uppercase;
	static ::sun::awt::X11::XKeysym$Keysym2JavaKeycode* kanaLock;
	static ::sun::util::logging::PlatformLogger* keyEventLog;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XKeysym_h_