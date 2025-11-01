#ifndef _javax_swing_plaf_basic_BasicTreeUI$Handler_h_
#define _javax_swing_plaf_basic_BasicTreeUI$Handler_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$Handler
//$ extends javax.swing.event.CellEditorListener
//$ implements java.awt.event.FocusListener,java.awt.event.KeyListener,java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.beans.PropertyChangeListener,javax.swing.event.TreeExpansionListener,javax.swing.event.TreeModelListener,javax.swing.event.TreeSelectionListener,javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag

#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/CellEditorListener.h>
#include <javax/swing/event/TreeExpansionListener.h>
#include <javax/swing/event/TreeModelListener.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
			class KeyEvent;
			class MouseEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		class JTree$DropLocation;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
			class TreeExpansionEvent;
			class TreeModelEvent;
			class TreeSelectionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTreeUI;
			}
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
		namespace plaf {
			namespace basic {

class BasicTreeUI$Handler : public ::javax::swing::event::CellEditorListener, public ::java::awt::event::FocusListener, public ::java::awt::event::KeyListener, public ::java::awt::event::MouseListener, public ::java::awt::event::MouseMotionListener, public ::java::beans::PropertyChangeListener, public ::javax::swing::event::TreeExpansionListener, public ::javax::swing::event::TreeModelListener, public ::javax::swing::event::TreeSelectionListener, public ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag {
	$class(BasicTreeUI$Handler, $NO_CLASS_INIT, ::javax::swing::event::CellEditorListener, ::java::awt::event::FocusListener, ::java::awt::event::KeyListener, ::java::awt::event::MouseListener, ::java::awt::event::MouseMotionListener, ::java::beans::PropertyChangeListener, ::javax::swing::event::TreeExpansionListener, ::javax::swing::event::TreeModelListener, ::javax::swing::event::TreeSelectionListener, ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag)
public:
	BasicTreeUI$Handler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0);
	virtual void dragStarting(::java::awt::event::MouseEvent* me) override;
	virtual void editingCanceled(::javax::swing::event::ChangeEvent* e) override;
	virtual void editingStopped(::javax::swing::event::ChangeEvent* e) override;
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual void handleSelection(::java::awt::event::MouseEvent* e);
	bool isActualPath(::javax::swing::tree::TreePath* path, int32_t x, int32_t y);
	bool isNavigationKey(::java::awt::event::KeyEvent* event);
	virtual void keyPressed(::java::awt::event::KeyEvent* e) override;
	virtual void keyReleased(::java::awt::event::KeyEvent* e) override;
	virtual void keyTyped(::java::awt::event::KeyEvent* e) override;
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	void mousePressedDND(::java::awt::event::MouseEvent* e);
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	void mouseReleasedDND(::java::awt::event::MouseEvent* e);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	void repaintDropLocation(::javax::swing::JTree$DropLocation* loc);
	virtual $String* toString() override;
	virtual void treeCollapsed(::javax::swing::event::TreeExpansionEvent* event) override;
	virtual void treeExpanded(::javax::swing::event::TreeExpansionEvent* event) override;
	virtual void treeNodesChanged(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeNodesInserted(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeNodesRemoved(::javax::swing::event::TreeModelEvent* e) override;
	virtual void treeStructureChanged(::javax::swing::event::TreeModelEvent* e) override;
	virtual void valueChanged(::javax::swing::event::TreeSelectionEvent* event) override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
	$String* prefix = nullptr;
	$String* typedString = nullptr;
	int64_t lastTime = 0;
	bool dragPressDidSelection = false;
	bool dragStarted = false;
	::javax::swing::tree::TreePath* pressedPath = nullptr;
	::java::awt::event::MouseEvent* pressedEvent = nullptr;
	bool valueChangedOnPress = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$Handler_h_