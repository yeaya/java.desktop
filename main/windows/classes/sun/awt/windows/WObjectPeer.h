#ifndef _sun_awt_windows_WObjectPeer_h_
#define _sun_awt_windows_WObjectPeer_h_
//$ class sun.awt.windows.WObjectPeer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Error;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WObjectPeer : public ::java::lang::Object {
	$class(WObjectPeer, 0, ::java::lang::Object)
public:
	WObjectPeer();
	void init$();
	void addChildPeer(::sun::awt::windows::WObjectPeer* child);
	void dispose();
	void disposeChildPeers();
	virtual void disposeImpl() {}
	virtual int64_t getData();
	static ::sun::awt::windows::WObjectPeer* getPeerForTarget(Object$* t);
	$Object* getStateLock();
	virtual $Object* getTarget();
	static void initIDs();
	bool isDisposed();
	$volatile(int64_t) pData = 0;
	$volatile(bool) destroyed = false;
	$volatile($Object*) target = nullptr;
	$volatile(bool) disposed = false;
	$volatile(::java::lang::Error*) createError = nullptr;
	$Object* stateLock = nullptr;
	$volatile(::java::util::Map*) childPeers = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WObjectPeer_h_