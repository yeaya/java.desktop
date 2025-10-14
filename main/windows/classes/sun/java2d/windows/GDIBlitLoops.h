#ifndef _sun_java2d_windows_GDIBlitLoops_h_
#define _sun_java2d_windows_GDIBlitLoops_h_
//$ class sun.java2d.windows.GDIBlitLoops
//$ extends sun.java2d.loops.Blit

#include <sun/java2d/loops/Blit.h>

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
		namespace windows {

class GDIBlitLoops : public ::sun::java2d::loops::Blit {
	$class(GDIBlitLoops, $NO_CLASS_INIT, ::sun::java2d::loops::Blit)
public:
	GDIBlitLoops();
	void init$(::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::SurfaceType* dstType);
	void init$(::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::SurfaceType* dstType, bool indexed);
	void init$(::sun::java2d::loops::SurfaceType* srcType, ::sun::java2d::loops::SurfaceType* dstType, int32_t rmask, int32_t gmask, int32_t bmask);
	virtual void Blit$(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::java::awt::Composite* comp, ::sun::java2d::pipe::Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h) override;
	virtual void nativeBlit(::sun::java2d::SurfaceData* src, ::sun::java2d::SurfaceData* dst, ::sun::java2d::pipe::Region* clip, int32_t sx, int32_t sy, int32_t dx, int32_t dy, int32_t w, int32_t h, int32_t rmask, int32_t gmask, int32_t bmask, bool needLut);
	static void register$();
	int32_t rmask = 0;
	int32_t gmask = 0;
	int32_t bmask = 0;
	bool indexed = false;
};

		} // windows
	} // java2d
} // sun

#endif // _sun_java2d_windows_GDIBlitLoops_h_