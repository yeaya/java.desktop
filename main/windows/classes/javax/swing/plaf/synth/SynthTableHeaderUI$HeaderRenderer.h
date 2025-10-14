#ifndef _javax_swing_plaf_synth_SynthTableHeaderUI$HeaderRenderer_h_
#define _javax_swing_plaf_synth_SynthTableHeaderUI$HeaderRenderer_h_
//$ class javax.swing.plaf.synth.SynthTableHeaderUI$HeaderRenderer
//$ extends sun.swing.table.DefaultTableCellHeaderRenderer

#include <sun/swing/table/DefaultTableCellHeaderRenderer.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthTableHeaderUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthTableHeaderUI$HeaderRenderer : public ::sun::swing::table::DefaultTableCellHeaderRenderer {
	$class(SynthTableHeaderUI$HeaderRenderer, $NO_CLASS_INIT, ::sun::swing::table::DefaultTableCellHeaderRenderer)
public:
	SynthTableHeaderUI$HeaderRenderer();
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::firePropertyChange;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::contains;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::enable;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::getBounds;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::getSize;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::getLocation;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::add;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::getMousePosition;
	void init$(::javax::swing::plaf::synth::SynthTableHeaderUI* this$0);
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) override;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::repaint;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::requestFocus;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::requestFocusInWindow;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::remove;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::list;
	virtual void setBorder(::javax::swing::border::Border* border) override;
	using ::sun::swing::table::DefaultTableCellHeaderRenderer::setUI;
	::javax::swing::plaf::synth::SynthTableHeaderUI* this$0 = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTableHeaderUI$HeaderRenderer_h_