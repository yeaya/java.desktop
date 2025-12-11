#ifndef _com_apple_laf_AquaIcon$SystemIcon_h_
#define _com_apple_laf_AquaIcon$SystemIcon_h_
//$ class com.apple.laf.AquaIcon$SystemIcon
//$ extends com.apple.laf.AquaIcon$CachingScalingIcon

#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaIcon$SystemIconSingleton;
			class AquaIcon$SystemIconUIResourceSingleton;
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
		namespace plaf {
			class IconUIResource;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaIcon$SystemIcon : public ::com::apple::laf::AquaIcon$CachingScalingIcon {
	$class(AquaIcon$SystemIcon, 0, ::com::apple::laf::AquaIcon$CachingScalingIcon)
public:
	AquaIcon$SystemIcon();
	void init$($String* iconSelector, int32_t width, int32_t height);
	void init$($String* iconSelector);
	virtual ::java::awt::Image* createImage() override;
	static ::com::apple::laf::AquaIcon$SystemIcon* getCautionIcon();
	static ::javax::swing::plaf::IconUIResource* getComputerIconUIResource();
	static ::javax::swing::plaf::IconUIResource* getDesktopIconUIResource();
	static ::javax::swing::plaf::IconUIResource* getDocumentIconUIResource();
	static ::javax::swing::plaf::IconUIResource* getFloppyIconUIResource();
	static ::javax::swing::plaf::IconUIResource* getFolderIconUIResource();
	static ::javax::swing::plaf::IconUIResource* getHardDriveIconUIResource();
	static ::javax::swing::plaf::IconUIResource* getOpenFolderIconUIResource();
	static ::com::apple::laf::AquaIcon$SystemIcon* getStopIcon();
	static ::com::apple::laf::AquaIcon$SystemIconUIResourceSingleton* folderIcon;
	static ::com::apple::laf::AquaIcon$SystemIconUIResourceSingleton* openFolderIcon;
	static ::com::apple::laf::AquaIcon$SystemIconUIResourceSingleton* desktopIcon;
	static ::com::apple::laf::AquaIcon$SystemIconUIResourceSingleton* computerIcon;
	static ::com::apple::laf::AquaIcon$SystemIconUIResourceSingleton* documentIcon;
	static ::com::apple::laf::AquaIcon$SystemIconUIResourceSingleton* hardDriveIcon;
	static ::com::apple::laf::AquaIcon$SystemIconUIResourceSingleton* floppyIcon;
	static ::com::apple::laf::AquaIcon$SystemIconSingleton* caut;
	static ::com::apple::laf::AquaIcon$SystemIconSingleton* stop;
	$String* selector = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaIcon$SystemIcon_h_