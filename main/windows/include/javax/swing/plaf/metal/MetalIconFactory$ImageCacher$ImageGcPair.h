#ifndef _javax_swing_plaf_metal_MetalIconFactory$ImageCacher$ImageGcPair_h_
#define _javax_swing_plaf_metal_MetalIconFactory$ImageCacher$ImageGcPair_h_
//$ class javax.swing.plaf.metal.MetalIconFactory$ImageCacher$ImageGcPair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Image;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalIconFactory$ImageCacher;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalIconFactory$ImageCacher$ImageGcPair : public ::java::lang::Object {
	$class(MetalIconFactory$ImageCacher$ImageGcPair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MetalIconFactory$ImageCacher$ImageGcPair();
	void init$(::javax::swing::plaf::metal::MetalIconFactory$ImageCacher* this$0, ::java::awt::Image* image, ::java::awt::GraphicsConfiguration* gc);
	virtual bool hasSameConfiguration(::java::awt::GraphicsConfiguration* newGC);
	::javax::swing::plaf::metal::MetalIconFactory$ImageCacher* this$0 = nullptr;
	::java::awt::Image* image = nullptr;
	::java::awt::GraphicsConfiguration* gc = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalIconFactory$ImageCacher$ImageGcPair_h_