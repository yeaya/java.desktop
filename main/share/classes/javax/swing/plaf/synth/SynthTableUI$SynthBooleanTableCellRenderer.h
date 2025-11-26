#ifndef _javax_swing_plaf_synth_SynthTableUI$SynthBooleanTableCellRenderer_h_
#define _javax_swing_plaf_synth_SynthTableUI$SynthBooleanTableCellRenderer_h_
//$ class javax.swing.plaf.synth.SynthTableUI$SynthBooleanTableCellRenderer
//$ extends javax.swing.JCheckBox
//$ implements javax.swing.table.TableCellRenderer

#include <javax/swing/JCheckBox.h>
#include <javax/swing/table/TableCellRenderer.h>

namespace java {
	namespace awt {
		class Color;
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

class SynthTableUI$SynthBooleanTableCellRenderer : public ::javax::swing::JCheckBox, public ::javax::swing::table::TableCellRenderer {
	$class(SynthTableUI$SynthBooleanTableCellRenderer, $NO_CLASS_INIT, ::javax::swing::JCheckBox, ::javax::swing::table::TableCellRenderer)
public:
	SynthTableUI$SynthBooleanTableCellRenderer();
	using ::javax::swing::JCheckBox::contains;
	using ::javax::swing::JCheckBox::enable;
	using ::javax::swing::JCheckBox::getBounds;
	using ::javax::swing::JCheckBox::getSize;
	using ::javax::swing::JCheckBox::getLocation;
	using ::javax::swing::JCheckBox::firePropertyChange;
	using ::javax::swing::JCheckBox::add;
	using ::javax::swing::JCheckBox::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::synth::SynthTableUI* this$0);
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) override;
	virtual bool isOpaque() override;
	using ::javax::swing::JCheckBox::requestFocus;
	using ::javax::swing::JCheckBox::requestFocusInWindow;
	using ::javax::swing::JCheckBox::setUI;
	using ::javax::swing::JCheckBox::repaint;
	using ::javax::swing::JCheckBox::remove;
	using ::javax::swing::JCheckBox::list;
	virtual $String* toString() override;
	::java::awt::Color* unwrap(::java::awt::Color* c);
	::javax::swing::plaf::synth::SynthTableUI* this$0 = nullptr;
	bool isRowSelected = false;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthTableUI$SynthBooleanTableCellRenderer_h_