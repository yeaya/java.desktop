#ifndef _javax_swing_plaf_basic_BasicTreeUI_h_
#define _javax_swing_plaf_basic_BasicTreeUI_h_
//$ class javax.swing.plaf.basic.BasicTreeUI
//$ extends javax.swing.plaf.TreeUI

#include <javax/swing/plaf/TreeUI.h>

#pragma push_macro("BASELINE_COMPONENT_KEY")
#undef BASELINE_COMPONENT_KEY
#pragma push_macro("SHARED_ACTION")
#undef SHARED_ACTION

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Component$BaselineResizeBehavior;
		class Dimension;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ComponentListener;
			class FocusListener;
			class KeyListener;
			class MouseEvent;
			class MouseListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		class CellRendererPane;
		class Icon;
		class InputMap;
		class JComponent;
		class JTree;
		class JTree$DropLocation;
		class TransferHandler;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class CellEditorListener;
			class TreeExpansionListener;
			class TreeModelListener;
			class TreeSelectionListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTreeUI$Actions;
				class BasicTreeUI$Handler;
				class LazyActionMap;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class AbstractLayoutCache;
			class AbstractLayoutCache$NodeDimensions;
			class TreeCellEditor;
			class TreeCellRenderer;
			class TreeModel;
			class TreePath;
			class TreeSelectionModel;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicTreeUI : public ::javax::swing::plaf::TreeUI {
	$class(BasicTreeUI, 0, ::javax::swing::plaf::TreeUI)
public:
	BasicTreeUI();
	void init$();
	virtual void cancelEditing(::javax::swing::JTree* tree) override;
	virtual void checkForClickInExpandControl(::javax::swing::tree::TreePath* path, int32_t mouseX, int32_t mouseY);
	virtual void completeEditing();
	virtual void completeEditing(bool messageStop, bool messageCancel, bool messageTree);
	virtual void completeUIInstall();
	virtual void completeUIUninstall();
	virtual void configureLayoutCache();
	virtual ::javax::swing::event::CellEditorListener* createCellEditorListener();
	virtual ::javax::swing::CellRendererPane* createCellRendererPane();
	virtual ::java::awt::event::ComponentListener* createComponentListener();
	virtual ::javax::swing::tree::TreeCellEditor* createDefaultCellEditor();
	virtual ::javax::swing::tree::TreeCellRenderer* createDefaultCellRenderer();
	virtual ::java::awt::event::FocusListener* createFocusListener();
	virtual ::java::awt::event::KeyListener* createKeyListener();
	virtual ::javax::swing::tree::AbstractLayoutCache* createLayoutCache();
	virtual ::java::awt::event::MouseListener* createMouseListener();
	virtual ::javax::swing::tree::AbstractLayoutCache$NodeDimensions* createNodeDimensions();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	virtual ::java::beans::PropertyChangeListener* createSelectionModelPropertyChangeListener();
	virtual ::javax::swing::event::TreeExpansionListener* createTreeExpansionListener();
	virtual ::javax::swing::event::TreeModelListener* createTreeModelListener();
	virtual ::javax::swing::event::TreeSelectionListener* createTreeSelectionListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual void drawCentered(::java::awt::Component* c, ::java::awt::Graphics* graphics, ::javax::swing::Icon* icon, int32_t x, int32_t y);
	virtual void drawDashedHorizontalLine(::java::awt::Graphics* g, int32_t y, int32_t x1, int32_t x2);
	void drawDashedLine(::java::awt::Graphics* g, int32_t v, int32_t v1, int32_t v2, bool isVertical);
	virtual void drawDashedVerticalLine(::java::awt::Graphics* g, int32_t x, int32_t y1, int32_t y2);
	virtual void ensureRowsAreVisible(int32_t beginRow, int32_t endRow);
	void extendSelection(::javax::swing::tree::TreePath* newLead);
	int32_t findCenteredX(int32_t x, int32_t iconWidth);
	::javax::swing::tree::TreePath* getAnchorSelectionPath();
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::tree::TreeCellEditor* getCellEditor();
	virtual ::javax::swing::tree::TreeCellRenderer* getCellRenderer();
	virtual ::javax::swing::tree::TreePath* getClosestPathForLocation(::javax::swing::JTree* tree, int32_t x, int32_t y) override;
	virtual ::javax::swing::Icon* getCollapsedIcon();
	virtual ::java::awt::Rectangle* getDropLineRect(::javax::swing::JTree$DropLocation* loc);
	virtual ::javax::swing::tree::TreePath* getEditingPath(::javax::swing::JTree* tree) override;
	virtual ::javax::swing::Icon* getExpandedIcon();
	::javax::swing::plaf::basic::BasicTreeUI$Handler* getHandler();
	virtual ::java::awt::Color* getHashColor();
	virtual int32_t getHorizontalLegBuffer();
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	virtual ::javax::swing::tree::TreePath* getLastChildPath(::javax::swing::tree::TreePath* parent);
	::javax::swing::tree::TreePath* getLeadSelectionPath();
	virtual int32_t getLeadSelectionRow();
	virtual int32_t getLeftChildIndent();
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::tree::TreeModel* getModel();
	virtual ::java::awt::Rectangle* getPathBounds(::javax::swing::JTree* tree, ::javax::swing::tree::TreePath* path) override;
	::java::awt::Rectangle* getPathBounds(::javax::swing::tree::TreePath* path, ::java::awt::Insets* insets, ::java::awt::Rectangle* bounds);
	virtual ::javax::swing::tree::TreePath* getPathForRow(::javax::swing::JTree* tree, int32_t row) override;
	virtual ::java::awt::Dimension* getPreferredMinSize();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c, bool checkConsistency);
	::java::awt::Rectangle* getRepaintPathBounds(::java::awt::Rectangle* bounds);
	virtual int32_t getRightChildIndent();
	virtual int32_t getRowCount(::javax::swing::JTree* tree) override;
	virtual int32_t getRowForPath(::javax::swing::JTree* tree, ::javax::swing::tree::TreePath* path) override;
	virtual int32_t getRowHeight();
	virtual int32_t getRowX(int32_t row, int32_t depth);
	virtual ::javax::swing::tree::TreeSelectionModel* getSelectionModel();
	virtual bool getShowsRootHandles();
	virtual int32_t getVerticalLegBuffer();
	virtual void handleExpandControlClick(::javax::swing::tree::TreePath* path, int32_t mouseX, int32_t mouseY);
	virtual void installComponents();
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual bool isDropLine(::javax::swing::JTree$DropLocation* loc);
	virtual bool isEditable();
	virtual bool isEditing(::javax::swing::JTree* tree) override;
	virtual bool isLargeModel();
	virtual bool isLeaf(int32_t row);
	virtual bool isLocationInExpandControl(::javax::swing::tree::TreePath* path, int32_t mouseX, int32_t mouseY);
	virtual bool isMultiSelectEvent(::java::awt::event::MouseEvent* event);
	virtual bool isRootVisible();
	virtual bool isToggleEvent(::java::awt::event::MouseEvent* event);
	virtual bool isToggleSelectionEvent(::java::awt::event::MouseEvent* event);
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintDropLine(::java::awt::Graphics* g);
	virtual void paintExpandControl(::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::java::awt::Rectangle* bounds, ::javax::swing::tree::TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf);
	virtual void paintHorizontalLine(::java::awt::Graphics* g, ::javax::swing::JComponent* c, int32_t y, int32_t left, int32_t right);
	virtual void paintHorizontalPartOfLeg(::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::java::awt::Rectangle* bounds, ::javax::swing::tree::TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf);
	virtual void paintRow(::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::java::awt::Rectangle* bounds, ::javax::swing::tree::TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf);
	virtual void paintVerticalLine(::java::awt::Graphics* g, ::javax::swing::JComponent* c, int32_t x, int32_t top, int32_t bottom);
	virtual void paintVerticalPartOfLeg(::java::awt::Graphics* g, ::java::awt::Rectangle* clipBounds, ::java::awt::Insets* insets, ::javax::swing::tree::TreePath* path);
	virtual void pathWasCollapsed(::javax::swing::tree::TreePath* path);
	virtual void pathWasExpanded(::javax::swing::tree::TreePath* path);
	virtual void prepareForUIInstall();
	virtual void prepareForUIUninstall();
	void redoTheLayout();
	void repaintPath(::javax::swing::tree::TreePath* path);
	virtual void selectPathForEvent(::javax::swing::tree::TreePath* path, ::java::awt::event::MouseEvent* event);
	void setAnchorSelectionPath(::javax::swing::tree::TreePath* newPath);
	virtual void setCellEditor(::javax::swing::tree::TreeCellEditor* editor);
	virtual void setCellRenderer(::javax::swing::tree::TreeCellRenderer* tcr);
	virtual void setCollapsedIcon(::javax::swing::Icon* newG);
	virtual void setEditable(bool newValue);
	virtual void setExpandedIcon(::javax::swing::Icon* newG);
	virtual void setHashColor(::java::awt::Color* color);
	virtual void setLargeModel(bool largeModel);
	void setLeadSelectionPath(::javax::swing::tree::TreePath* newPath);
	void setLeadSelectionPath(::javax::swing::tree::TreePath* newPath, bool repaint);
	virtual void setLeftChildIndent(int32_t newAmount);
	virtual void setModel(::javax::swing::tree::TreeModel* model);
	virtual void setPreferredMinSize(::java::awt::Dimension* newSize);
	virtual void setRightChildIndent(int32_t newAmount);
	virtual void setRootVisible(bool newValue);
	virtual void setRowHeight(int32_t rowHeight);
	virtual void setSelectionModel(::javax::swing::tree::TreeSelectionModel* newLSM);
	virtual void setShowsRootHandles(bool newValue);
	virtual bool shouldPaintExpandControl(::javax::swing::tree::TreePath* path, int32_t row, bool isExpanded, bool hasBeenExpanded, bool isLeaf);
	virtual bool startEditing(::javax::swing::tree::TreePath* path, ::java::awt::event::MouseEvent* event);
	virtual void startEditingAtPath(::javax::swing::JTree* tree, ::javax::swing::tree::TreePath* path) override;
	bool startEditingOnRelease(::javax::swing::tree::TreePath* path, ::java::awt::event::MouseEvent* event, ::java::awt::event::MouseEvent* releaseEvent);
	virtual bool stopEditing(::javax::swing::JTree* tree) override;
	virtual void toggleExpandState(::javax::swing::tree::TreePath* path);
	virtual void uninstallComponents();
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void updateCachedPreferredSize();
	virtual void updateCellEditor();
	virtual void updateDepthOffset();
	virtual void updateExpandedDescendants(::javax::swing::tree::TreePath* path);
	virtual void updateLayoutCacheExpandedNodes();
	void updateLayoutCacheExpandedNodesIfNecessary();
	virtual void updateLeadSelectionRow();
	virtual void updateRenderer();
	virtual void updateSize();
	void updateSize0();
	static ::java::lang::StringBuilder* BASELINE_COMPONENT_KEY;
	static ::javax::swing::plaf::basic::BasicTreeUI$Actions* SHARED_ACTION;
	::javax::swing::Icon* collapsedIcon = nullptr;
	::javax::swing::Icon* expandedIcon = nullptr;
	::java::awt::Color* hashColor = nullptr;
	int32_t leftChildIndent = 0;
	int32_t rightChildIndent = 0;
	int32_t totalChildIndent = 0;
	::java::awt::Dimension* preferredMinSize = nullptr;
	int32_t lastSelectedRow = 0;
	::javax::swing::JTree* tree = nullptr;
	::javax::swing::tree::TreeCellRenderer* currentCellRenderer = nullptr;
	bool createdRenderer = false;
	::javax::swing::tree::TreeCellEditor* cellEditor = nullptr;
	bool createdCellEditor = false;
	bool stopEditingInCompleteEditing = false;
	::javax::swing::CellRendererPane* rendererPane = nullptr;
	::java::awt::Dimension* preferredSize = nullptr;
	bool validCachedPreferredSize = false;
	::javax::swing::tree::AbstractLayoutCache* treeState = nullptr;
	::java::util::Hashtable* drawingCache = nullptr;
	bool largeModel = false;
	::javax::swing::tree::AbstractLayoutCache$NodeDimensions* nodeDimensions = nullptr;
	::javax::swing::tree::TreeModel* treeModel = nullptr;
	::javax::swing::tree::TreeSelectionModel* treeSelectionModel = nullptr;
	int32_t depthOffset = 0;
	::java::awt::Component* editingComponent = nullptr;
	::javax::swing::tree::TreePath* editingPath = nullptr;
	int32_t editingRow = 0;
	bool editorHasDifferentSize = false;
	int32_t leadRow = 0;
	bool ignoreLAChange = false;
	bool leftToRight = false;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::java::beans::PropertyChangeListener* selectionModelPropertyChangeListener = nullptr;
	::java::awt::event::MouseListener* mouseListener = nullptr;
	::java::awt::event::FocusListener* focusListener = nullptr;
	::java::awt::event::KeyListener* keyListener = nullptr;
	::java::awt::event::ComponentListener* componentListener = nullptr;
	::javax::swing::event::CellEditorListener* cellEditorListener = nullptr;
	::javax::swing::event::TreeSelectionListener* treeSelectionListener = nullptr;
	::javax::swing::event::TreeModelListener* treeModelListener = nullptr;
	::javax::swing::event::TreeExpansionListener* treeExpansionListener = nullptr;
	bool paintLines = false;
	bool lineTypeDashed = false;
	int64_t timeFactor = 0;
	::javax::swing::plaf::basic::BasicTreeUI$Handler* handler = nullptr;
	::java::awt::event::MouseEvent* releaseEvent = nullptr;
	static ::javax::swing::TransferHandler* defaultTransferHandler;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BASELINE_COMPONENT_KEY")
#pragma pop_macro("SHARED_ACTION")

#endif // _javax_swing_plaf_basic_BasicTreeUI_h_