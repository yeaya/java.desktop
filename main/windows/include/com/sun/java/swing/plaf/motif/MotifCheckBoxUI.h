#ifndef _com_sun_java_swing_plaf_motif_MotifCheckBoxUI_h_
#define _com_sun_java_swing_plaf_motif_MotifCheckBoxUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifCheckBoxUI
//$ extends com.sun.java.swing.plaf.motif.MotifRadioButtonUI

#include <com/sun/java/swing/plaf/motif/MotifRadioButtonUI.h>

#pragma push_macro("MOTIF_CHECK_BOX_UI_KEY")
#undef MOTIF_CHECK_BOX_UI_KEY

namespace javax {
	namespace swing {
		class AbstractButton;
		class JComponent;
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

class $import MotifCheckBoxUI : public ::com::sun::java::swing::plaf::motif::MotifRadioButtonUI {
	$class(MotifCheckBoxUI, 0, ::com::sun::java::swing::plaf::motif::MotifRadioButtonUI)
public:
	MotifCheckBoxUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual $String* getPropertyPrefix() override;
	virtual void installDefaults(::javax::swing::AbstractButton* b) override;
	using ::com::sun::java::swing::plaf::motif::MotifRadioButtonUI::paintFocus;
	using ::com::sun::java::swing::plaf::motif::MotifRadioButtonUI::paintIcon;
	virtual void uninstallDefaults(::javax::swing::AbstractButton* b) override;
	static $Object* MOTIF_CHECK_BOX_UI_KEY;
	static $String* propertyPrefix;
	bool defaults_initialized = false;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("MOTIF_CHECK_BOX_UI_KEY")

#endif // _com_sun_java_swing_plaf_motif_MotifCheckBoxUI_h_