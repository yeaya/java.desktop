#ifndef _sun_java2d_loops_BlitBg_h_
#define _sun_java2d_loops_BlitBg_h_
//$ class sun.java2d.loops.BlitBg
//$ extends sun.java2d.loops.GraphicsPrimitive

#include <sun/java2d/loops/GraphicsPrimitive.h>

namespace java {
	namespace awt {
		class Composite;
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
			class RenderCache;
			class SurfaceType;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class BlitBg : public ::sun::java2d::loops::GraphicsPrimitive {
	$class(BlitBg, 0, ::sun::java2d::loops::GraphicsPrimitive)
public:
	BlitBg();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	void init$(int64_t pNativePrim, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void BlitBg$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t bgColor, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height);
	static ::sun::java2d::loops::BlitBg* getFromCache(::sun::java2d::loops::SurfaceType* src, ::sun::java2d::loops::CompositeType* comp, ::sun::java2d::loops::SurfaceType* dst);
	static ::sun::java2d::loops::BlitBg* locate(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual ::sun::java2d::loops::GraphicsPrimitive* makePrimitive(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype) override;
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	static $String* methodSignature;
	static int32_t primTypeID;
	static ::sun::java2d::loops::RenderCache* blitcache;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_BlitBg_h_