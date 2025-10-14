#ifndef _javax_swing_plaf_metal_MetalIconFactory$TreeLeafIcon_h_
#define _javax_swing_plaf_metal_MetalIconFactory$TreeLeafIcon_h_
//$ class javax.swing.plaf.metal.MetalIconFactory$TreeLeafIcon
//$ extends javax.swing.plaf.metal.MetalIconFactory$FileIcon16

#include <javax/swing/plaf/metal/MetalIconFactory$FileIcon16.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalIconFactory$TreeLeafIcon : public ::javax::swing::plaf::metal::MetalIconFactory$FileIcon16 {
	$class(MetalIconFactory$TreeLeafIcon, $NO_CLASS_INIT, ::javax::swing::plaf::metal::MetalIconFactory$FileIcon16)
public:
	MetalIconFactory$TreeLeafIcon();
	void init$();
	virtual int32_t getAdditionalHeight() override;
	virtual int32_t getShift() override;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalIconFactory$TreeLeafIcon_h_