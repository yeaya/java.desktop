#ifndef _sun_java2d_loops_GraphicsPrimitive$GeneralBinaryOp_h_
#define _sun_java2d_loops_GraphicsPrimitive$GeneralBinaryOp_h_
//$ interface sun.java2d.loops.GraphicsPrimitive$GeneralBinaryOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace loops {
			class Blit;
			class CompositeType;
			class GraphicsPrimitive;
			class SurfaceType;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class GraphicsPrimitive$GeneralBinaryOp : public ::java::lang::Object {
	$interface(GraphicsPrimitive$GeneralBinaryOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::java2d::loops::CompositeType* getCompositeType() {return nullptr;}
	virtual ::sun::java2d::loops::SurfaceType* getDestType() {return nullptr;}
	virtual int32_t getPrimTypeID() {return 0;}
	virtual $String* getSignature() {return nullptr;}
	virtual ::sun::java2d::loops::SurfaceType* getSourceType() {return nullptr;}
	virtual void setPrimitives(::sun::java2d::loops::Blit* srcconverter, ::sun::java2d::loops::Blit* dstconverter, ::sun::java2d::loops::GraphicsPrimitive* genericop, ::sun::java2d::loops::Blit* resconverter) {}
};

		} // loops
	} // java2d
} // sun

#endif // _sun_java2d_loops_GraphicsPrimitive$GeneralBinaryOp_h_