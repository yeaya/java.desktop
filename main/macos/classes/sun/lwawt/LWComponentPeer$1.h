#ifndef _sun_lwawt_LWComponentPeer$1_h_
#define _sun_lwawt_LWComponentPeer$1_h_
//$ class sun.lwawt.LWComponentPeer$1
//$ extends javax.swing.RepaintManager

#include <javax/swing/RepaintManager.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace sun {
	namespace lwawt {
		class LWComponentPeer;
	}
}

namespace sun {
	namespace lwawt {

class LWComponentPeer$1 : public ::javax::swing::RepaintManager {
	$class(LWComponentPeer$1, $NO_CLASS_INIT, ::javax::swing::RepaintManager)
public:
	LWComponentPeer$1();
	using ::javax::swing::RepaintManager::addDirtyRegion;
	void init$(::sun::lwawt::LWComponentPeer* this$0);
	virtual void addDirtyRegion(::javax::swing::JComponent* c, int32_t x, int32_t y, int32_t w, int32_t h) override;
	::sun::lwawt::LWComponentPeer* this$0 = nullptr;
};

	} // lwawt
} // sun

#endif // _sun_lwawt_LWComponentPeer$1_h_