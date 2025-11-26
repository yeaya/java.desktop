#ifndef _javax_swing_plaf_basic_BasicListUI_h_
#define _javax_swing_plaf_basic_BasicListUI_h_
//$ class javax.swing.plaf.basic.BasicListUI
//$ extends javax.swing.plaf.ListUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/ListUI.h>

#pragma push_macro("BASELINE_COMPONENT_KEY")
#undef BASELINE_COMPONENT_KEY
#pragma push_macro("CHANGE_LEAD")
#undef CHANGE_LEAD
#pragma push_macro("CHANGE_SELECTION")
#undef CHANGE_SELECTION
#pragma push_macro("DROP_LINE_THICKNESS")
#undef DROP_LINE_THICKNESS
#pragma push_macro("EXTEND_SELECTION")
#undef EXTEND_SELECTION

namespace java {
	namespace awt {
		class Component$BaselineResizeBehavior;
		class Dimension;
		class Graphics;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusListener;
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
namespace javax {
	namespace swing {
		class CellRendererPane;
		class InputMap;
		class JComponent;
		class JList;
		class JList$DropLocation;
		class ListCellRenderer;
		class ListModel;
		class ListSelectionModel;
		class TransferHandler;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ListDataListener;
			class ListSelectionListener;
			class MouseInputListener;
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
				class BasicListUI$Handler;
				class LazyActionMap;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicListUI : public ::javax::swing::plaf::ListUI {
	$class(BasicListUI, 0, ::javax::swing::plaf::ListUI)
public:
	BasicListUI();
	void init$();
	static int32_t adjustIndex(int32_t index, ::javax::swing::JList* list);
	int32_t convertLocationToColumn(int32_t x, int32_t y);
	int32_t convertLocationToModel(int32_t x, int32_t y);
	int32_t convertLocationToRow(int32_t x, int32_t y0, bool closest);
	int32_t convertLocationToRowInColumn(int32_t y, int32_t column);
	int32_t convertModelToColumn(int32_t index);
	int32_t convertModelToRow(int32_t index);
	virtual int32_t convertRowToY(int32_t row);
	virtual int32_t convertYToRow(int32_t y0);
	virtual ::java::awt::event::FocusListener* createFocusListener();
	virtual ::javax::swing::event::ListDataListener* createListDataListener();
	virtual ::javax::swing::event::ListSelectionListener* createListSelectionListener();
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* list);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Rectangle* getCellBounds(::javax::swing::JList* list, int32_t index1, int32_t index2) override;
	::java::awt::Rectangle* getCellBounds(::javax::swing::JList* list, int32_t index);
	::java::awt::Rectangle* getDropLineRect(::javax::swing::JList$DropLocation* loc);
	::javax::swing::plaf::basic::BasicListUI$Handler* getHandler();
	int32_t getHeight(int32_t column, int32_t row);
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	int32_t getModelIndex(int32_t column, int32_t row);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	int32_t getRowCount(int32_t column);
	virtual int32_t getRowHeight(int32_t row);
	virtual ::java::awt::Point* indexToLocation(::javax::swing::JList* list, int32_t index) override;
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual int32_t locationToIndex(::javax::swing::JList* list, ::java::awt::Point* location) override;
	virtual void maybeUpdateLayoutState();
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paintCell(::java::awt::Graphics* g, int32_t row, ::java::awt::Rectangle* rowBounds, ::javax::swing::ListCellRenderer* cellRenderer, ::javax::swing::ListModel* dataModel, ::javax::swing::ListSelectionModel* selModel, int32_t leadIndex);
	void paintDropLine(::java::awt::Graphics* g);
	void paintImpl(::java::awt::Graphics* g, ::javax::swing::JComponent* c);
	void redrawList();
	virtual void selectNextIndex();
	virtual void selectPreviousIndex();
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	void updateHorizontalLayoutState(int32_t fixedCellWidth, int32_t fixedCellHeight);
	void updateIsFileList();
	virtual void updateLayoutState();
	static ::java::lang::StringBuilder* BASELINE_COMPONENT_KEY;
	::javax::swing::JList* list = nullptr;
	::javax::swing::CellRendererPane* rendererPane = nullptr;
	::java::awt::event::FocusListener* focusListener = nullptr;
	::javax::swing::event::MouseInputListener* mouseInputListener = nullptr;
	::javax::swing::event::ListSelectionListener* listSelectionListener = nullptr;
	::javax::swing::event::ListDataListener* listDataListener = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::javax::swing::plaf::basic::BasicListUI$Handler* handler = nullptr;
	$ints* cellHeights = nullptr;
	int32_t cellHeight = 0;
	int32_t cellWidth = 0;
	int32_t updateLayoutStateNeeded = 0;
	int32_t listHeight = 0;
	int32_t listWidth = 0;
	int32_t layoutOrientation = 0;
	int32_t columnCount = 0;
	int32_t preferredHeight = 0;
	int32_t rowsPerColumn = 0;
	int64_t timeFactor = 0;
	bool isFileList = false;
	bool isLeftToRight = false;
	static const int32_t modelChanged = 1; // 1 << 0
	static const int32_t selectionModelChanged = 2; // 1 << 1
	static const int32_t fontChanged = 4; // 1 << 2
	static const int32_t fixedCellWidthChanged = 8; // 1 << 3
	static const int32_t fixedCellHeightChanged = 16; // 1 << 4
	static const int32_t prototypeCellValueChanged = 32; // 1 << 5
	static const int32_t cellRendererChanged = 64; // 1 << 6
	static const int32_t layoutOrientationChanged = 128; // 1 << 7
	static const int32_t heightChanged = 256; // 1 << 8
	static const int32_t widthChanged = 512; // 1 << 9
	static const int32_t componentOrientationChanged = 1024; // 1 << 10
	static const int32_t DROP_LINE_THICKNESS = 2;
	static const int32_t CHANGE_LEAD = 0;
	static const int32_t CHANGE_SELECTION = 1;
	static const int32_t EXTEND_SELECTION = 2;
	static ::javax::swing::TransferHandler* defaultTransferHandler;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BASELINE_COMPONENT_KEY")
#pragma pop_macro("CHANGE_LEAD")
#pragma pop_macro("CHANGE_SELECTION")
#pragma pop_macro("DROP_LINE_THICKNESS")
#pragma pop_macro("EXTEND_SELECTION")

#endif // _javax_swing_plaf_basic_BasicListUI_h_