#ifndef _com_apple_laf_AquaFonts_h_
#define _com_apple_laf_AquaFonts_h_
//$ class com.apple.laf.AquaFonts
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAC_DEFAULT_FONT_NAME")
#undef MAC_DEFAULT_FONT_NAME

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtils$RecyclableSingleton;
		}
	}
}
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

namespace com {
	namespace apple {
		namespace laf {

class AquaFonts : public ::java::lang::Object {
	$class(AquaFonts, 0, ::java::lang::Object)
public:
	AquaFonts();
	void init$();
	static ::javax::swing::plaf::FontUIResource* getAlertHeaderFont();
	static ::javax::swing::plaf::FontUIResource* getAlertMessageFont();
	static ::javax::swing::plaf::FontUIResource* getControlTextFont();
	static ::javax::swing::plaf::FontUIResource* getControlTextSmallFont();
	static ::java::awt::Font* getDockIconFont();
	static ::javax::swing::plaf::FontUIResource* getMenuFont();
	static ::javax::swing::plaf::FontUIResource* getMiniControlTextFont();
	static ::javax::swing::plaf::FontUIResource* getSmallControlTextFont();
	static ::javax::swing::plaf::FontUIResource* getViewFont();
	static $String* MAC_DEFAULT_FONT_NAME;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* lucida9Pt;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* lucida11Pt;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* lucida12Pt;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* lucida13Pt;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* lucida14Pt;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* lucida13PtBold;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* lucida14PtBold;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("MAC_DEFAULT_FONT_NAME")

#endif // _com_apple_laf_AquaFonts_h_