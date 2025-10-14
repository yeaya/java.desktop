#ifndef _javax_swing_table_DefaultTableCellRenderer_h_
#define _javax_swing_table_DefaultTableCellRenderer_h_
//$ class javax.swing.table.DefaultTableCellRenderer
//$ extends javax.swing.JLabel
//$ implements javax.swing.table.TableCellRenderer

#include <javax/swing/JLabel.h>
#include <javax/swing/table/TableCellRenderer.h>

#pragma push_macro("DEFAULT_NO_FOCUS_BORDER")
#undef DEFAULT_NO_FOCUS_BORDER
#pragma push_macro("SAFE_NO_FOCUS_BORDER")
#undef SAFE_NO_FOCUS_BORDER

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Rectangle;
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
		namespace table {

class $import DefaultTableCellRenderer : public ::javax::swing::JLabel, public ::javax::swing::table::TableCellRenderer {
	$class(DefaultTableCellRenderer, 0, ::javax::swing::JLabel, ::javax::swing::table::TableCellRenderer)
public:
	DefaultTableCellRenderer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	using ::javax::swing::JLabel::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) override;
	virtual void firePropertyChange($String* propertyName, bool oldValue, bool newValue) override;
	::javax::swing::border::Border* getNoFocusBorder();
	virtual ::java::awt::Component* getTableCellRendererComponent(::javax::swing::JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) override;
	virtual void invalidate() override;
	virtual bool isOpaque() override;
	using ::javax::swing::JLabel::remove;
	using ::javax::swing::JLabel::repaint;
	virtual void repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void repaint(::java::awt::Rectangle* r) override;
	virtual void repaint() override;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	virtual void revalidate() override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setForeground(::java::awt::Color* c) override;
	using ::javax::swing::JLabel::setUI;
	virtual void setValue(Object$* value);
	virtual $String* toString() override;
	virtual void updateUI() override;
	virtual void validate() override;
	static ::javax::swing::border::Border* SAFE_NO_FOCUS_BORDER;
	static ::javax::swing::border::Border* DEFAULT_NO_FOCUS_BORDER;
	static ::javax::swing::border::Border* noFocusBorder;
	::java::awt::Color* unselectedForeground = nullptr;
	::java::awt::Color* unselectedBackground = nullptr;
};

		} // table
	} // swing
} // javax

#pragma pop_macro("DEFAULT_NO_FOCUS_BORDER")
#pragma pop_macro("SAFE_NO_FOCUS_BORDER")

#endif // _javax_swing_table_DefaultTableCellRenderer_h_