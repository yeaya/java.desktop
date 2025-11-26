#ifndef _javax_swing_plaf_basic_BasicTableHeaderUI$MouseInputHandler_h_
#define _javax_swing_plaf_basic_BasicTableHeaderUI$MouseInputHandler_h_
//$ class javax.swing.plaf.basic.BasicTableHeaderUI$MouseInputHandler
//$ extends javax.swing.event.MouseInputListener

#include <javax/swing/event/MouseInputListener.h>

namespace java {
	namespace awt {
		class Cursor;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTableHeaderUI;
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

class $export BasicTableHeaderUI$MouseInputHandler : public ::javax::swing::event::MouseInputListener {
	$class(BasicTableHeaderUI$MouseInputHandler, $NO_CLASS_INIT, ::javax::swing::event::MouseInputListener)
public:
	BasicTableHeaderUI$MouseInputHandler();
	void init$(::javax::swing::plaf::basic::BasicTableHeaderUI* this$0);
	::javax::swing::table::TableColumn* getResizingColumn(::java::awt::Point* p);
	::javax::swing::table::TableColumn* getResizingColumn(::java::awt::Point* p, int32_t column);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	void setDraggedDistance(int32_t draggedDistance, int32_t column);
	void swapCursor();
	::javax::swing::plaf::basic::BasicTableHeaderUI* this$0 = nullptr;
	int32_t mouseXOffset = 0;
	::java::awt::Cursor* otherCursor = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTableHeaderUI$MouseInputHandler_h_