#ifndef _javax_swing_plaf_synth_SynthTableUI$SynthTableCellRenderer_h_
#define _javax_swing_plaf_synth_SynthTableUI$SynthTableCellRenderer_h_
//$ class javax.swing.plaf.synth.SynthTableUI$SynthTableCellRenderer
//$ extends javax.swing.table.DefaultTableCellRenderer

#include <javax/swing/table/DefaultTableCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
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
				class SynthTableUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthTableUI$SynthTableCellRenderer : public ::javax::swing::table::DefaultTableCellRenderer {
	$class(SynthTableUI$SynthTableCellRenderer, $NO_CLASS_INIT, ::javax::swing::table::DefaultTableCellRenderer)
public:
	SynthTableUI$SynthTableCellRenderer();
	using ::javax::swing::table::DefaultTableCellRenderer::firePropertyChange;
	using ::javax::swing::table::DefaultTableCellRenderer::contains;
	using ::javax::swing::table::DefaultTableCellRenderer::enable;
	using ::javax::swing::table::DefaultTableCellRenderer::getBounds;
	using ::javax::swing::table::DefaultTableCellRenderer::getSize;
	using ::javax::swing::table::DefaultTableCellRenderer::getLocation;
	using ::javax::swing::table::DefaultTableCellRenderer::add;
	using ::javax::swing::table::DefaultTableCellRenderer::getMousePosition;
	void init$(::javax::swing::plaf::synth::SynthTableUI* this$0);
	void configureValue(Object$* value, $Class* columnClass);
	virtual $String* getName() override;
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) override;
	virtual bool isOpaque() override;
	using ::javax::swing::table::DefaultTableCellRenderer::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::table::DefaultTableCellRenderer::repaint;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocus;
	using ::javax::swing::table::DefaultTableCellRenderer::requestFocusInWindow;
	using ::javax::swing::table::DefaultTableCellRenderer::remove;
	virtual void setBorder(::javax::swing::border::Border* b) override;
	virtual void setOpaque(bool isOpaque) override;
	using ::javax::swing::table::DefaultTableCellRenderer::setUI;
	::javax::swing::plaf::synth::SynthTableUI* this$0 = nullptr;
	$Object* numberFormat = nullptr;
	$Object* dateFormat = nullptr;
	bool opaque = false;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTableUI$SynthTableCellRenderer_h_