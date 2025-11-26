#ifndef _javax_swing_plaf_metal_DefaultMetalTheme$FontDelegate_h_
#define _javax_swing_plaf_metal_DefaultMetalTheme$FontDelegate_h_
//$ class javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class FontUIResource;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class DefaultMetalTheme$FontDelegate : public ::java::lang::Object {
	$class(DefaultMetalTheme$FontDelegate, 0, ::java::lang::Object)
public:
	DefaultMetalTheme$FontDelegate();
	void init$();
	virtual ::javax::swing::plaf::FontUIResource* getFont(int32_t type);
	virtual ::java::awt::Font* getPrivilegedFont(int32_t key);
	static $ints* defaultMapping;
	$Array<::javax::swing::plaf::FontUIResource>* fonts = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_DefaultMetalTheme$FontDelegate_h_