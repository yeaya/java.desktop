#ifndef _com_apple_laf_AquaComboBoxRendererInternal_h_
#define _com_apple_laf_AquaComboBoxRendererInternal_h_
//$ class com.apple.laf.AquaComboBoxRendererInternal
//$ extends javax.swing.JLabel
//$ implements javax.swing.ListCellRenderer

#include <javax/swing/JLabel.h>
#include <javax/swing/ListCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JList;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxRendererInternal : public ::javax::swing::JLabel, public ::javax::swing::ListCellRenderer {
	$class(AquaComboBoxRendererInternal, $NO_CLASS_INIT, ::javax::swing::JLabel, ::javax::swing::ListCellRenderer)
public:
	AquaComboBoxRendererInternal();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::getInsets;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::firePropertyChange;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JComboBox* comboBox);
	virtual int32_t getBaseline(int32_t width, int32_t height) override;
	virtual ::java::awt::Insets* getInsets(::java::awt::Insets* insets) override;
	virtual ::java::awt::Component* getListCellRendererComponent(::javax::swing::JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JLabel::list;
	virtual void paintBorder(::java::awt::Graphics* g) override;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	using ::javax::swing::JLabel::repaint;
	using ::javax::swing::JLabel::remove;
	virtual void setDrawCheckedItem(bool drawCheckedItem);
	using ::javax::swing::JLabel::setUI;
	virtual $String* toString() override;
	::javax::swing::JComboBox* fComboBox = nullptr;
	bool fSelected = false;
	bool fChecked = false;
	bool fInList = false;
	bool fEditable = false;
	bool fDrawCheckedItem = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxRendererInternal_h_