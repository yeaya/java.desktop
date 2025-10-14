#ifndef _sun_awt_image_VSyncedBSManager$NoLimitVSyncBSMgr_h_
#define _sun_awt_image_VSyncedBSManager$NoLimitVSyncBSMgr_h_
//$ class sun.awt.image.VSyncedBSManager$NoLimitVSyncBSMgr
//$ extends sun.awt.image.VSyncedBSManager

#include <sun/awt/image/VSyncedBSManager.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferStrategy;
		}
	}
}

namespace sun {
	namespace awt {
		namespace image {

class VSyncedBSManager$NoLimitVSyncBSMgr : public ::sun::awt::image::VSyncedBSManager {
	$class(VSyncedBSManager$NoLimitVSyncBSMgr, $NO_CLASS_INIT, ::sun::awt::image::VSyncedBSManager)
public:
	VSyncedBSManager$NoLimitVSyncBSMgr();
	void init$();
	virtual bool checkAllowed(::java::awt::image::BufferStrategy* bs) override;
	virtual void relinquishVsync(::java::awt::image::BufferStrategy* bs) override;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_VSyncedBSManager$NoLimitVSyncBSMgr_h_