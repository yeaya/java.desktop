#include <javax/swing/plaf/basic/BasicTableHeaderUI$MouseInputHandler.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Cursor.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Cursor = ::java::awt::Cursor;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $RowSorter = ::javax::swing::RowSorter;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTableHeaderUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTableHeaderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTableHeaderUI$MouseInputHandler, this$0)},
	{"mouseXOffset", "I", nullptr, $PRIVATE, $field(BasicTableHeaderUI$MouseInputHandler, mouseXOffset)},
	{"otherCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE, $field(BasicTableHeaderUI$MouseInputHandler, otherCursor)},
	{}
};

$MethodInfo _BasicTableHeaderUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTableHeaderUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTableHeaderUI$MouseInputHandler::*)($BasicTableHeaderUI*)>(&BasicTableHeaderUI$MouseInputHandler::init$))},
	{"getResizingColumn", "(Ljava/awt/Point;)Ljavax/swing/table/TableColumn;", nullptr, $PRIVATE, $method(static_cast<$TableColumn*(BasicTableHeaderUI$MouseInputHandler::*)($Point*)>(&BasicTableHeaderUI$MouseInputHandler::getResizingColumn))},
	{"getResizingColumn", "(Ljava/awt/Point;I)Ljavax/swing/table/TableColumn;", nullptr, $PRIVATE, $method(static_cast<$TableColumn*(BasicTableHeaderUI$MouseInputHandler::*)($Point*,int32_t)>(&BasicTableHeaderUI$MouseInputHandler::getResizingColumn))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"setDraggedDistance", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableHeaderUI$MouseInputHandler::*)(int32_t,int32_t)>(&BasicTableHeaderUI$MouseInputHandler::setDraggedDistance))},
	{"swapCursor", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableHeaderUI$MouseInputHandler::*)()>(&BasicTableHeaderUI$MouseInputHandler::swapCursor))},
	{}
};

$InnerClassInfo _BasicTableHeaderUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTableHeaderUI$MouseInputHandler", "javax.swing.plaf.basic.BasicTableHeaderUI", "MouseInputHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicTableHeaderUI$MouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTableHeaderUI$MouseInputHandler",
	"java.lang.Object",
	"javax.swing.event.MouseInputListener",
	_BasicTableHeaderUI$MouseInputHandler_FieldInfo_,
	_BasicTableHeaderUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTableHeaderUI$MouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTableHeaderUI"
};

$Object* allocate$BasicTableHeaderUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(BasicTableHeaderUI$MouseInputHandler));
}

void BasicTableHeaderUI$MouseInputHandler::init$($BasicTableHeaderUI* this$0) {
	$set(this, this$0, this$0);
	$init($BasicTableHeaderUI);
	$set(this, otherCursor, $BasicTableHeaderUI::resizeCursor);
}

void BasicTableHeaderUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
	if (!$nc(this->this$0->header)->isEnabled()) {
		return;
	}
	bool var$0 = $nc(e)->getClickCount() % 2 == 1;
	if (var$0 && $SwingUtilities::isLeftMouseButton(e)) {
		$var($JTable, table, $nc(this->this$0->header)->getTable());
		$var($RowSorter, sorter, nullptr);
		if (table != nullptr && ($assign(sorter, table->getRowSorter())) != nullptr) {
			int32_t columnIndex = $nc(this->this$0->header)->columnAtPoint($(e->getPoint()));
			if (columnIndex != -1) {
				columnIndex = table->convertColumnIndexToModel(columnIndex);
				$nc(sorter)->toggleSortOrder(columnIndex);
			}
		}
	}
}

$TableColumn* BasicTableHeaderUI$MouseInputHandler::getResizingColumn($Point* p) {
	return getResizingColumn(p, $nc(this->this$0->header)->columnAtPoint(p));
}

$TableColumn* BasicTableHeaderUI$MouseInputHandler::getResizingColumn($Point* p, int32_t column) {
	if (column == -1) {
		return nullptr;
	}
	$var($Rectangle, r, $nc(this->this$0->header)->getHeaderRect(column));
	$nc(r)->grow(-3, 0);
	if (r->contains(p)) {
		return nullptr;
	}
	int32_t midPoint = r->x + r->width / 2;
	int32_t columnIndex = 0;
	if ($nc($($nc(this->this$0->header)->getComponentOrientation()))->isLeftToRight()) {
		columnIndex = ($nc(p)->x < midPoint) ? column - 1 : column;
	} else {
		columnIndex = ($nc(p)->x < midPoint) ? column : column - 1;
	}
	if (columnIndex == -1) {
		return nullptr;
	}
	return $nc($($nc(this->this$0->header)->getColumnModel()))->getColumn(columnIndex);
}

void BasicTableHeaderUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	if (!$nc(this->this$0->header)->isEnabled()) {
		return;
	}
	$nc(this->this$0->header)->setDraggedColumn(nullptr);
	$nc(this->this$0->header)->setResizingColumn(nullptr);
	$nc(this->this$0->header)->setDraggedDistance(0);
	$var($Point, p, $nc(e)->getPoint());
	$var($TableColumnModel, columnModel, $nc(this->this$0->header)->getColumnModel());
	int32_t index = $nc(this->this$0->header)->columnAtPoint(p);
	if (index != -1) {
		$var($TableColumn, resizingColumn, getResizingColumn(p, index));
		if ($BasicTableHeaderUI::canResize(resizingColumn, this->this$0->header)) {
			$nc(this->this$0->header)->setResizingColumn(resizingColumn);
			if ($nc($($nc(this->this$0->header)->getComponentOrientation()))->isLeftToRight()) {
				this->mouseXOffset = $nc(p)->x - $nc(resizingColumn)->getWidth();
			} else {
				this->mouseXOffset = $nc(p)->x + $nc(resizingColumn)->getWidth();
			}
		} else if ($nc(this->this$0->header)->getReorderingAllowed()) {
			$var($TableColumn, hitColumn, $nc(columnModel)->getColumn(index));
			$nc(this->this$0->header)->setDraggedColumn(hitColumn);
			this->mouseXOffset = $nc(p)->x;
		}
	}
	if ($nc(this->this$0->header)->getReorderingAllowed()) {
		int32_t oldRolloverColumn = this->this$0->rolloverColumn;
		this->this$0->rolloverColumn = -1;
		this->this$0->rolloverColumnUpdated(oldRolloverColumn, this->this$0->rolloverColumn);
	}
}

void BasicTableHeaderUI$MouseInputHandler::swapCursor() {
	$var($Cursor, tmp, $nc(this->this$0->header)->getCursor());
	$nc(this->this$0->header)->setCursor(this->otherCursor);
	$set(this, otherCursor, tmp);
}

void BasicTableHeaderUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
	if (!$nc(this->this$0->header)->isEnabled()) {
		return;
	}
	bool var$0 = $BasicTableHeaderUI::canResize($(getResizingColumn($($nc(e)->getPoint()))), this->this$0->header);
	if (var$0 != ($nc(this->this$0->header)->getCursor() == $BasicTableHeaderUI::resizeCursor)) {
		swapCursor();
	}
	this->this$0->updateRolloverColumn(e);
}

void BasicTableHeaderUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	if (!$nc(this->this$0->header)->isEnabled()) {
		return;
	}
	int32_t mouseX = $nc(e)->getX();
	$var($TableColumn, resizingColumn, $nc(this->this$0->header)->getResizingColumn());
	$var($TableColumn, draggedColumn, $nc(this->this$0->header)->getDraggedColumn());
	bool headerLeftToRight = $nc($($nc(this->this$0->header)->getComponentOrientation()))->isLeftToRight();
	if (resizingColumn != nullptr) {
		int32_t oldWidth = resizingColumn->getWidth();
		int32_t newWidth = 0;
		if (headerLeftToRight) {
			newWidth = mouseX - this->mouseXOffset;
		} else {
			newWidth = this->mouseXOffset - mouseX;
		}
		this->mouseXOffset += this->this$0->changeColumnWidth(resizingColumn, this->this$0->header, oldWidth, newWidth);
	} else if (draggedColumn != nullptr) {
		$var($TableColumnModel, cm, $nc(this->this$0->header)->getColumnModel());
		int32_t draggedDistance = mouseX - this->mouseXOffset;
		int32_t direction = (draggedDistance < 0) ? -1 : 1;
		int32_t columnIndex = this->this$0->viewIndexForColumn(draggedColumn);
		int32_t newColumnIndex = columnIndex + (headerLeftToRight ? direction : -direction);
		if (0 <= newColumnIndex && newColumnIndex < $nc(cm)->getColumnCount()) {
			int32_t width = $nc($(cm->getColumn(newColumnIndex)))->getWidth();
			if ($Math::abs(draggedDistance) > (width / 2)) {
				this->mouseXOffset = this->mouseXOffset + direction * width;
				$nc(this->this$0->header)->setDraggedDistance(draggedDistance - direction * width);
				$var($TableColumnModel, var$0, $nc(this->this$0->header)->getColumnModel());
				int32_t selectedIndex = $SwingUtilities2::convertColumnIndexToModel(var$0, this->this$0->getSelectedColumnIndex());
				cm->moveColumn(columnIndex, newColumnIndex);
				this->this$0->selectColumn($SwingUtilities2::convertColumnIndexToView($($nc(this->this$0->header)->getColumnModel()), selectedIndex), false);
				return;
			}
		}
		setDraggedDistance(draggedDistance, columnIndex);
	}
	this->this$0->updateRolloverColumn(e);
}

void BasicTableHeaderUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	if (!$nc(this->this$0->header)->isEnabled()) {
		return;
	}
	setDraggedDistance(0, this->this$0->viewIndexForColumn($($nc(this->this$0->header)->getDraggedColumn())));
	$nc(this->this$0->header)->setResizingColumn(nullptr);
	$nc(this->this$0->header)->setDraggedColumn(nullptr);
	this->this$0->updateRolloverColumn(e);
}

void BasicTableHeaderUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
	if (!$nc(this->this$0->header)->isEnabled()) {
		return;
	}
	this->this$0->updateRolloverColumn(e);
}

void BasicTableHeaderUI$MouseInputHandler::mouseExited($MouseEvent* e) {
	if (!$nc(this->this$0->header)->isEnabled()) {
		return;
	}
	int32_t oldRolloverColumn = this->this$0->rolloverColumn;
	this->this$0->rolloverColumn = -1;
	this->this$0->rolloverColumnUpdated(oldRolloverColumn, this->this$0->rolloverColumn);
}

void BasicTableHeaderUI$MouseInputHandler::setDraggedDistance(int32_t draggedDistance, int32_t column) {
	$nc(this->this$0->header)->setDraggedDistance(draggedDistance);
	if (column != -1) {
		$nc($($nc(this->this$0->header)->getColumnModel()))->moveColumn(column, column);
	}
}

BasicTableHeaderUI$MouseInputHandler::BasicTableHeaderUI$MouseInputHandler() {
}

$Class* BasicTableHeaderUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTableHeaderUI$MouseInputHandler, name, initialize, &_BasicTableHeaderUI$MouseInputHandler_ClassInfo_, allocate$BasicTableHeaderUI$MouseInputHandler);
	return class$;
}

$Class* BasicTableHeaderUI$MouseInputHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax