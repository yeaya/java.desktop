#ifndef _sun_lwawt_macosx_CFRetainedResource_h_
#define _sun_lwawt_macosx_CFRetainedResource_h_
//$ class sun.lwawt.macosx.CFRetainedResource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Lock;
				class ReadWriteLock;
			}
		}
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CFRetainedResource$CFNativeAction;
			class CFRetainedResource$CFNativeActionGet;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CFRetainedResource : public ::java::lang::Object {
	$class(CFRetainedResource, $HAS_FINALIZE | $NO_CLASS_INIT, ::java::lang::Object)
public:
	CFRetainedResource();
	void init$(int64_t ptr, bool disposeOnAppKitThread);
	virtual void dispose();
	void execute(::sun::lwawt::macosx::CFRetainedResource$CFNativeAction* action);
	int64_t executeGet(::sun::lwawt::macosx::CFRetainedResource$CFNativeActionGet* action);
	virtual void finalize() override;
	static void nativeCFRelease(int64_t ptr, bool disposeOnAppKitThread);
	virtual void setPtr(int64_t ptr);
	bool disposeOnAppKitThread = false;
	$volatile(int64_t) ptr = 0;
	::java::util::concurrent::locks::ReadWriteLock* lock = nullptr;
	::java::util::concurrent::locks::Lock* writeLock = nullptr;
	::java::util::concurrent::locks::Lock* readLock = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CFRetainedResource_h_