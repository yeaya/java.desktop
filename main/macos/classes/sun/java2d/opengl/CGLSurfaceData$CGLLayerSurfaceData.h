#ifndef _sun_java2d_opengl_CGLSurfaceData$CGLLayerSurfaceData_h_
#define _sun_java2d_opengl_CGLSurfaceData$CGLLayerSurfaceData_h_
//$ class sun.java2d.opengl.CGLSurfaceData$CGLLayerSurfaceData
//$ extends sun.java2d.opengl.CGLSurfaceData

#include <sun/java2d/opengl/CGLSurfaceData.h>

namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace opengl {
			class CGLGraphicsConfig;
			class CGLLayer;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace opengl {

class CGLSurfaceData$CGLLayerSurfaceData : public ::sun::java2d::opengl::CGLSurfaceData {
	$class(CGLSurfaceData$CGLLayerSurfaceData, $NO_CLASS_INIT, ::sun::java2d::opengl::CGLSurfaceData)
public:
	CGLSurfaceData$CGLLayerSurfaceData();
	void init$(::sun::java2d::opengl::CGLLayer* layer, ::sun::java2d::opengl::CGLGraphicsConfig* gc, int32_t width, int32_t height);
	virtual $Object* getDestination() override;
	virtual ::sun::java2d::SurfaceData* getReplacement() override;
	virtual int32_t getTransparency() override;
	virtual void invalidate() override;
	virtual bool isOnScreen() override;
	::sun::java2d::opengl::CGLLayer* layer = nullptr;
};

		} // opengl
	} // java2d
} // sun

#endif // _sun_java2d_opengl_CGLSurfaceData$CGLLayerSurfaceData_h_