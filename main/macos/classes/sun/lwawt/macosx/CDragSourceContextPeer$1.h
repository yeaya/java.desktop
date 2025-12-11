#ifndef _sun_lwawt_macosx_CDragSourceContextPeer$1_h_
#define _sun_lwawt_macosx_CDragSourceContextPeer$1_h_
//$ class sun.lwawt.macosx.CDragSourceContextPeer$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace sun {
	namespace lwawt {
		namespace macosx {
			class CDragSourceContextPeer;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CDragSourceContextPeer$1 : public ::java::util::concurrent::Callable {
	$class(CDragSourceContextPeer$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	CDragSourceContextPeer$1();
	void init$(::sun::lwawt::macosx::CDragSourceContextPeer* this$0, int32_t val$x, int32_t val$y);
	virtual $Object* call() override;
	::sun::lwawt::macosx::CDragSourceContextPeer* this$0 = nullptr;
	int32_t val$y = 0;
	int32_t val$x = 0;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CDragSourceContextPeer$1_h_