#ifndef _bug4927934_h_
#define _bug4927934_h_
//$ class bug4927934
//$ extends javax.swing.event.TreeSelectionListener
//$ implements javax.swing.event.TreeExpansionListener,java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>
#include <java/lang/Array.h>
#include <javax/swing/event/TreeExpansionListener.h>
#include <javax/swing/event/TreeSelectionListener.h>

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TreeExpansionEvent;
			class TreeSelectionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultMutableTreeNode;
		}
	}
}

class $export bug4927934 : public ::javax::swing::event::TreeSelectionListener, public ::javax::swing::event::TreeExpansionListener, public ::java::awt::event::FocusListener {
	$class(bug4927934, 0, ::javax::swing::event::TreeSelectionListener, ::javax::swing::event::TreeExpansionListener, ::java::awt::event::FocusListener)
public:
	bug4927934();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	static bool checkSelectionChanged(::javax::swing::JTree* tree, int32_t shouldBeSel);
	static void createNodes(::javax::swing::tree::DefaultMutableTreeNode* root);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	static void hitKey(int32_t key);
	static bool isTreeCollapsed();
	static bool isTreeExpanded();
	static void main($StringArray* args);
	virtual $String* toString() override;
	virtual void treeCollapsed(::javax::swing::event::TreeExpansionEvent* e) override;
	virtual void treeExpanded(::javax::swing::event::TreeExpansionEvent* e) override;
	virtual void valueChanged(::javax::swing::event::TreeSelectionEvent* e) override;
	static $Object* listener;
	static bool focusGained$;
	static bool selectionChanged;
	static bool treeExpanded$;
	static bool treeCollapsed$;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTree* tree;
	static ::java::awt::Robot* robot;
};

#endif // _bug4927934_h_