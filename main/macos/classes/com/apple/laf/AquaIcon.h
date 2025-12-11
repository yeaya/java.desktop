#ifndef _com_apple_laf_AquaIcon_h_
#define _com_apple_laf_AquaIcon_h_
//$ class com.apple.laf.AquaIcon
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaIcon$JRSUIControlSpec;
		}
	}
}
namespace java {
	namespace awt {
		class Image;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class UIResource;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaIcon : public ::java::lang::Object {
	$class(AquaIcon, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaIcon();
	void init$();
	static ::javax::swing::plaf::UIResource* getIconFor(::com::apple::laf::AquaIcon$JRSUIControlSpec* spec, int32_t width, int32_t height);
	static ::java::awt::Image* getImageForIcon(::javax::swing::Icon* i);
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaIcon_h_