#ifndef _javax_swing_DefaultListCellRenderer_h_
#define _javax_swing_DefaultListCellRenderer_h_
//$ class javax.swing.DefaultListCellRenderer
//$ extends javax.swing.JLabel
//$ implements javax.swing.ListCellRenderer

#include <javax/swing/JLabel.h>
#include <javax/swing/ListCellRenderer.h>

#pragma push_macro("DEFAULT_NO_FOCUS_BORDER")
#undef DEFAULT_NO_FOCUS_BORDER
#pragma push_macro("SAFE_NO_FOCUS_BORDER")
#undef SAFE_NO_FOCUS_BORDER

namespace java {
	namespace awt {
		class Component;
		class Rectangle;
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

class $import DefaultListCellRenderer : public ::javax::swing::JLabel, public ::javax::swing::ListCellRenderer {
	$class(DefaultListCellRenderer, 0, ::javax::swing::JLabel, ::javax::swing::ListCellRenderer)
public:
	DefaultListCellRenderer();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	using ::javax::swing::JLabel::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) override;
	virtual void firePropertyChange($String* propertyName, int8_t oldValue, int8_t newValue) override;
	virtual void firePropertyChange($String* propertyName, char16_t oldValue, char16_t newValue) override;
	virtual void firePropertyChange($String* propertyName, int16_t oldValue, int16_t newValue) override;
	virtual void firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue) override;
	virtual void firePropertyChange($String* propertyName, int64_t oldValue, int64_t newValue) override;
	virtual void firePropertyChange($String* propertyName, float oldValue, float newValue) override;
	virtual void firePropertyChange($String* propertyName, double oldValue, double newValue) override;
	virtual void firePropertyChange($String* propertyName, bool oldValue, bool newValue) override;
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	::javax::swing::border::Border* getNoFocusBorder();
	virtual void invalidate() override;
	virtual bool isOpaque() override;
	using ::javax::swing::JLabel::remove;
	using ::javax::swing::JLabel::repaint;
	virtual void repaint() override;
	virtual void repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void repaint(::java::awt::Rectangle* r) override;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	virtual void revalidate() override;
	using ::javax::swing::JLabel::setUI;
	virtual $String* toString() override;
	virtual void validate() override;
	static ::javax::swing::border::Border* SAFE_NO_FOCUS_BORDER;
	static ::javax::swing::border::Border* DEFAULT_NO_FOCUS_BORDER;
	static ::javax::swing::border::Border* noFocusBorder;
};

	} // swing
} // javax

#pragma pop_macro("DEFAULT_NO_FOCUS_BORDER")
#pragma pop_macro("SAFE_NO_FOCUS_BORDER")

#endif // _javax_swing_DefaultListCellRenderer_h_