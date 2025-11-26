#ifndef _sun_java2d_SurfaceDataProxy_h_
#define _sun_java2d_SurfaceDataProxy_h_
//$ class sun.java2d.SurfaceDataProxy
//$ extends sun.awt.DisplayChangedListener
//$ implements sun.awt.image.SurfaceManager$FlushableCacheData

#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/image/SurfaceManager$FlushableCacheData.h>

#pragma push_macro("UNCACHED")
#undef UNCACHED

namespace java {
	namespace awt {
		class Color;
	}
}
namespace sun {
	namespace java2d {
		class StateTracker;
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

class SurfaceDataProxy : public ::sun::awt::DisplayChangedListener, public ::sun::awt::image::SurfaceManager$FlushableCacheData {
	$class(SurfaceDataProxy, 0, ::sun::awt::DisplayChangedListener, ::sun::awt::image::SurfaceManager$FlushableCacheData)
public:
	SurfaceDataProxy();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t threshold);
	virtual void activateDisplayListener();
	virtual void displayChanged() override;
	virtual bool flush(bool deaccelerated) override;
	virtual void flush();
	virtual ::sun::java2d::StateTracker* getRetryTracker(::sun::java2d::SurfaceData* srcData);
	virtual void invalidate();
	virtual bool isAccelerated();
	static bool isCachingAllowed();
	virtual bool isSupportedOperation(::sun::java2d::SurfaceData* srcData, int32_t txtype, ::sun::java2d::loops::CompositeType* comp, ::java::awt::Color* bgColor) {return false;}
	virtual bool isValid();
	virtual void paletteChanged() override;
	virtual ::sun::java2d::SurfaceData* replaceData(::sun::java2d::SurfaceData* srcData, int32_t txtype, ::sun::java2d::loops::CompositeType* comp, ::java::awt::Color* bgColor);
	virtual $String* toString() override;
	virtual void updateSurfaceData(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* dstData, int32_t w, int32_t h);
	virtual void updateSurfaceDataBg(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* dstData, int32_t w, int32_t h, ::java::awt::Color* bgColor);
	virtual ::sun::java2d::SurfaceData* validateSurfaceData(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* cachedData, int32_t w, int32_t h) {return nullptr;}
	static bool cachingAllowed;
	static int32_t defaultThreshold;
	static ::sun::java2d::SurfaceDataProxy* UNCACHED;
	int32_t threshold = 0;
	::sun::java2d::StateTracker* srcTracker = nullptr;
	int32_t numtries = 0;
	::sun::java2d::SurfaceData* cachedSD = nullptr;
	::sun::java2d::StateTracker* cacheTracker = nullptr;
	bool valid = false;
};

	} // java2d
} // sun

#pragma pop_macro("UNCACHED")

#endif // _sun_java2d_SurfaceDataProxy_h_