#ifndef _sun_awt_image_VSyncedBSManager_h_
#define _sun_awt_image_VSyncedBSManager_h_
//$ class sun.awt.image.VSyncedBSManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class VSyncedBSManager : public ::java::lang::Object {
	$class(VSyncedBSManager, 0, ::java::lang::Object)
public:
	VSyncedBSManager();
	void init$();
	virtual bool checkAllowed(::java::awt::image::BufferStrategy* bs) {return false;}
	static ::sun::awt::image::VSyncedBSManager* getInstance(bool create);
	static void releaseVsync(::java::awt::image::BufferStrategy* bs);
	virtual void relinquishVsync(::java::awt::image::BufferStrategy* bs) {}
	static bool vsyncAllowed(::java::awt::image::BufferStrategy* bs);
	static ::sun::awt::image::VSyncedBSManager* theInstance;
	static bool vSyncLimit;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_VSyncedBSManager_h_