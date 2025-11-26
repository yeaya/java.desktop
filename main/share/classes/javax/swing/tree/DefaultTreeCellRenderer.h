#ifndef _javax_swing_tree_DefaultTreeCellRenderer_h_
#define _javax_swing_tree_DefaultTreeCellRenderer_h_
//$ class javax.swing.tree.DefaultTreeCellRenderer
//$ extends javax.swing.JLabel
//$ implements javax.swing.tree.TreeCellRenderer

#include <javax/swing/JLabel.h>
#include <javax/swing/tree/TreeCellRenderer.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dimension;
		class Font;
		class Graphics;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JTree;
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $export DefaultTreeCellRenderer : public ::javax::swing::JLabel, public ::javax::swing::tree::TreeCellRenderer {
	$class(DefaultTreeCellRenderer, $NO_CLASS_INIT, ::javax::swing::JLabel, ::javax::swing::tree::TreeCellRenderer)
public:
	DefaultTreeCellRenderer();
	using ::javax::swing::JLabel::contains;
	using ::javax::swing::JLabel::enable;
	using ::javax::swing::JLabel::getBounds;
	using ::javax::swing::JLabel::getSize;
	using ::javax::swing::JLabel::getLocation;
	using ::javax::swing::JLabel::add;
	using ::javax::swing::JLabel::getMousePosition;
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
	virtual ::java::awt::Color* getBackgroundNonSelectionColor();
	virtual ::java::awt::Color* getBackgroundSelectionColor();
	virtual ::java::awt::Color* getBorderSelectionColor();
	virtual ::javax::swing::Icon* getClosedIcon();
	virtual ::javax::swing::Icon* getDefaultClosedIcon();
	virtual ::javax::swing::Icon* getDefaultLeafIcon();
	virtual ::javax::swing::Icon* getDefaultOpenIcon();
	virtual ::java::awt::Font* getFont() override;
	int32_t getLabelStart();
	virtual ::javax::swing::Icon* getLeafIcon();
	virtual ::javax::swing::Icon* getOpenIcon();
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual ::java::awt::Color* getTextNonSelectionColor();
	virtual ::java::awt::Color* getTextSelectionColor();
	virtual ::java::awt::Component* getTreeCellRendererComponent(::javax::swing::JTree* tree, Object$* value, bool sel, bool expanded, bool leaf, int32_t row, bool hasFocus) override;
	virtual void invalidate() override;
	using ::javax::swing::JLabel::list;
	virtual void paint(::java::awt::Graphics* g) override;
	void paintFocus(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, ::java::awt::Color* notColor);
	using ::javax::swing::JLabel::remove;
	using ::javax::swing::JLabel::repaint;
	virtual void repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual void repaint(::java::awt::Rectangle* r) override;
	virtual void repaint() override;
	using ::javax::swing::JLabel::requestFocus;
	using ::javax::swing::JLabel::requestFocusInWindow;
	virtual void revalidate() override;
	virtual void setBackground(::java::awt::Color* color) override;
	virtual void setBackgroundNonSelectionColor(::java::awt::Color* newColor);
	virtual void setBackgroundSelectionColor(::java::awt::Color* newColor);
	virtual void setBorderSelectionColor(::java::awt::Color* newColor);
	virtual void setClosedIcon(::javax::swing::Icon* newIcon);
	virtual void setFont(::java::awt::Font* font) override;
	virtual void setLeafIcon(::javax::swing::Icon* newIcon);
	virtual void setOpenIcon(::javax::swing::Icon* newIcon);
	virtual void setTextNonSelectionColor(::java::awt::Color* newColor);
	virtual void setTextSelectionColor(::java::awt::Color* newColor);
	using ::javax::swing::JLabel::setUI;
	virtual $String* toString() override;
	virtual void updateUI() override;
	virtual void validate() override;
	::javax::swing::JTree* tree = nullptr;
	bool selected = false;
	bool hasFocus$ = false;
	bool drawsFocusBorderAroundIcon = false;
	bool drawDashedFocusIndicator = false;
	::java::awt::Color* treeBGColor = nullptr;
	::java::awt::Color* focusBGColor = nullptr;
	::javax::swing::Icon* closedIcon = nullptr;
	::javax::swing::Icon* leafIcon = nullptr;
	::javax::swing::Icon* openIcon = nullptr;
	::java::awt::Color* textSelectionColor = nullptr;
	::java::awt::Color* textNonSelectionColor = nullptr;
	::java::awt::Color* backgroundSelectionColor = nullptr;
	::java::awt::Color* backgroundNonSelectionColor = nullptr;
	::java::awt::Color* borderSelectionColor = nullptr;
	bool isDropCell = false;
	bool fillBackground = false;
	bool inited = false;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_DefaultTreeCellRenderer_h_