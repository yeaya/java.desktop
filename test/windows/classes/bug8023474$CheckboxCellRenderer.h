#ifndef _bug8023474$CheckboxCellRenderer_h_
#define _bug8023474$CheckboxCellRenderer_h_
//$ class bug8023474$CheckboxCellRenderer
//$ extends javax.swing.JPanel
//$ implements javax.swing.tree.TreeCellRenderer

#include <javax/swing/JPanel.h>
#include <javax/swing/tree/TreeCellRenderer.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JCheckBox;
		class JTree;
	}
}

class bug8023474$CheckboxCellRenderer : public ::javax::swing::JPanel, public ::javax::swing::tree::TreeCellRenderer {
	$class(bug8023474$CheckboxCellRenderer, $NO_CLASS_INIT, ::javax::swing::JPanel, ::javax::swing::tree::TreeCellRenderer)
public:
	bug8023474$CheckboxCellRenderer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Component* getTreeCellRendererComponent(::javax::swing::JTree* tree, Object$* value, bool selected, bool expanded, bool leaf, int32_t row, bool hasFocus) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	virtual $String* toString() override;
	::javax::swing::JCheckBox* checkbox = nullptr;
};

#endif // _bug8023474$CheckboxCellRenderer_h_