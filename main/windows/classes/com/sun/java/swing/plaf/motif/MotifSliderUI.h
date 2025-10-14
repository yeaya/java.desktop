#ifndef _com_sun_java_swing_plaf_motif_MotifSliderUI_h_
#define _com_sun_java_swing_plaf_motif_MotifSliderUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifSliderUI
//$ extends javax.swing.plaf.basic.BasicSliderUI

#include <javax/swing/plaf/basic/BasicSliderUI.h>

#pragma push_macro("MINIMUM_HORIZONTAL_SIZE")
#undef MINIMUM_HORIZONTAL_SIZE
#pragma push_macro("MINIMUM_VERTICAL_SIZE")
#undef MINIMUM_VERTICAL_SIZE
#pragma push_macro("PREFERRED_HORIZONTAL_SIZE")
#undef PREFERRED_HORIZONTAL_SIZE
#pragma push_macro("PREFERRED_VERTICAL_SIZE")
#undef PREFERRED_VERTICAL_SIZE

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JSlider;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifSliderUI : public ::javax::swing::plaf::basic::BasicSliderUI {
	$class(MotifSliderUI, 0, ::javax::swing::plaf::basic::BasicSliderUI)
public:
	MotifSliderUI();
	void init$(::javax::swing::JSlider* b);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* b);
	virtual ::java::awt::Dimension* getMinimumHorizontalSize() override;
	virtual ::java::awt::Dimension* getMinimumVerticalSize() override;
	virtual ::java::awt::Dimension* getPreferredHorizontalSize() override;
	virtual ::java::awt::Dimension* getPreferredVerticalSize() override;
	virtual ::java::awt::Dimension* getThumbSize() override;
	virtual void paintFocus(::java::awt::Graphics* g) override;
	virtual void paintThumb(::java::awt::Graphics* g) override;
	virtual void paintTrack(::java::awt::Graphics* g) override;
	static ::java::awt::Dimension* PREFERRED_HORIZONTAL_SIZE;
	static ::java::awt::Dimension* PREFERRED_VERTICAL_SIZE;
	static ::java::awt::Dimension* MINIMUM_HORIZONTAL_SIZE;
	static ::java::awt::Dimension* MINIMUM_VERTICAL_SIZE;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("MINIMUM_HORIZONTAL_SIZE")
#pragma pop_macro("MINIMUM_VERTICAL_SIZE")
#pragma pop_macro("PREFERRED_HORIZONTAL_SIZE")
#pragma pop_macro("PREFERRED_VERTICAL_SIZE")

#endif // _com_sun_java_swing_plaf_motif_MotifSliderUI_h_