#ifndef _javax_swing_plaf_basic_BasicTableHeaderUI_h_
#define _javax_swing_plaf_basic_BasicTableHeaderUI_h_
//$ class javax.swing.plaf.basic.BasicTableHeaderUI
//$ extends javax.swing.plaf.TableHeaderUI

#include <javax/swing/plaf/TableHeaderUI.h>

namespace java {
	namespace awt {
		class Component;
		class Cursor;
		class Dimension;
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusListener;
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class CellRendererPane;
		class JComponent;
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
				class LazyActionMap;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class JTableHeader;
			class TableColumn;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTableHeaderUI : public ::javax::swing::plaf::TableHeaderUI {
	$class(BasicTableHeaderUI, 0, ::javax::swing::plaf::TableHeaderUI)
public:
	BasicTableHeaderUI();
	void init$();
	static bool canResize(::javax::swing::table::TableColumn* column, ::javax::swing::table::JTableHeader* header);
	int32_t changeColumnWidth(::javax::swing::table::TableColumn* resizingColumn, ::javax::swing::table::JTableHeader* th, int32_t oldWidth, int32_t newWidth);
	::java::awt::Dimension* createHeaderSize(int64_t width);
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* h);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	int32_t getHeaderHeight();
	::java::awt::Component* getHeaderRenderer(int32_t columnIndex);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual int32_t getRolloverColumn();
	int32_t getSelectedColumnIndex();
	virtual void installDefaults();
	virtual void installKeyboardActions();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	static void loadActionMap(::javax::swing::plaf::basic::LazyActionMap* map);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void paintCell(::java::awt::Graphics* g, ::java::awt::Rectangle* cellRect, int32_t columnIndex);
	virtual void rolloverColumnUpdated(int32_t oldColumn, int32_t newColumn);
	void scrollToColumn(int32_t col);
	virtual void selectColumn(int32_t newColIndex);
	virtual void selectColumn(int32_t newColIndex, bool doScroll);
	int32_t selectNextColumn(bool doIt);
	int32_t selectPreviousColumn(bool doIt);
	virtual void uninstallDefaults();
	virtual void uninstallKeyboardActions();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	void updateRolloverColumn(::java::awt::event::MouseEvent* e);
	int32_t viewIndexForColumn(::javax::swing::table::TableColumn* aColumn);
	static ::java::awt::Cursor* resizeCursor;
	::javax::swing::table::JTableHeader* header = nullptr;
	::javax::swing::CellRendererPane* rendererPane = nullptr;
	::javax::swing::event::MouseInputListener* mouseInputListener = nullptr;
	int32_t rolloverColumn = 0;
	int32_t selectedColumnIndex = 0;
	static ::java::awt::event::FocusListener* focusListener;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTableHeaderUI_h_