#ifndef _sun_java2d_loops_GraphicsPrimitiveProxy_h_
#define _sun_java2d_loops_GraphicsPrimitiveProxy_h_
//$ class sun.java2d.loops.GraphicsPrimitiveProxy
//$ extends sun.java2d.loops.GraphicsPrimitive

#include <sun/java2d/loops/GraphicsPrimitive.h>

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
		namespace loops {

class GraphicsPrimitiveProxy : public ::sun::java2d::loops::GraphicsPrimitive {
	$class(GraphicsPrimitiveProxy, $NO_CLASS_INIT, ::sun::java2d::loops::GraphicsPrimitive)
public:
	GraphicsPrimitiveProxy();
	void init$($Class* owner, $String* relativeClassName, $String* methodSignature, int32_t primID, ::sun::java2d::loops::SurfaceType* srctype, ::sun::java2d::loops::CompositeType* comptype, ::sun::java2d::loops::SurfaceType* dsttype);
	static $String* getPackageName($String* className);
	virtual ::sun::java2d::loops::GraphicsPrimitive* instantiate();
	virtual ::sun::java2d::loops::GraphicsPrimitive* traceWrap() override;
	$Class* owner = nullptr;
	$String* relativeClassName = nullptr;
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_GraphicsPrimitiveProxy_h_