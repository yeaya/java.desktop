#ifndef _javax_swing_plaf_metal_MetalLookAndFeel$MetalLayoutStyle_h_
#define _javax_swing_plaf_metal_MetalLookAndFeel$MetalLayoutStyle_h_
//$ class javax.swing.plaf.metal.MetalLookAndFeel$MetalLayoutStyle
//$ extends sun.swing.DefaultLayoutStyle

#include <sun/swing/DefaultLayoutStyle.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace awt {
		class Container;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class LayoutStyle$ComponentPlacement;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalLookAndFeel$MetalLayoutStyle : public ::sun::swing::DefaultLayoutStyle {
	$class(MetalLookAndFeel$MetalLayoutStyle, 0, ::sun::swing::DefaultLayoutStyle)
public:
	MetalLookAndFeel$MetalLayoutStyle();
	using ::sun::swing::DefaultLayoutStyle::getButtonGap;
	void init$();
	int32_t getButtonAdjustment(::javax::swing::JComponent* source, int32_t edge);
	virtual int32_t getButtonGap(::javax::swing::JComponent* source, ::javax::swing::JComponent* target, int32_t position, int32_t offset) override;
	virtual int32_t getContainerGap(::javax::swing::JComponent* component, int32_t position, ::java::awt::Container* parent) override;
	virtual int32_t getPreferredGap(::javax::swing::JComponent* component1, ::javax::swing::JComponent* component2, ::javax::swing::LayoutStyle$ComponentPlacement* type, int32_t position, ::java::awt::Container* parent) override;
	static ::javax::swing::plaf::metal::MetalLookAndFeel$MetalLayoutStyle* INSTANCE;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("INSTANCE")

#endif // _javax_swing_plaf_metal_MetalLookAndFeel$MetalLayoutStyle_h_