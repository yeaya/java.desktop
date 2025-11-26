#ifndef _sun_awt_dnd_SunDragSourceContextPeer$1_h_
#define _sun_awt_dnd_SunDragSourceContextPeer$1_h_
//$ class sun.awt.dnd.SunDragSourceContextPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace dnd {
			class SunDragSourceContextPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace dnd {

class SunDragSourceContextPeer$1 : public ::java::lang::Runnable {
	$class(SunDragSourceContextPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SunDragSourceContextPeer$1();
	void init$(::sun::awt::dnd::SunDragSourceContextPeer* this$0);
	virtual void run() override;
	::sun::awt::dnd::SunDragSourceContextPeer* this$0 = nullptr;
};

		} // dnd
	} // awt
} // sun

#endif // _sun_awt_dnd_SunDragSourceContextPeer$1_h_