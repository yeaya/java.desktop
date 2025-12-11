#ifndef _com_apple_laf_AquaImageFactory_h_
#define _com_apple_laf_AquaImageFactory_h_
//$ class com.apple.laf.AquaImageFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaIcon$SystemIcon;
			class AquaImageFactory$IconUIResourceSingleton;
			class AquaImageFactory$NamedImageSingleton;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Image;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
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
			class IconUIResource;
			class UIResource;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaImageFactory : public ::java::lang::Object {
	$class(AquaImageFactory, 0, ::java::lang::Object)
public:
	AquaImageFactory();
	void init$();
	static ::javax::swing::plaf::IconUIResource* getAppIconCompositedOn(::com::apple::laf::AquaIcon$SystemIcon* systemIcon);
	static ::javax::swing::plaf::IconUIResource* getAppIconCompositedOn(::java::awt::Image* background);
	static ::java::awt::image::BufferedImage* getAppIconImageCompositedOn(::java::awt::Image* background, int32_t scaleFactor);
	static ::javax::swing::Icon* getArrowIconForDirection(int32_t direction);
	static ::java::awt::Image* getArrowImageForDirection(int32_t direction);
	static ::javax::swing::plaf::IconUIResource* getCautionImageIcon();
	static ::javax::swing::plaf::IconUIResource* getConfirmImageIcon();
	static ::java::awt::Color* getFocusRingColorUIResource();
	static ::java::awt::Image* getGenericJavaIcon();
	static ::javax::swing::plaf::IconUIResource* getLockImageIcon();
	static ::javax::swing::Icon* getMenuArrowIcon();
	static ::javax::swing::Icon* getMenuItemCheckIcon();
	static ::javax::swing::Icon* getMenuItemDashIcon();
	static ::java::awt::Image* getNSIcon($String* imageName);
	static $String* getPathToThisApplication();
	static ::java::awt::Color* getSelectedControlColorUIResource();
	static ::java::awt::Color* getSelectionBackgroundColorUIResource();
	static ::java::awt::Color* getSelectionForegroundColorUIResource();
	static ::java::awt::Color* getSelectionInactiveBackgroundColorUIResource();
	static ::java::awt::Color* getSelectionInactiveForegroundColorUIResource();
	static ::javax::swing::plaf::IconUIResource* getStopImageIcon();
	static ::java::awt::Color* getTextSelectionBackgroundColorUIResource();
	static ::java::awt::Color* getTextSelectionForegroundColorUIResource();
	static ::javax::swing::plaf::UIResource* getTreeCollapsedIcon();
	static ::javax::swing::plaf::IconUIResource* getTreeDocumentIcon();
	static ::javax::swing::plaf::UIResource* getTreeExpandedIcon();
	static ::javax::swing::plaf::IconUIResource* getTreeFolderIcon();
	static ::javax::swing::plaf::IconUIResource* getTreeOpenFolderIcon();
	static ::javax::swing::plaf::UIResource* getTreeRightToLeftCollapsedIcon();
	static ::java::awt::Color* getWindowBackgroundColorUIResource();
	static ::java::awt::Image* lambda$getAppIconCompositedOn$0(int32_t width, ::java::awt::Image* rv);
	static const int32_t kAlertIconSize = 64;
	static ::com::apple::laf::AquaImageFactory$NamedImageSingleton* northArrow;
	static ::com::apple::laf::AquaImageFactory$IconUIResourceSingleton* northArrowIcon;
	static ::com::apple::laf::AquaImageFactory$NamedImageSingleton* southArrow;
	static ::com::apple::laf::AquaImageFactory$IconUIResourceSingleton* southArrowIcon;
	static ::com::apple::laf::AquaImageFactory$NamedImageSingleton* westArrow;
	static ::com::apple::laf::AquaImageFactory$IconUIResourceSingleton* westArrowIcon;
	static ::com::apple::laf::AquaImageFactory$NamedImageSingleton* eastArrow;
	static ::com::apple::laf::AquaImageFactory$IconUIResourceSingleton* eastArrowIcon;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaImageFactory_h_