#ifndef _com_apple_laf_AquaNativeResources_h_
#define _com_apple_laf_AquaNativeResources_h_
//$ class com.apple.laf.AquaNativeResources
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaNativeResources : public ::java::lang::Object {
	$class(AquaNativeResources, 0, ::java::lang::Object)
public:
	AquaNativeResources();
	void init$();
	static ::java::awt::image::BufferedImage* getRadioButtonSizerImage();
	static int64_t getWindowBackgroundColor();
	static ::java::awt::Color* getWindowBackgroundColorUIResource();
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* sBackgroundColor;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaNativeResources_h_