#ifndef _javax_swing_plaf_metal_MetalIconFactory$ImageCacher_h_
#define _javax_swing_plaf_metal_MetalIconFactory$ImageCacher_h_
//$ class javax.swing.plaf.metal.MetalIconFactory$ImageCacher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
		class Image;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalIconFactory$ImageCacher$ImageGcPair;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalIconFactory$ImageCacher : public ::java::lang::Object {
	$class(MetalIconFactory$ImageCacher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MetalIconFactory$ImageCacher();
	void init$();
	virtual void cacheImage(::java::awt::Image* image, ::java::awt::GraphicsConfiguration* gc);
	virtual ::java::awt::Image* getImage(::java::awt::GraphicsConfiguration* newGC);
	::java::util::Vector* images = nullptr;
	::javax::swing::plaf::metal::MetalIconFactory$ImageCacher$ImageGcPair* currentImageGcPair = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalIconFactory$ImageCacher_h_