#ifndef _javax_swing_GraphicsWrapper_h_
#define _javax_swing_GraphicsWrapper_h_
//$ interface javax.swing.GraphicsWrapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
	}
}

namespace javax {
	namespace swing {

class GraphicsWrapper : public ::java::lang::Object {
	$interface(GraphicsWrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getClipHeight() {return 0;}
	virtual int32_t getClipWidth() {return 0;}
	virtual int32_t getClipX() {return 0;}
	virtual int32_t getClipY() {return 0;}
	virtual bool isClipIntersecting(::java::awt::Rectangle* r) {return false;}
	virtual ::java::awt::Graphics* subGraphics() {return nullptr;}
};

	} // swing
} // javax

#endif // _javax_swing_GraphicsWrapper_h_