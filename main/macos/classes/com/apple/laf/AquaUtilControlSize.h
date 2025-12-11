#ifndef _com_apple_laf_AquaUtilControlSize_h_
#define _com_apple_laf_AquaUtilControlSize_h_
//$ class com.apple.laf.AquaUtilControlSize
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CLIENT_PROPERTY_KEY")
#undef CLIENT_PROPERTY_KEY
#pragma push_macro("SYSTEM_PROPERTY_KEY")
#undef SYSTEM_PROPERTY_KEY

namespace apple {
	namespace laf {
		class JRSUIConstants$Size;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
			class AquaUtilControlSize$PropertySizeListener;
			class AquaUtils$RecyclableSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Font;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaUtilControlSize : public ::java::lang::Object {
	$class(AquaUtilControlSize, 0, ::java::lang::Object)
public:
	AquaUtilControlSize();
	void init$();
	static void addSizePropertyListener(::javax::swing::JComponent* c);
	static void applyBorderForSize(::javax::swing::JComponent* c, ::apple::laf::JRSUIConstants$Size* size);
	static ::apple::laf::JRSUIConstants$Size* applySizeForControl(::javax::swing::JComponent* c, ::com::apple::laf::AquaPainter* painter);
	static ::apple::laf::JRSUIConstants$Size* getDefaultSize();
	static ::java::awt::Font* getFontForSize(::java::awt::Component* c, ::apple::laf::JRSUIConstants$Size* size);
	static ::apple::laf::JRSUIConstants$Size* getSizeFromString($String* name);
	static ::com::apple::laf::AquaUtilControlSize$PropertySizeListener* getSizeListener();
	static ::apple::laf::JRSUIConstants$Size* getUserSizeFrom(::javax::swing::JComponent* c);
	static void removeSizePropertyListener(::javax::swing::JComponent* c);
	static $String* CLIENT_PROPERTY_KEY;
	static $String* SYSTEM_PROPERTY_KEY;
	static ::com::apple::laf::AquaUtils$RecyclableSingleton* sizeListener;
	static ::apple::laf::JRSUIConstants$Size* defaultSize;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("CLIENT_PROPERTY_KEY")
#pragma pop_macro("SYSTEM_PROPERTY_KEY")

#endif // _com_apple_laf_AquaUtilControlSize_h_