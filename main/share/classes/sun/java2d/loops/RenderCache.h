#ifndef _sun_java2d_loops_RenderCache_h_
#define _sun_java2d_loops_RenderCache_h_
//$ class sun.java2d.loops.RenderCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace loops {
			class CompositeType;
			class RenderCache$Entry;
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class RenderCache : public ::java::lang::Object {
	$class(RenderCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RenderCache();
	void init$(int32_t size);
	$Object* get(::sun::java2d::loops::SurfaceType* src, ::sun::java2d::loops::CompositeType* comp, ::sun::java2d::loops::SurfaceType* dst);
	void put(::sun::java2d::loops::SurfaceType* src, ::sun::java2d::loops::CompositeType* comp, ::sun::java2d::loops::SurfaceType* dst, Object$* value);
	$Array<::sun::java2d::loops::RenderCache$Entry>* entries = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_RenderCache_h_