#ifndef _javax_swing_plaf_basic_BasicComboBoxRenderer_h_
#define _javax_swing_plaf_basic_BasicComboBoxRenderer_h_
//$ class javax.swing.plaf.basic.BasicComboBoxRenderer
//$ extends javax.swing.JLabel
//$ implements javax.swing.ListCellRenderer

#include <javax/swing/JLabel.h>
#include <javax/swing/ListCellRenderer.h>

#pragma push_macro("SAFE_NO_FOCUS_BORDER")
#undef SAFE_NO_FOCUS_BORDER

namespace java {
	namespace awt {
		class Component;
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		class JList;
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
			namespace basic {

class $import BasicComboBoxRenderer : public ::javax::swing::JLabel, public ::javax::swing::ListCellRenderer {
	$class(BasicComboBoxRenderer, 0, ::javax::swing::JLabel, ::javax::swing::ListCellRenderer)
public:
	BasicComboBoxRenderer();
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
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	static ::javax::swing::border::Border* getNoFocusBorder();
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JLabel::setUI;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	virtual $String* toString() override;
	static ::javax::swing::border::Border* noFocusBorder;
	static ::javax::swing::border::Border* SAFE_NO_FOCUS_BORDER;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("SAFE_NO_FOCUS_BORDER")

#endif // _javax_swing_plaf_basic_BasicComboBoxRenderer_h_