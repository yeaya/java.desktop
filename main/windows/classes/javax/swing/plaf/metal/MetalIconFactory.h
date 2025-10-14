#ifndef _javax_swing_plaf_metal_MetalIconFactory_h_
#define _javax_swing_plaf_metal_MetalIconFactory_h_
//$ class javax.swing.plaf.metal.MetalIconFactory
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("DARK")
#undef DARK
#pragma push_macro("LIGHT")
#undef LIGHT

namespace java {
	namespace awt {
		class Dimension;
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
			namespace metal {

class $export MetalIconFactory : public ::java::io::Serializable {
	$class(MetalIconFactory, 0, ::java::io::Serializable)
public:
	MetalIconFactory();
	void init$();
	static ::javax::swing::Icon* getCheckBoxIcon();
	static ::javax::swing::Icon* getCheckBoxMenuItemIcon();
	static ::javax::swing::Icon* getFileChooserDetailViewIcon();
	static ::javax::swing::Icon* getFileChooserHomeFolderIcon();
	static ::javax::swing::Icon* getFileChooserListViewIcon();
	static ::javax::swing::Icon* getFileChooserNewFolderIcon();
	static ::javax::swing::Icon* getFileChooserUpFolderIcon();
	static ::javax::swing::Icon* getHorizontalSliderThumbIcon();
	static ::javax::swing::Icon* getInternalFrameAltMaximizeIcon(int32_t size);
	static ::javax::swing::Icon* getInternalFrameCloseIcon(int32_t size);
	static ::javax::swing::Icon* getInternalFrameDefaultMenuIcon();
	static ::javax::swing::Icon* getInternalFrameMaximizeIcon(int32_t size);
	static ::javax::swing::Icon* getInternalFrameMinimizeIcon(int32_t size);
	static ::javax::swing::Icon* getMenuArrowIcon();
	static ::javax::swing::Icon* getMenuItemArrowIcon();
	static ::javax::swing::Icon* getMenuItemCheckIcon();
	static ::javax::swing::Icon* getRadioButtonIcon();
	static ::javax::swing::Icon* getRadioButtonMenuItemIcon();
	static ::javax::swing::Icon* getTreeComputerIcon();
	static ::javax::swing::Icon* getTreeControlIcon(bool isCollapsed);
	static ::javax::swing::Icon* getTreeFloppyDriveIcon();
	static ::javax::swing::Icon* getTreeFolderIcon();
	static ::javax::swing::Icon* getTreeHardDriveIcon();
	static ::javax::swing::Icon* getTreeLeafIcon();
	static ::javax::swing::Icon* getVerticalSliderThumbIcon();
	static ::javax::swing::Icon* fileChooserDetailViewIcon;
	static ::javax::swing::Icon* fileChooserHomeFolderIcon;
	static ::javax::swing::Icon* fileChooserListViewIcon;
	static ::javax::swing::Icon* fileChooserNewFolderIcon;
	static ::javax::swing::Icon* fileChooserUpFolderIcon;
	static ::javax::swing::Icon* internalFrameAltMaximizeIcon;
	static ::javax::swing::Icon* internalFrameCloseIcon;
	static ::javax::swing::Icon* internalFrameDefaultMenuIcon;
	static ::javax::swing::Icon* internalFrameMaximizeIcon;
	static ::javax::swing::Icon* internalFrameMinimizeIcon;
	static ::javax::swing::Icon* radioButtonIcon;
	static ::javax::swing::Icon* treeComputerIcon;
	static ::javax::swing::Icon* treeFloppyDriveIcon;
	static ::javax::swing::Icon* treeHardDriveIcon;
	static ::javax::swing::Icon* menuArrowIcon;
	static ::javax::swing::Icon* menuItemArrowIcon;
	static ::javax::swing::Icon* checkBoxMenuItemIcon;
	static ::javax::swing::Icon* radioButtonMenuItemIcon;
	static ::javax::swing::Icon* checkBoxIcon;
	static ::javax::swing::Icon* oceanHorizontalSliderThumb;
	static ::javax::swing::Icon* oceanVerticalSliderThumb;
	static const bool DARK = false;
	static const bool LIGHT = true;
	static ::java::awt::Dimension* folderIcon16Size;
	static ::java::awt::Dimension* fileIcon16Size;
	static ::java::awt::Dimension* treeControlSize;
	static ::java::awt::Dimension* menuArrowIconSize;
	static ::java::awt::Dimension* menuCheckIconSize;
	static const int32_t xOff = 4;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("DARK")
#pragma pop_macro("LIGHT")

#endif // _javax_swing_plaf_metal_MetalIconFactory_h_