#ifndef _javax_swing_JTree$AccessibleJTree_h_
#define _javax_swing_JTree$AccessibleJTree_h_
//$ class javax.swing.JTree$AccessibleJTree
//$ extends javax.swing.JComponent$AccessibleJComponent
//$ implements javax.accessibility.AccessibleSelection,javax.swing.event.TreeSelectionListener,javax.swing.event.TreeModelListener,javax.swing.event.TreeExpansionListener

#include <javax/accessibility/AccessibleSelection.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/event/TreeExpansionListener.h>
#include <javax/swing/event/TreeModelListener.h>
#include <javax/swing/event/TreeSelectionListener.h>

namespace java {
	namespace awt {
		class Component;
		class Point;
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
		class AccessibleContext;
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TreeExpansionEvent;
			class TreeModelEvent;
			class TreeSelectionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {

class $import JTree$AccessibleJTree : public ::javax::swing::JComponent$AccessibleJComponent, public ::javax::accessibility::AccessibleSelection, public ::javax::swing::event::TreeSelectionListener, public ::javax::swing::event::TreeModelListener, public ::javax::swing::event::TreeExpansionListener {
	$class(JTree$AccessibleJTree, $NO_CLASS_INIT, ::javax::swing::JComponent$AccessibleJComponent, ::javax::accessibility::AccessibleSelection, ::javax::swing::event::TreeSelectionListener, ::javax::swing::event::TreeModelListener, ::javax::swing::event::TreeExpansionListener)
public:
	JTree$AccessibleJTree();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JTree* this$0);
	virtual void addAccessibleSelection(int32_t i) override;
	virtual void clearAccessibleSelection() override;
	virtual void fireActiveDescendantPropertyChange(::javax::swing::tree::TreePath* oldPath, ::javax::swing::tree::TreePath* newPath);
	virtual void fireVisibleDataPropertyChange();
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual int32_t getAccessibleIndexInParent() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleSelection* getAccessibleSelection() override;
	virtual ::javax::accessibility::Accessible* getAccessibleSelection(int32_t i) override;
	virtual int32_t getAccessibleSelectionCount() override;
	::javax::accessibility::AccessibleContext* getCurrentAccessibleContext();
	::java::awt::Component* getCurrentComponent();
	virtual bool isAccessibleChildSelected(int32_t i) override;
	virtual void removeAccessibleSelection(int32_t i) override;
	virtual void selectAllAccessibleSelection() override;
	virtual $String* toString() override;
	virtual void treeCollapsed(::javax::swing::event::TreeExpansionEvent* e) override;
	virtual void treeExpanded(::javax::swing::event::TreeExpansionEvent* e) override;
	virtual void treeNodesChanged(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeNodesInserted(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeNodesRemoved(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeStructureChanged(::javax::swing::event::TreeModelEvent* e) override;
	virtual void valueChanged(::javax::swing::event::TreeSelectionEvent* e) override;
	::javax::swing::JTree* this$0 = nullptr;
	::javax::swing::tree::TreePath* leadSelectionPath = nullptr;
	::javax::accessibility::Accessible* leadSelectionAccessible = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTree$AccessibleJTree_h_