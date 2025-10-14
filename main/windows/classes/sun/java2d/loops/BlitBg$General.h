#ifndef _sun_java2d_loops_BlitBg$General_h_
#define _sun_java2d_loops_BlitBg$General_h_
//$ class sun.java2d.loops.BlitBg$General
//$ extends sun.java2d.loops.BlitBg

#include <sun/java2d/loops/BlitBg.h>

namespace java {
	namespace awt {
		class Composite;
		class Font;
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

class BlitBg$General : public ::sun::java2d::loops::BlitBg {
	$class(BlitBg$General, 0, ::sun::java2d::loops::BlitBg)
public:
	BlitBg$General();
	void init$(::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	virtual void BlitBg$(::sun::java2d::SurfaceData* srcData, ::sun::java2d::SurfaceData* dstData, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t bgArgb, int32_t srcx, int32_t srcy, int32_t dstx, int32_t dsty, int32_t width, int32_t height) override;
	::sun::java2d::loops::CompositeType* compositeType = nullptr;
	static ::java::awt::Font* defaultFont;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_BlitBg$General_h_