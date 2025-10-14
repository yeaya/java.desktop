#ifndef _javax_swing_plaf_metal_MetalFontDesktopProperty_h_
#define _javax_swing_plaf_metal_MetalFontDesktopProperty_h_
//$ class javax.swing.plaf.metal.MetalFontDesktopProperty
//$ extends sun.swing.plaf.DesktopProperty

#include <java/lang/Array.h>
#include <sun/swing/plaf/DesktopProperty.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalFontDesktopProperty : public ::sun::swing::plaf::DesktopProperty {
	$class(MetalFontDesktopProperty, 0, ::sun::swing::plaf::DesktopProperty)
public:
	MetalFontDesktopProperty();
	void init$(int32_t type);
	void init$($String* key, int32_t type);
	virtual $Object* configureValue(Object$* value) override;
	virtual $Object* getDefaultValue() override;
	static $StringArray* propertyMapping;
	int32_t type = 0;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFontDesktopProperty_h_