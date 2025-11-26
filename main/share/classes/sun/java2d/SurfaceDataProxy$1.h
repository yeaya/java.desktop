#ifndef _sun_java2d_SurfaceDataProxy$1_h_
#define _sun_java2d_SurfaceDataProxy$1_h_
//$ class sun.java2d.SurfaceDataProxy$1
//$ extends sun.java2d.SurfaceDataProxy

#include <sun/java2d/SurfaceDataProxy.h>

namespace java {
	namespace awt {
		class Color;
	}
}
namespace sun {
	namespace java2d {
		class SurfaceData;
	}
}
namespace sun {
	namespace java2d {
		namespace loops {
			class CompositeType;
		}
	}
}

namespace sun {
	namespace java2d {

class SurfaceDataProxy$1 : public ::sun::java2d::SurfaceDataProxy {
	$class(SurfaceDataProxy$1, $NO_CLASS_INIT, ::sun::java2d::SurfaceDataProxy)
public:
	SurfaceDataProxy$1();
	void init$(int32_t threshold);
	virtual bool isAccelerated() override;
	virtual bool isSupportedOperation(::sun::java2d::SurfaceData* srcData, int32_t txtype, ::sun::java2d::loops::CompositeType* comp, ::java::awt::Color* bgColor) override;
	virtual ::sun::java2d::SurfaceData* replaceData(::sun::java2d::SurfaceData* srcData, int32_t txtype, ::sun::java2d::loops::CompositeType* comp, ::java::awt::Color* bgColor) override;
	virtual ::sun::java2d::SurfaceData* validateSurfaceData(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* cachedData, int32_t w, int32_t h) override;
};

	} // java2d
} // sun

#endif // _sun_java2d_SurfaceDataProxy$1_h_