#ifndef _javax_swing_JTree_h_
#define _javax_swing_JTree_h_
//$ class javax.swing.JTree
//$ extends javax.swing.JComponent
//$ implements javax.swing.Scrollable,javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Scrollable.h>

#pragma push_macro("ANCHOR_SELECTION_PATH_PROPERTY")
#undef ANCHOR_SELECTION_PATH_PROPERTY
#pragma push_macro("CELL_EDITOR_PROPERTY")
#undef CELL_EDITOR_PROPERTY
#pragma push_macro("CELL_RENDERER_PROPERTY")
#undef CELL_RENDERER_PROPERTY
#pragma push_macro("EDITABLE_PROPERTY")
#undef EDITABLE_PROPERTY
#pragma push_macro("EXPANDS_SELECTED_PATHS_PROPERTY")
#undef EXPANDS_SELECTED_PATHS_PROPERTY
#pragma push_macro("INVOKES_STOP_CELL_EDITING_PROPERTY")
#undef INVOKES_STOP_CELL_EDITING_PROPERTY
#pragma push_macro("LARGE_MODEL_PROPERTY")
#undef LARGE_MODEL_PROPERTY
#pragma push_macro("LEAD_SELECTION_PATH_PROPERTY")
#undef LEAD_SELECTION_PATH_PROPERTY
#pragma push_macro("ROOT_VISIBLE_PROPERTY")
#undef ROOT_VISIBLE_PROPERTY
#pragma push_macro("ROW_HEIGHT_PROPERTY")
#undef ROW_HEIGHT_PROPERTY
#pragma push_macro("SCROLLS_ON_EXPAND_PROPERTY")
#undef SCROLLS_ON_EXPAND_PROPERTY
#pragma push_macro("SELECTION_MODEL_PROPERTY")
#undef SELECTION_MODEL_PROPERTY
#pragma push_macro("SHOWS_ROOT_HANDLES_PROPERTY")
#undef SHOWS_ROOT_HANDLES_PROPERTY
#pragma push_macro("TEMP_STACK_SIZE")
#undef TEMP_STACK_SIZE
#pragma push_macro("TOGGLE_CLICK_COUNT_PROPERTY")
#undef TOGGLE_CLICK_COUNT_PROPERTY
#pragma push_macro("TREE_MODEL_PROPERTY")
#undef TREE_MODEL_PROPERTY
#pragma push_macro("VISIBLE_ROW_COUNT_PROPERTY")
#undef VISIBLE_ROW_COUNT_PROPERTY

namespace java {
	namespace awt {
		class Dimension;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Hashtable;
		class Stack;
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class DropMode;
		class JTree$DropLocation;
		class JTree$TreeSelectionRedirector;
		class JTree$TreeTimer;
		class TransferHandler$DropLocation;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class TreeExpansionListener;
			class TreeModelEvent;
			class TreeModelListener;
			class TreeSelectionEvent;
			class TreeSelectionListener;
			class TreeWillExpandListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
			class TreeUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Position$Bias;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class TreeCellEditor;
			class TreeCellRenderer;
			class TreeModel;
			class TreeNode;
			class TreePath;
			class TreeSelectionModel;
		}
	}
}

namespace javax {
	namespace swing {

class $export JTree : public ::javax::swing::JComponent, public ::javax::swing::Scrollable, public ::javax::accessibility::Accessible {
	$class(JTree, 0, ::javax::swing::JComponent, ::javax::swing::Scrollable, ::javax::accessibility::Accessible)
public:
	JTree();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::getToolTipText;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	using ::javax::swing::JComponent::list;
	using ::javax::swing::JComponent::isVisible;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($ObjectArray* value);
	void init$(::java::util::Vector* value);
	void init$(::java::util::Hashtable* value);
	void init$(::javax::swing::tree::TreeNode* root);
	void init$(::javax::swing::tree::TreeNode* root, bool asksAllowsChildren);
	void init$(::javax::swing::tree::TreeModel* newModel);
	virtual void addSelectionInterval(int32_t index0, int32_t index1);
	virtual void addSelectionPath(::javax::swing::tree::TreePath* path);
	virtual void addSelectionPaths($Array<::javax::swing::tree::TreePath>* paths);
	virtual void addSelectionRow(int32_t row);
	virtual void addSelectionRows($ints* rows);
	virtual void addTreeExpansionListener(::javax::swing::event::TreeExpansionListener* tel);
	virtual void addTreeSelectionListener(::javax::swing::event::TreeSelectionListener* tsl);
	virtual void addTreeWillExpandListener(::javax::swing::event::TreeWillExpandListener* tel);
	void cancelDropTimer();
	virtual void cancelEditing();
	static void checkDragEnabled(bool b);
	static void checkDropMode(::javax::swing::DropMode* dropMode);
	virtual void clearSelection();
	virtual void clearToggledPaths();
	virtual void collapsePath(::javax::swing::tree::TreePath* path);
	virtual void collapseRow(int32_t row);
	virtual $String* convertValueToText(Object$* value, bool selected, bool expanded, bool leaf, int32_t row, bool hasFocus);
	static ::javax::swing::tree::TreeModel* createTreeModel(Object$* value);
	virtual ::javax::swing::event::TreeModelListener* createTreeModelListener();
	virtual void dndDone() override;
	virtual ::javax::swing::TransferHandler$DropLocation* dropLocationForPoint(::java::awt::Point* p) override;
	virtual void expandPath(::javax::swing::tree::TreePath* path);
	void expandRoot();
	virtual void expandRow(int32_t row);
	virtual void fireTreeCollapsed(::javax::swing::tree::TreePath* path);
	virtual void fireTreeExpanded(::javax::swing::tree::TreePath* path);
	virtual void fireTreeWillCollapse(::javax::swing::tree::TreePath* path);
	virtual void fireTreeWillExpand(::javax::swing::tree::TreePath* path);
	virtual void fireValueChanged(::javax::swing::event::TreeSelectionEvent* e);
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::javax::swing::tree::TreePath* getAnchorSelectionPath();
	$Object* getArchivableExpandedState();
	virtual ::javax::swing::tree::TreeCellEditor* getCellEditor();
	virtual ::javax::swing::tree::TreeCellRenderer* getCellRenderer();
	virtual ::javax::swing::tree::TreePath* getClosestPathForLocation(int32_t x, int32_t y);
	virtual int32_t getClosestRowForLocation(int32_t x, int32_t y);
	static ::javax::swing::tree::TreeModel* getDefaultTreeModel();
	$Array<::javax::swing::tree::TreePath>* getDescendantSelectedPaths(::javax::swing::tree::TreePath* path, bool includePath);
	virtual ::java::util::Enumeration* getDescendantToggledPaths(::javax::swing::tree::TreePath* parent);
	virtual bool getDragEnabled();
	::javax::swing::JTree$DropLocation* getDropLocation();
	::javax::swing::DropMode* getDropMode();
	virtual ::javax::swing::tree::TreePath* getEditingPath();
	virtual ::java::util::Enumeration* getExpandedDescendants(::javax::swing::tree::TreePath* parent);
	virtual bool getExpandsSelectedPaths();
	virtual bool getInvokesStopCellEditing();
	virtual $Object* getLastSelectedPathComponent();
	virtual ::javax::swing::tree::TreePath* getLeadSelectionPath();
	virtual int32_t getLeadSelectionRow();
	virtual int32_t getMaxSelectionRow();
	virtual int32_t getMinSelectionRow();
	virtual ::javax::swing::tree::TreeModel* getModel();
	$ints* getModelIndexsForPath(::javax::swing::tree::TreePath* path);
	virtual ::javax::swing::tree::TreePath* getNextMatch($String* prefix, int32_t startingRow, ::javax::swing::text::Position$Bias* bias);
	virtual $Array<::javax::swing::tree::TreePath>* getPathBetweenRows(int32_t index0, int32_t index1);
	virtual ::java::awt::Rectangle* getPathBounds(::javax::swing::tree::TreePath* path);
	::javax::swing::tree::TreePath* getPathForIndexs($ints* indexs);
	virtual ::javax::swing::tree::TreePath* getPathForLocation(int32_t x, int32_t y);
	virtual ::javax::swing::tree::TreePath* getPathForRow(int32_t row);
	virtual ::java::awt::Dimension* getPreferredScrollableViewportSize() override;
	virtual ::java::awt::Rectangle* getRowBounds(int32_t row);
	virtual int32_t getRowCount();
	virtual int32_t getRowForLocation(int32_t x, int32_t y);
	virtual int32_t getRowForPath(::javax::swing::tree::TreePath* path);
	virtual int32_t getRowHeight();
	virtual int32_t getScrollableBlockIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) override;
	virtual bool getScrollableTracksViewportHeight() override;
	virtual bool getScrollableTracksViewportWidth() override;
	virtual int32_t getScrollableUnitIncrement(::java::awt::Rectangle* visibleRect, int32_t orientation, int32_t direction) override;
	virtual bool getScrollsOnExpand();
	virtual int32_t getSelectionCount();
	virtual ::javax::swing::tree::TreeSelectionModel* getSelectionModel();
	virtual ::javax::swing::tree::TreePath* getSelectionPath();
	virtual $Array<::javax::swing::tree::TreePath>* getSelectionPaths();
	virtual $ints* getSelectionRows();
	virtual bool getShowsRootHandles();
	virtual int32_t getToggleClickCount();
	virtual $String* getToolTipText(::java::awt::event::MouseEvent* event) override;
	virtual $Array<::javax::swing::event::TreeExpansionListener>* getTreeExpansionListeners();
	virtual $Array<::javax::swing::event::TreeSelectionListener>* getTreeSelectionListeners();
	virtual $Array<::javax::swing::event::TreeWillExpandListener>* getTreeWillExpandListeners();
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	virtual int32_t getVisibleRowCount();
	virtual bool hasBeenExpanded(::javax::swing::tree::TreePath* path);
	virtual bool isCollapsed(::javax::swing::tree::TreePath* path);
	virtual bool isCollapsed(int32_t row);
	virtual bool isEditable();
	virtual bool isEditing();
	virtual bool isExpanded(::javax::swing::tree::TreePath* path);
	virtual bool isExpanded(int32_t row);
	virtual bool isFixedRowHeight();
	virtual bool isLargeModel();
	virtual bool isPathEditable(::javax::swing::tree::TreePath* path);
	virtual bool isPathSelected(::javax::swing::tree::TreePath* path);
	virtual bool isRootVisible();
	virtual bool isRowSelected(int32_t row);
	virtual bool isSelectionEmpty();
	virtual bool isVisible(::javax::swing::tree::TreePath* path);
	virtual void makeVisible(::javax::swing::tree::TreePath* path);
	virtual $String* paramString() override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::javax::swing::JComponent::remove;
	virtual bool removeDescendantSelectedPaths(::javax::swing::tree::TreePath* path, bool includePath);
	virtual void removeDescendantSelectedPaths(::javax::swing::event::TreeModelEvent* e);
	virtual void removeDescendantToggledPaths(::java::util::Enumeration* toRemove);
	virtual void removeSelectionInterval(int32_t index0, int32_t index1);
	virtual void removeSelectionPath(::javax::swing::tree::TreePath* path);
	virtual void removeSelectionPaths($Array<::javax::swing::tree::TreePath>* paths);
	virtual void removeSelectionRow(int32_t row);
	virtual void removeSelectionRows($ints* rows);
	virtual void removeTreeExpansionListener(::javax::swing::event::TreeExpansionListener* tel);
	virtual void removeTreeSelectionListener(::javax::swing::event::TreeSelectionListener* tsl);
	virtual void removeTreeWillExpandListener(::javax::swing::event::TreeWillExpandListener* tel);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void scrollPathToVisible(::javax::swing::tree::TreePath* path);
	virtual void scrollRowToVisible(int32_t row);
	virtual void setAnchorSelectionPath(::javax::swing::tree::TreePath* newPath);
	virtual void setCellEditor(::javax::swing::tree::TreeCellEditor* cellEditor);
	virtual void setCellRenderer(::javax::swing::tree::TreeCellRenderer* x);
	virtual void setDragEnabled(bool b);
	virtual $Object* setDropLocation(::javax::swing::TransferHandler$DropLocation* location, Object$* state, bool forDrop) override;
	void setDropMode(::javax::swing::DropMode* dropMode);
	virtual void setEditable(bool flag);
	virtual void setExpandedState(::javax::swing::tree::TreePath* path, bool state);
	virtual void setExpandsSelectedPaths(bool newValue);
	virtual void setInvokesStopCellEditing(bool newValue);
	virtual void setLargeModel(bool newValue);
	virtual void setLeadSelectionPath(::javax::swing::tree::TreePath* newPath);
	virtual void setModel(::javax::swing::tree::TreeModel* newModel);
	virtual void setRootVisible(bool rootVisible);
	virtual void setRowHeight(int32_t rowHeight);
	virtual void setScrollsOnExpand(bool newValue);
	virtual void setSelectionInterval(int32_t index0, int32_t index1);
	virtual void setSelectionModel(::javax::swing::tree::TreeSelectionModel* selectionModel);
	virtual void setSelectionPath(::javax::swing::tree::TreePath* path);
	virtual void setSelectionPaths($Array<::javax::swing::tree::TreePath>* paths);
	virtual void setSelectionRow(int32_t row);
	virtual void setSelectionRows($ints* rows);
	virtual void setShowsRootHandles(bool newValue);
	virtual void setToggleClickCount(int32_t clickCount);
	using ::javax::swing::JComponent::setUI;
	virtual void setUI(::javax::swing::plaf::TreeUI* ui);
	virtual void setUIProperty($String* propertyName, Object$* value) override;
	virtual void setVisibleRowCount(int32_t newCount);
	void startDropTimer();
	virtual void startEditingAtPath(::javax::swing::tree::TreePath* path);
	virtual bool stopEditing();
	virtual $String* toString() override;
	virtual void treeDidChange();
	void unarchiveExpandedState(Object$* state);
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static bool $assertionsDisabled;
	static $String* uiClassID;
	::javax::swing::tree::TreeModel* treeModel = nullptr;
	::javax::swing::tree::TreeSelectionModel* selectionModel = nullptr;
	bool rootVisible = false;
	::javax::swing::tree::TreeCellRenderer* cellRenderer = nullptr;
	int32_t rowHeight = 0;
	bool rowHeightSet = false;
	::java::util::Hashtable* expandedState = nullptr;
	bool showsRootHandles = false;
	bool showsRootHandlesSet = false;
	::javax::swing::JTree$TreeSelectionRedirector* selectionRedirector = nullptr;
	::javax::swing::tree::TreeCellEditor* cellEditor = nullptr;
	bool editable = false;
	bool largeModel = false;
	int32_t visibleRowCount = 0;
	bool invokesStopCellEditing = false;
	bool scrollsOnExpand = false;
	bool scrollsOnExpandSet = false;
	int32_t toggleClickCount = 0;
	::javax::swing::event::TreeModelListener* treeModelListener = nullptr;
	::java::util::Stack* expandedStack = nullptr;
	::javax::swing::tree::TreePath* leadPath = nullptr;
	::javax::swing::tree::TreePath* anchorPath = nullptr;
	bool expandsSelectedPaths = false;
	bool settingUI = false;
	bool dragEnabled = false;
	::javax::swing::DropMode* dropMode = nullptr;
	::javax::swing::JTree$DropLocation* dropLocation = nullptr;
	bool updateInProgress = false;
	int32_t expandRow$ = 0;
	::javax::swing::JTree$TreeTimer* dropTimer = nullptr;
	::javax::swing::event::TreeExpansionListener* uiTreeExpansionListener = nullptr;
	static int32_t TEMP_STACK_SIZE;
	static $String* CELL_RENDERER_PROPERTY;
	static $String* TREE_MODEL_PROPERTY;
	static $String* ROOT_VISIBLE_PROPERTY;
	static $String* SHOWS_ROOT_HANDLES_PROPERTY;
	static $String* ROW_HEIGHT_PROPERTY;
	static $String* CELL_EDITOR_PROPERTY;
	static $String* EDITABLE_PROPERTY;
	static $String* LARGE_MODEL_PROPERTY;
	static $String* SELECTION_MODEL_PROPERTY;
	static $String* VISIBLE_ROW_COUNT_PROPERTY;
	static $String* INVOKES_STOP_CELL_EDITING_PROPERTY;
	static $String* SCROLLS_ON_EXPAND_PROPERTY;
	static $String* TOGGLE_CLICK_COUNT_PROPERTY;
	static $String* LEAD_SELECTION_PATH_PROPERTY;
	static $String* ANCHOR_SELECTION_PATH_PROPERTY;
	static $String* EXPANDS_SELECTED_PATHS_PROPERTY;
};

	} // swing
} // javax

#pragma pop_macro("ANCHOR_SELECTION_PATH_PROPERTY")
#pragma pop_macro("CELL_EDITOR_PROPERTY")
#pragma pop_macro("CELL_RENDERER_PROPERTY")
#pragma pop_macro("EDITABLE_PROPERTY")
#pragma pop_macro("EXPANDS_SELECTED_PATHS_PROPERTY")
#pragma pop_macro("INVOKES_STOP_CELL_EDITING_PROPERTY")
#pragma pop_macro("LARGE_MODEL_PROPERTY")
#pragma pop_macro("LEAD_SELECTION_PATH_PROPERTY")
#pragma pop_macro("ROOT_VISIBLE_PROPERTY")
#pragma pop_macro("ROW_HEIGHT_PROPERTY")
#pragma pop_macro("SCROLLS_ON_EXPAND_PROPERTY")
#pragma pop_macro("SELECTION_MODEL_PROPERTY")
#pragma pop_macro("SHOWS_ROOT_HANDLES_PROPERTY")
#pragma pop_macro("TEMP_STACK_SIZE")
#pragma pop_macro("TOGGLE_CLICK_COUNT_PROPERTY")
#pragma pop_macro("TREE_MODEL_PROPERTY")
#pragma pop_macro("VISIBLE_ROW_COUNT_PROPERTY")

#endif // _javax_swing_JTree_h_