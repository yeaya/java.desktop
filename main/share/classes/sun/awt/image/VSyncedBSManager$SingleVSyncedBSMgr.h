#ifndef _sun_awt_image_VSyncedBSManager$SingleVSyncedBSMgr_h_
#define _sun_awt_image_VSyncedBSManager$SingleVSyncedBSMgr_h_
//$ class sun.awt.image.VSyncedBSManager$SingleVSyncedBSMgr
//$ extends sun.awt.image.VSyncedBSManager

#include <sun/awt/image/VSyncedBSManager.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferStrategy;
		}
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class VSyncedBSManager$SingleVSyncedBSMgr : public ::sun::awt::image::VSyncedBSManager {
	$class(VSyncedBSManager$SingleVSyncedBSMgr, $NO_CLASS_INIT, ::sun::awt::image::VSyncedBSManager)
public:
	VSyncedBSManager$SingleVSyncedBSMgr();
	void init$();
	virtual bool checkAllowed(::java::awt::image::BufferStrategy* bs) override;
	virtual void relinquishVsync(::java::awt::image::BufferStrategy* bs) override;
	::java::lang::ref::WeakReference* strategy = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_VSyncedBSManager$SingleVSyncedBSMgr_h_