#ifndef _sun_awt_image_BufImgSurfaceManager_h_
#define _sun_awt_image_BufImgSurfaceManager_h_
//$ class sun.awt.image.BufImgSurfaceManager
//$ extends sun.awt.image.SurfaceManager

#include <sun/awt/image/SurfaceManager.h>

namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}

namespace sun {
	namespace awt {
		namespace image {

class BufImgSurfaceManager : public ::sun::awt::image::SurfaceManager {
	$class(BufImgSurfaceManager, $NO_CLASS_INIT, ::sun::awt::image::SurfaceManager)
public:
	BufImgSurfaceManager();
	void init$(::java::awt::image::BufferedImage* bImg);
	virtual ::sun::java2d::SurfaceData* getPrimarySurfaceData() override;
	virtual ::sun::java2d::SurfaceData* restoreContents() override;
	::java::awt::image::BufferedImage* bImg = nullptr;
	::sun::java2d::SurfaceData* sdDefault = nullptr;
};

		} // image
	} // awt
} // sun

#endif // _sun_awt_image_BufImgSurfaceManager_h_