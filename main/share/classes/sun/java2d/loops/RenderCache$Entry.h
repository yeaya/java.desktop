#ifndef _sun_java2d_loops_RenderCache$Entry_h_
#define _sun_java2d_loops_RenderCache$Entry_h_
//$ class sun.java2d.loops.RenderCache$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
		namespace loops {

class RenderCache$Entry : public ::java::lang::Object {
	$class(RenderCache$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RenderCache$Entry();
	void init$(::sun::java2d::loops::RenderCache* this$0, ::sun::java2d::loops::SurfaceType* src, ::sun::java2d::loops::CompositeType* comp, ::sun::java2d::loops::SurfaceType* dst, Object$* value);
	$Object* getValue();
	bool matches(::sun::java2d::loops::SurfaceType* src, ::sun::java2d::loops::CompositeType* comp, ::sun::java2d::loops::SurfaceType* dst);
	::sun::java2d::loops::RenderCache* this$0 = nullptr;
	::sun::java2d::loops::SurfaceType* src = nullptr;
	::sun::java2d::loops::CompositeType* comp = nullptr;
	::sun::java2d::loops::SurfaceType* dst = nullptr;
	$Object* value = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_RenderCache$Entry_h_