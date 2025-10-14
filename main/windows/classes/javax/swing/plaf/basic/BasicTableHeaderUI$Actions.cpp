#include <javax/swing/plaf/basic/BasicTableHeaderUI$Actions.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JTable.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef FOCUS_TABLE
#undef MOVE_COLUMN_LEFT
#undef MOVE_COLUMN_RIGHT
#undef RESIZE_LEFT
#undef RESIZE_RIGHT
#undef SELECT_COLUMN_TO_LEFT
#undef SELECT_COLUMN_TO_RIGHT
#undef TOGGLE_SORT_ORDER

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $RowSorter = ::javax::swing::RowSorter;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TableHeaderUI = ::javax::swing::plaf::TableHeaderUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTableHeaderUI$Actions_FieldInfo_[] = {
	{"TOGGLE_SORT_ORDER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicTableHeaderUI$Actions, TOGGLE_SORT_ORDER)},
	{"SELECT_COLUMN_TO_LEFT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicTableHeaderUI$Actions, SELECT_COLUMN_TO_LEFT)},
	{"SELECT_COLUMN_TO_RIGHT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicTableHeaderUI$Actions, SELECT_COLUMN_TO_RIGHT)},
	{"MOVE_COLUMN_LEFT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicTableHeaderUI$Actions, MOVE_COLUMN_LEFT)},
	{"MOVE_COLUMN_RIGHT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicTableHeaderUI$Actions, MOVE_COLUMN_RIGHT)},
	{"RESIZE_LEFT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicTableHeaderUI$Actions, RESIZE_LEFT)},
	{"RESIZE_RIGHT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicTableHeaderUI$Actions, RESIZE_RIGHT)},
	{"FOCUS_TABLE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicTableHeaderUI$Actions, FOCUS_TABLE)},
	{}
};

$MethodInfo _BasicTableHeaderUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTableHeaderUI$Actions::*)($String*)>(&BasicTableHeaderUI$Actions::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"maybeMoveColumn", "(ZLjavax/swing/table/JTableHeader;Ljavax/swing/plaf/basic/BasicTableHeaderUI;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicTableHeaderUI$Actions::*)(bool,$JTableHeader*,$BasicTableHeaderUI*,bool)>(&BasicTableHeaderUI$Actions::maybeMoveColumn))},
	{"moveColumn", "(ZLjavax/swing/table/JTableHeader;Ljavax/swing/plaf/basic/BasicTableHeaderUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableHeaderUI$Actions::*)(bool,$JTableHeader*,$BasicTableHeaderUI*)>(&BasicTableHeaderUI$Actions::moveColumn))},
	{"resize", "(ZLjavax/swing/table/JTableHeader;Ljavax/swing/plaf/basic/BasicTableHeaderUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableHeaderUI$Actions::*)(bool,$JTableHeader*,$BasicTableHeaderUI*)>(&BasicTableHeaderUI$Actions::resize))},
	{}
};

$InnerClassInfo _BasicTableHeaderUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTableHeaderUI$Actions", "javax.swing.plaf.basic.BasicTableHeaderUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicTableHeaderUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTableHeaderUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicTableHeaderUI$Actions_FieldInfo_,
	_BasicTableHeaderUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTableHeaderUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTableHeaderUI"
};

$Object* allocate$BasicTableHeaderUI$Actions($Class* clazz) {
	return $of($alloc(BasicTableHeaderUI$Actions));
}

$String* BasicTableHeaderUI$Actions::TOGGLE_SORT_ORDER = nullptr;
$String* BasicTableHeaderUI$Actions::SELECT_COLUMN_TO_LEFT = nullptr;
$String* BasicTableHeaderUI$Actions::SELECT_COLUMN_TO_RIGHT = nullptr;
$String* BasicTableHeaderUI$Actions::MOVE_COLUMN_LEFT = nullptr;
$String* BasicTableHeaderUI$Actions::MOVE_COLUMN_RIGHT = nullptr;
$String* BasicTableHeaderUI$Actions::RESIZE_LEFT = nullptr;
$String* BasicTableHeaderUI$Actions::RESIZE_RIGHT = nullptr;
$String* BasicTableHeaderUI$Actions::FOCUS_TABLE = nullptr;

void BasicTableHeaderUI$Actions::init$($String* name) {
	$UIAction::init$(name);
}

bool BasicTableHeaderUI$Actions::accept(Object$* sender) {
	if ($instanceOf($JTableHeader, sender)) {
		$var($JTableHeader, th, $cast($JTableHeader, sender));
		$var($TableColumnModel, cm, $nc(th)->getColumnModel());
		if ($nc(cm)->getColumnCount() <= 0) {
			return false;
		}
		$var($String, key, getName());
		$load($BasicTableHeaderUI);
		$var($BasicTableHeaderUI, ui, $cast($BasicTableHeaderUI, $BasicLookAndFeel::getUIOfType($(th->getUI()), $BasicTableHeaderUI::class$)));
		if (ui != nullptr) {
			if (key == BasicTableHeaderUI$Actions::MOVE_COLUMN_LEFT) {
				bool var$0 = th->getReorderingAllowed();
				return var$0 && maybeMoveColumn(true, th, ui, false);
			} else if (key == BasicTableHeaderUI$Actions::MOVE_COLUMN_RIGHT) {
				bool var$1 = th->getReorderingAllowed();
				return var$1 && maybeMoveColumn(false, th, ui, false);
			} else if (key == BasicTableHeaderUI$Actions::RESIZE_LEFT || key == BasicTableHeaderUI$Actions::RESIZE_RIGHT) {
				return $BasicTableHeaderUI::canResize($($nc(cm)->getColumn(ui->getSelectedColumnIndex())), th);
			} else if (key == BasicTableHeaderUI$Actions::FOCUS_TABLE) {
				return (th->getTable() != nullptr);
			}
		}
	}
	return true;
}

void BasicTableHeaderUI$Actions::actionPerformed($ActionEvent* e) {
	$var($JTableHeader, th, $cast($JTableHeader, $nc(e)->getSource()));
	$load($BasicTableHeaderUI);
	$var($BasicTableHeaderUI, ui, $cast($BasicTableHeaderUI, $BasicLookAndFeel::getUIOfType($($nc(th)->getUI()), $BasicTableHeaderUI::class$)));
	if (ui == nullptr) {
		return;
	}
	$var($String, name, getName());
	if (BasicTableHeaderUI$Actions::TOGGLE_SORT_ORDER == name) {
		$var($JTable, table, $nc(th)->getTable());
		$var($RowSorter, sorter, table == nullptr ? ($RowSorter*)nullptr : $nc(table)->getRowSorter());
		if (sorter != nullptr) {
			int32_t columnIndex = $nc(ui)->getSelectedColumnIndex();
			columnIndex = table->convertColumnIndexToModel(columnIndex);
			sorter->toggleSortOrder(columnIndex);
		}
	} else if (BasicTableHeaderUI$Actions::SELECT_COLUMN_TO_LEFT == name) {
		if ($nc($($nc(th)->getComponentOrientation()))->isLeftToRight()) {
			$nc(ui)->selectPreviousColumn(true);
		} else {
			$nc(ui)->selectNextColumn(true);
		}
	} else if (BasicTableHeaderUI$Actions::SELECT_COLUMN_TO_RIGHT == name) {
		if ($nc($($nc(th)->getComponentOrientation()))->isLeftToRight()) {
			$nc(ui)->selectNextColumn(true);
		} else {
			$nc(ui)->selectPreviousColumn(true);
		}
	} else if (BasicTableHeaderUI$Actions::MOVE_COLUMN_LEFT == name) {
		moveColumn(true, th, ui);
	} else if (BasicTableHeaderUI$Actions::MOVE_COLUMN_RIGHT == name) {
		moveColumn(false, th, ui);
	} else if (BasicTableHeaderUI$Actions::RESIZE_LEFT == name) {
		resize(true, th, ui);
	} else if (BasicTableHeaderUI$Actions::RESIZE_RIGHT == name) {
		resize(false, th, ui);
	} else if (BasicTableHeaderUI$Actions::FOCUS_TABLE == name) {
		$var($JTable, table, $nc(th)->getTable());
		if (table != nullptr) {
			table->requestFocusInWindow();
		}
	}
}

void BasicTableHeaderUI$Actions::moveColumn(bool leftArrow, $JTableHeader* th, $BasicTableHeaderUI* ui) {
	maybeMoveColumn(leftArrow, th, ui, true);
}

bool BasicTableHeaderUI$Actions::maybeMoveColumn(bool leftArrow, $JTableHeader* th, $BasicTableHeaderUI* ui, bool doIt) {
	int32_t oldIndex = $nc(ui)->getSelectedColumnIndex();
	int32_t newIndex = 0;
	if ($nc($($nc(th)->getComponentOrientation()))->isLeftToRight()) {
		newIndex = leftArrow ? ui->selectPreviousColumn(doIt) : ui->selectNextColumn(doIt);
	} else {
		newIndex = leftArrow ? ui->selectNextColumn(doIt) : ui->selectPreviousColumn(doIt);
	}
	if (newIndex != oldIndex) {
		if (doIt) {
			$nc($($nc(th)->getColumnModel()))->moveColumn(oldIndex, newIndex);
		} else {
			return true;
		}
	}
	return false;
}

void BasicTableHeaderUI$Actions::resize(bool leftArrow, $JTableHeader* th, $BasicTableHeaderUI* ui) {
	int32_t columnIndex = $nc(ui)->getSelectedColumnIndex();
	$var($TableColumn, resizingColumn, $nc($($nc(th)->getColumnModel()))->getColumn(columnIndex));
	th->setResizingColumn(resizingColumn);
	int32_t oldWidth = $nc(resizingColumn)->getWidth();
	int32_t newWidth = oldWidth;
	if ($nc($(th->getComponentOrientation()))->isLeftToRight()) {
		newWidth = newWidth + (leftArrow ? -1 : 1);
	} else {
		newWidth = newWidth + (leftArrow ? 1 : -1);
	}
	ui->changeColumnWidth(resizingColumn, th, oldWidth, newWidth);
}

BasicTableHeaderUI$Actions::BasicTableHeaderUI$Actions() {
}

void clinit$BasicTableHeaderUI$Actions($Class* class$) {
	$assignStatic(BasicTableHeaderUI$Actions::TOGGLE_SORT_ORDER, "toggleSortOrder"_s);
	$assignStatic(BasicTableHeaderUI$Actions::SELECT_COLUMN_TO_LEFT, "selectColumnToLeft"_s);
	$assignStatic(BasicTableHeaderUI$Actions::SELECT_COLUMN_TO_RIGHT, "selectColumnToRight"_s);
	$assignStatic(BasicTableHeaderUI$Actions::MOVE_COLUMN_LEFT, "moveColumnLeft"_s);
	$assignStatic(BasicTableHeaderUI$Actions::MOVE_COLUMN_RIGHT, "moveColumnRight"_s);
	$assignStatic(BasicTableHeaderUI$Actions::RESIZE_LEFT, "resizeLeft"_s);
	$assignStatic(BasicTableHeaderUI$Actions::RESIZE_RIGHT, "resizeRight"_s);
	$assignStatic(BasicTableHeaderUI$Actions::FOCUS_TABLE, "focusTable"_s);
}

$Class* BasicTableHeaderUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicTableHeaderUI$Actions, name, initialize, &_BasicTableHeaderUI$Actions_ClassInfo_, clinit$BasicTableHeaderUI$Actions, allocate$BasicTableHeaderUI$Actions);
	return class$;
}

$Class* BasicTableHeaderUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax