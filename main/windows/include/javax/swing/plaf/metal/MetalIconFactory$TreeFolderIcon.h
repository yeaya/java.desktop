#ifndef _javax_swing_plaf_metal_MetalIconFactory$TreeFolderIcon_h_
#define _javax_swing_plaf_metal_MetalIconFactory$TreeFolderIcon_h_
//$ class javax.swing.plaf.metal.MetalIconFactory$TreeFolderIcon
//$ extends javax.swing.plaf.metal.MetalIconFactory$FolderIcon16

#include <javax/swing/plaf/metal/MetalIconFactory$FolderIcon16.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalIconFactory$TreeFolderIcon : public ::javax::swing::plaf::metal::MetalIconFactory$FolderIcon16 {
	$class(MetalIconFactory$TreeFolderIcon, $NO_CLASS_INIT, ::javax::swing::plaf::metal::MetalIconFactory$FolderIcon16)
public:
	MetalIconFactory$TreeFolderIcon();
	void init$();
	virtual int32_t getAdditionalHeight() override;
	virtual int32_t getShift() override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalIconFactory$TreeFolderIcon_h_