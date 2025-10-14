#ifndef _com_sun_java_swing_plaf_motif_MotifTreeUI_h_
#define _com_sun_java_swing_plaf_motif_MotifTreeUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifTreeUI
//$ extends javax.swing.plaf.basic.BasicTreeUI

#include <javax/swing/plaf/basic/BasicTreeUI.h>

#pragma push_macro("HALF_SIZE")
#undef HALF_SIZE
#pragma push_macro("SIZE")
#undef SIZE

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
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
namespace javax {
	namespace swing {
		namespace tree {
			class TreeCellRenderer;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifTreeUI : public ::javax::swing::plaf::basic::BasicTreeUI {
	$class(MotifTreeUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTreeUI)
public:
	MotifTreeUI();
	void init$();
	virtual ::javax::swing::tree::TreeCellRenderer* createDefaultCellRenderer() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void paintHorizontalLine(::java::awt::Graphics* g, ::javax::swing::JComponent* c, int32_t y, int32_t left, int32_t right) override;
	virtual void paintVerticalLine(::java::awt::Graphics* g, ::javax::swing::JComponent* c, int32_t x, int32_t top, int32_t bottom) override;
	static const int32_t HALF_SIZE = 7;
	static const int32_t SIZE = 14;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("HALF_SIZE")
#pragma pop_macro("SIZE")

#endif // _com_sun_java_swing_plaf_motif_MotifTreeUI_h_