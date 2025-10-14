#ifndef _javax_swing_JTable$BooleanRenderer_h_
#define _javax_swing_JTable$BooleanRenderer_h_
//$ class javax.swing.JTable$BooleanRenderer
//$ extends javax.swing.JCheckBox
//$ implements javax.swing.table.TableCellRenderer,javax.swing.plaf.UIResource

#include <javax/swing/JCheckBox.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/table/TableCellRenderer.h>

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

class $export JTable$BooleanRenderer : public ::javax::swing::JCheckBox, public ::javax::swing::table::TableCellRenderer, public ::javax::swing::plaf::UIResource {
	$class(JTable$BooleanRenderer, 0, ::javax::swing::JCheckBox, ::javax::swing::table::TableCellRenderer, ::javax::swing::plaf::UIResource)
public:
	JTable$BooleanRenderer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JCheckBox::contains;
	using ::javax::swing::JCheckBox::enable;
	using ::javax::swing::JCheckBox::getBounds;
	using ::javax::swing::JCheckBox::getSize;
	using ::javax::swing::JCheckBox::getLocation;
	using ::javax::swing::JCheckBox::firePropertyChange;
	using ::javax::swing::JCheckBox::add;
	using ::javax::swing::JCheckBox::getMousePosition;
	using ::javax::swing::JCheckBox::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) override;
	using ::javax::swing::JCheckBox::requestFocus;
	using ::javax::swing::JCheckBox::requestFocusInWindow;
	using ::javax::swing::JCheckBox::setUI;
	using ::javax::swing::JCheckBox::repaint;
	using ::javax::swing::JCheckBox::remove;
	virtual $String* toString() override;
	static ::javax::swing::border::Border* noFocusBorder;
};

	} // swing
} // javax

#endif // _javax_swing_JTable$BooleanRenderer_h_