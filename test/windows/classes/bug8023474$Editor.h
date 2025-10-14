#ifndef _bug8023474$Editor_h_
#define _bug8023474$Editor_h_
//$ class bug8023474$Editor
//$ extends javax.swing.JPanel
//$ implements javax.swing.tree.TreeCellEditor

#include <javax/swing/JPanel.h>
#include <javax/swing/tree/TreeCellEditor.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		class EventObject;
	}
}
namespace javax {
	namespace swing {
		class JCheckBox;
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class CellEditorListener;
		}
	}
}

class bug8023474$Editor : public ::javax::swing::JPanel, public ::javax::swing::tree::TreeCellEditor {
	$class(bug8023474$Editor, $NO_CLASS_INIT, ::javax::swing::JPanel, ::javax::swing::tree::TreeCellEditor)
public:
	bug8023474$Editor();
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
	virtual void addCellEditorListener(::javax::swing::event::CellEditorListener* l) override;
	virtual void cancelCellEditing() override;
	virtual $Object* getCellEditorValue() override;
	virtual ::java::awt::Component* getTreeCellEditorComponent(::javax::swing::JTree* tree, Object$* value, bool isSelected, bool expanded, bool leaf, int32_t row) override;
	virtual bool isCellEditable(::java::util::EventObject* anEvent) override;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	virtual void removeCellEditorListener(::javax::swing::event::CellEditorListener* l) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	virtual bool shouldSelectCell(::java::util::EventObject* anEvent) override;
	virtual bool stopCellEditing() override;
	virtual $String* toString() override;
	::javax::swing::JCheckBox* checkbox = nullptr;
};

#endif // _bug8023474$Editor_h_