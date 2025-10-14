#ifndef _sun_java2d_pipe_GeneralCompositePipe$TileContext_h_
#define _sun_java2d_pipe_GeneralCompositePipe$TileContext_h_
//$ class sun.java2d.pipe.GeneralCompositePipe$TileContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class CompositeContext;
		class PaintContext;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace sun {
	namespace java2d {
		class SunGraphics2D;
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class GeneralCompositePipe;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace pipe {

class GeneralCompositePipe$TileContext : public ::java::lang::Object {
	$class(GeneralCompositePipe$TileContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GeneralCompositePipe$TileContext();
	void init$(::sun::java2d::pipe::GeneralCompositePipe* this$0, ::sun::java2d::SunGraphics2D* sg, ::java::awt::PaintContext* pCtx, ::java::awt::CompositeContext* cCtx, ::java::awt::image::ColorModel* cModel);
	::sun::java2d::pipe::GeneralCompositePipe* this$0 = nullptr;
	::sun::java2d::SunGraphics2D* sunG2D = nullptr;
	::java::awt::PaintContext* paintCtxt = nullptr;
	::java::awt::CompositeContext* compCtxt = nullptr;
	::java::awt::image::ColorModel* compModel = nullptr;
	$Object* pipeState = nullptr;
};

		} // pipe
	} // java2d
} // sun

#endif // _sun_java2d_pipe_GeneralCompositePipe$TileContext_h_