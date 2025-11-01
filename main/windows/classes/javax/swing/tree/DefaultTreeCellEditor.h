#ifndef _javax_swing_tree_DefaultTreeCellEditor_h_
#define _javax_swing_tree_DefaultTreeCellEditor_h_
//$ class javax.swing.tree.DefaultTreeCellEditor
//$ extends java.awt.event.ActionListener
//$ implements javax.swing.tree.TreeCellEditor,javax.swing.event.TreeSelectionListener

#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/tree/TreeCellEditor.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Container;
		class Font;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace util {
		class EventObject;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JTree;
		class Timer;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class CellEditorListener;
			class TreeSelectionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultTreeCellRenderer;
			class TreePath;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $export DefaultTreeCellEditor : public ::java::awt::event::ActionListener, public ::javax::swing::tree::TreeCellEditor, public ::javax::swing::event::TreeSelectionListener {
	$class(DefaultTreeCellEditor, $NO_CLASS_INIT, ::java::awt::event::ActionListener, ::javax::swing::tree::TreeCellEditor, ::javax::swing::event::TreeSelectionListener)
public:
	DefaultTreeCellEditor();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JTree* tree, ::javax::swing::tree::DefaultTreeCellRenderer* renderer);
	void init$(::javax::swing::JTree* tree, ::javax::swing::tree::DefaultTreeCellRenderer* renderer, ::javax::swing::tree::TreeCellEditor* editor);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void addCellEditorListener(::javax::swing::event::CellEditorListener* l) override;
	virtual bool canEditImmediately(::java::util::EventObject* event);
	virtual void cancelCellEditing() override;
	void cleanupAfterEditing();
	virtual ::java::awt::Container* createContainer();
	virtual ::javax::swing::tree::TreeCellEditor* createTreeCellEditor();
	virtual void determineOffset(::javax::swing::JTree* tree, Object$* value, bool isSelected, bool expanded, bool leaf, int32_t row);
	virtual ::java::awt::Color* getBorderSelectionColor();
	virtual $Array<::javax::swing::event::CellEditorListener>* getCellEditorListeners();
	virtual $Object* getCellEditorValue() override;
	virtual ::java::awt::Font* getFont();
	virtual ::java::awt::Component* getTreeCellEditorComponent(::javax::swing::JTree* tree, Object$* value, bool isSelected, bool expanded, bool leaf, int32_t row) override;
	virtual bool inHitRegion(int32_t x, int32_t y);
	virtual bool isCellEditable(::java::util::EventObject* event) override;
	virtual void prepareForEditing();
	virtual void removeCellEditorListener(::javax::swing::event::CellEditorListener* l) override;
	virtual void setBorderSelectionColor(::java::awt::Color* newColor);
	virtual void setFont(::java::awt::Font* font);
	virtual void setTree(::javax::swing::JTree* newTree);
	virtual bool shouldSelectCell(::java::util::EventObject* event) override;
	virtual bool shouldStartEditingTimer(::java::util::EventObject* event);
	virtual void startEditingTimer();
	virtual bool stopCellEditing() override;
	virtual $String* toString() override;
	virtual void valueChanged(::javax::swing::event::TreeSelectionEvent* e) override;
	::javax::swing::tree::TreeCellEditor* realEditor = nullptr;
	::javax::swing::tree::DefaultTreeCellRenderer* renderer = nullptr;
	::java::awt::Container* editingContainer = nullptr;
	::java::awt::Component* editingComponent = nullptr;
	bool canEdit = false;
	int32_t offset = 0;
	::javax::swing::JTree* tree = nullptr;
	::javax::swing::tree::TreePath* lastPath = nullptr;
	::javax::swing::Timer* timer = nullptr;
	int32_t lastRow = 0;
	::java::awt::Color* borderSelectionColor = nullptr;
	::javax::swing::Icon* editingIcon = nullptr;
	::java::awt::Font* font = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_DefaultTreeCellEditor_h_