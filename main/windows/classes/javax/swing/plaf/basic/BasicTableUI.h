#ifndef _javax_swing_plaf_basic_BasicTableUI_h_
#define _javax_swing_plaf_basic_BasicTableUI_h_
//$ class javax.swing.plaf.basic.BasicTableUI
//$ extends javax.swing.plaf.TableUI

#include <javax/swing/plaf/TableUI.h>

#pragma push_macro("BASELINE_COMPONENT_KEY")
#undef BASELINE_COMPONENT_KEY

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
			class KeyListener;
		}
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
		class JTable;
		class JTable$DropLocation;
		class ListSelectionModel;
		class TransferHandler;
	}
}
namespace javax {
	namespace swing {
		namespace event {
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
				class BasicTableUI$Handler;
				class LazyActionMap;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class TableColumn;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTableUI : public ::javax::swing::plaf::TableUI {
	$class(BasicTableUI, 0, ::javax::swing::plaf::TableUI)
public:
	BasicTableUI();
	void init$();
	virtual ::java::awt::event::FocusListener* createFocusListener();
	virtual ::java::awt::event::KeyListener* createKeyListener();
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener();
	::java::awt::Dimension* createTableSize(int64_t width);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	::java::awt::Rectangle* extendRect(::java::awt::Rectangle* rect, bool horizontal);
	static int32_t getAdjustedLead(::javax::swing::JTable* table, bool row, ::javax::swing::ListSelectionModel* model);
	static int32_t getAdjustedLead(::javax::swing::JTable* table, bool row);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	::java::awt::Rectangle* getHDropLineRect(::javax::swing::JTable$DropLocation* loc);
	::javax::swing::plaf::basic::BasicTableUI$Handler* getHandler();
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	::java::awt::Rectangle* getVDropLineRect(::javax::swing::JTable$DropLocation* loc);
	virtual void installDefaults();
	void installDefaults2();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void paintCell(::java::awt::Graphics* g, ::java::awt::Rectangle* cellRect, int32_t row, int32_t column);
	void paintCells(::java::awt::Graphics* g, int32_t rMin, int32_t rMax, int32_t cMin, int32_t cMax);
	void paintDraggedArea(::java::awt::Graphics* g, int32_t rMin, int32_t rMax, ::javax::swing::table::TableColumn* draggedColumn, int32_t distance);
	void paintDropLines(::java::awt::Graphics* g);
	void paintGrid(::java::awt::Graphics* g, int32_t rMin, int32_t rMax, int32_t cMin, int32_t cMax);
	bool pointOutsidePrefSize(int32_t row, int32_t column, ::java::awt::Point* p);
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	int32_t viewIndexForColumn(::javax::swing::table::TableColumn* aColumn);
	static ::java::lang::StringBuilder* BASELINE_COMPONENT_KEY;
	::javax::swing::JTable* table = nullptr;
	::javax::swing::CellRendererPane* rendererPane = nullptr;
	::java::awt::event::KeyListener* keyListener = nullptr;
	::java::awt::event::FocusListener* focusListener = nullptr;
	::javax::swing::event::MouseInputListener* mouseInputListener = nullptr;
	::javax::swing::plaf::basic::BasicTableUI$Handler* handler = nullptr;
	bool isFileList = false;
	static ::javax::swing::TransferHandler* defaultTransferHandler;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("BASELINE_COMPONENT_KEY")

#endif // _javax_swing_plaf_basic_BasicTableUI_h_