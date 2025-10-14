#include <javax/swing/plaf/basic/BasicTableUI$Actions.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/CellEditor.h>
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TableHeaderUI.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableColumnModel.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef ADD_TO_SELECTION
#undef CANCEL_EDITING
#undef CLEAR_SELECTION
#undef EXTEND_TO
#undef FIRST_COLUMN
#undef FIRST_COLUMN_EXTEND_SELECTION
#undef FIRST_ROW
#undef FIRST_ROW_EXTEND_SELECTION
#undef FOCUS_HEADER
#undef LAST_COLUMN
#undef LAST_COLUMN_EXTEND_SELECTION
#undef LAST_ROW
#undef LAST_ROW_EXTEND_SELECTION
#undef MOVE_SELECTION_TO
#undef MULTIPLE_INTERVAL_SELECTION
#undef NEXT_COLUMN
#undef NEXT_COLUMN_CELL
#undef NEXT_COLUMN_CHANGE_LEAD
#undef NEXT_COLUMN_EXTEND_SELECTION
#undef NEXT_ROW
#undef NEXT_ROW_CELL
#undef NEXT_ROW_CHANGE_LEAD
#undef NEXT_ROW_EXTEND_SELECTION
#undef PREVIOUS_COLUMN
#undef PREVIOUS_COLUMN_CELL
#undef PREVIOUS_COLUMN_CHANGE_LEAD
#undef PREVIOUS_COLUMN_EXTEND_SELECTION
#undef PREVIOUS_ROW
#undef PREVIOUS_ROW_CELL
#undef PREVIOUS_ROW_CHANGE_LEAD
#undef PREVIOUS_ROW_EXTEND_SELECTION
#undef SCROLL_DOWN_CHANGE_SELECTION
#undef SCROLL_DOWN_EXTEND_SELECTION
#undef SCROLL_LEFT_CHANGE_SELECTION
#undef SCROLL_LEFT_EXTEND_SELECTION
#undef SCROLL_RIGHT_CHANGE_SELECTION
#undef SCROLL_RIGHT_EXTEND_SELECTION
#undef SCROLL_UP_CHANGE_SELECTION
#undef SCROLL_UP_EXTEND_SELECTION
#undef SELECT_ALL
#undef START_EDITING
#undef TOGGLE_AND_ANCHOR
#undef TRUE

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $CellEditor = ::javax::swing::CellEditor;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $JComponent = ::javax::swing::JComponent;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TableHeaderUI = ::javax::swing::plaf::TableHeaderUI;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTableUI$Actions_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BasicTableUI$Actions, $assertionsDisabled)},
	{"CANCEL_EDITING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, CANCEL_EDITING)},
	{"SELECT_ALL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, SELECT_ALL)},
	{"CLEAR_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, CLEAR_SELECTION)},
	{"START_EDITING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, START_EDITING)},
	{"NEXT_ROW", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, NEXT_ROW)},
	{"NEXT_ROW_CELL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, NEXT_ROW_CELL)},
	{"NEXT_ROW_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, NEXT_ROW_EXTEND_SELECTION)},
	{"NEXT_ROW_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, NEXT_ROW_CHANGE_LEAD)},
	{"PREVIOUS_ROW", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, PREVIOUS_ROW)},
	{"PREVIOUS_ROW_CELL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, PREVIOUS_ROW_CELL)},
	{"PREVIOUS_ROW_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, PREVIOUS_ROW_EXTEND_SELECTION)},
	{"PREVIOUS_ROW_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, PREVIOUS_ROW_CHANGE_LEAD)},
	{"NEXT_COLUMN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, NEXT_COLUMN)},
	{"NEXT_COLUMN_CELL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, NEXT_COLUMN_CELL)},
	{"NEXT_COLUMN_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, NEXT_COLUMN_EXTEND_SELECTION)},
	{"NEXT_COLUMN_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, NEXT_COLUMN_CHANGE_LEAD)},
	{"PREVIOUS_COLUMN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, PREVIOUS_COLUMN)},
	{"PREVIOUS_COLUMN_CELL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, PREVIOUS_COLUMN_CELL)},
	{"PREVIOUS_COLUMN_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, PREVIOUS_COLUMN_EXTEND_SELECTION)},
	{"PREVIOUS_COLUMN_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, PREVIOUS_COLUMN_CHANGE_LEAD)},
	{"SCROLL_LEFT_CHANGE_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, SCROLL_LEFT_CHANGE_SELECTION)},
	{"SCROLL_LEFT_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, SCROLL_LEFT_EXTEND_SELECTION)},
	{"SCROLL_RIGHT_CHANGE_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, SCROLL_RIGHT_CHANGE_SELECTION)},
	{"SCROLL_RIGHT_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, SCROLL_RIGHT_EXTEND_SELECTION)},
	{"SCROLL_UP_CHANGE_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, SCROLL_UP_CHANGE_SELECTION)},
	{"SCROLL_UP_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, SCROLL_UP_EXTEND_SELECTION)},
	{"SCROLL_DOWN_CHANGE_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, SCROLL_DOWN_CHANGE_SELECTION)},
	{"SCROLL_DOWN_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, SCROLL_DOWN_EXTEND_SELECTION)},
	{"FIRST_COLUMN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, FIRST_COLUMN)},
	{"FIRST_COLUMN_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, FIRST_COLUMN_EXTEND_SELECTION)},
	{"LAST_COLUMN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, LAST_COLUMN)},
	{"LAST_COLUMN_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, LAST_COLUMN_EXTEND_SELECTION)},
	{"FIRST_ROW", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, FIRST_ROW)},
	{"FIRST_ROW_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, FIRST_ROW_EXTEND_SELECTION)},
	{"LAST_ROW", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, LAST_ROW)},
	{"LAST_ROW_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, LAST_ROW_EXTEND_SELECTION)},
	{"ADD_TO_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, ADD_TO_SELECTION)},
	{"TOGGLE_AND_ANCHOR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, TOGGLE_AND_ANCHOR)},
	{"EXTEND_TO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, EXTEND_TO)},
	{"MOVE_SELECTION_TO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, MOVE_SELECTION_TO)},
	{"FOCUS_HEADER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTableUI$Actions, FOCUS_HEADER)},
	{"dx", "I", nullptr, $PROTECTED, $field(BasicTableUI$Actions, dx)},
	{"dy", "I", nullptr, $PROTECTED, $field(BasicTableUI$Actions, dy)},
	{"extend", "Z", nullptr, $PROTECTED, $field(BasicTableUI$Actions, extend)},
	{"inSelection", "Z", nullptr, $PROTECTED, $field(BasicTableUI$Actions, inSelection)},
	{"forwards", "Z", nullptr, $PROTECTED, $field(BasicTableUI$Actions, forwards)},
	{"vertically", "Z", nullptr, $PROTECTED, $field(BasicTableUI$Actions, vertically)},
	{"toLimit", "Z", nullptr, $PROTECTED, $field(BasicTableUI$Actions, toLimit)},
	{"leadRow", "I", nullptr, $PROTECTED, $field(BasicTableUI$Actions, leadRow)},
	{"leadColumn", "I", nullptr, $PROTECTED, $field(BasicTableUI$Actions, leadColumn)},
	{}
};

$MethodInfo _BasicTableUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicTableUI$Actions::*)($String*)>(&BasicTableUI$Actions::init$))},
	{"<init>", "(Ljava/lang/String;IIZZ)V", nullptr, 0, $method(static_cast<void(BasicTableUI$Actions::*)($String*,int32_t,int32_t,bool,bool)>(&BasicTableUI$Actions::init$))},
	{"<init>", "(Ljava/lang/String;ZZZZ)V", nullptr, 0, $method(static_cast<void(BasicTableUI$Actions::*)($String*,bool,bool,bool,bool)>(&BasicTableUI$Actions::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"calcNextPos", "(IIIIII)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI$Actions::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&BasicTableUI$Actions::calcNextPos))},
	{"clipToRange", "(III)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&BasicTableUI$Actions::clipToRange))},
	{"moveWithinSelectedRange", "(Ljavax/swing/JTable;IILjavax/swing/ListSelectionModel;Ljavax/swing/ListSelectionModel;)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicTableUI$Actions::*)($JTable*,int32_t,int32_t,$ListSelectionModel*,$ListSelectionModel*)>(&BasicTableUI$Actions::moveWithinSelectedRange))},
	{"moveWithinTableRange", "(Ljavax/swing/JTable;II)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI$Actions::*)($JTable*,int32_t,int32_t)>(&BasicTableUI$Actions::moveWithinTableRange))},
	{"sign", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&BasicTableUI$Actions::sign))},
	{}
};

$InnerClassInfo _BasicTableUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTableUI$Actions", "javax.swing.plaf.basic.BasicTableUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicTableUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTableUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicTableUI$Actions_FieldInfo_,
	_BasicTableUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTableUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTableUI"
};

$Object* allocate$BasicTableUI$Actions($Class* clazz) {
	return $of($alloc(BasicTableUI$Actions));
}

bool BasicTableUI$Actions::$assertionsDisabled = false;
$String* BasicTableUI$Actions::CANCEL_EDITING = nullptr;
$String* BasicTableUI$Actions::SELECT_ALL = nullptr;
$String* BasicTableUI$Actions::CLEAR_SELECTION = nullptr;
$String* BasicTableUI$Actions::START_EDITING = nullptr;
$String* BasicTableUI$Actions::NEXT_ROW = nullptr;
$String* BasicTableUI$Actions::NEXT_ROW_CELL = nullptr;
$String* BasicTableUI$Actions::NEXT_ROW_EXTEND_SELECTION = nullptr;
$String* BasicTableUI$Actions::NEXT_ROW_CHANGE_LEAD = nullptr;
$String* BasicTableUI$Actions::PREVIOUS_ROW = nullptr;
$String* BasicTableUI$Actions::PREVIOUS_ROW_CELL = nullptr;
$String* BasicTableUI$Actions::PREVIOUS_ROW_EXTEND_SELECTION = nullptr;
$String* BasicTableUI$Actions::PREVIOUS_ROW_CHANGE_LEAD = nullptr;
$String* BasicTableUI$Actions::NEXT_COLUMN = nullptr;
$String* BasicTableUI$Actions::NEXT_COLUMN_CELL = nullptr;
$String* BasicTableUI$Actions::NEXT_COLUMN_EXTEND_SELECTION = nullptr;
$String* BasicTableUI$Actions::NEXT_COLUMN_CHANGE_LEAD = nullptr;
$String* BasicTableUI$Actions::PREVIOUS_COLUMN = nullptr;
$String* BasicTableUI$Actions::PREVIOUS_COLUMN_CELL = nullptr;
$String* BasicTableUI$Actions::PREVIOUS_COLUMN_EXTEND_SELECTION = nullptr;
$String* BasicTableUI$Actions::PREVIOUS_COLUMN_CHANGE_LEAD = nullptr;
$String* BasicTableUI$Actions::SCROLL_LEFT_CHANGE_SELECTION = nullptr;
$String* BasicTableUI$Actions::SCROLL_LEFT_EXTEND_SELECTION = nullptr;
$String* BasicTableUI$Actions::SCROLL_RIGHT_CHANGE_SELECTION = nullptr;
$String* BasicTableUI$Actions::SCROLL_RIGHT_EXTEND_SELECTION = nullptr;
$String* BasicTableUI$Actions::SCROLL_UP_CHANGE_SELECTION = nullptr;
$String* BasicTableUI$Actions::SCROLL_UP_EXTEND_SELECTION = nullptr;
$String* BasicTableUI$Actions::SCROLL_DOWN_CHANGE_SELECTION = nullptr;
$String* BasicTableUI$Actions::SCROLL_DOWN_EXTEND_SELECTION = nullptr;
$String* BasicTableUI$Actions::FIRST_COLUMN = nullptr;
$String* BasicTableUI$Actions::FIRST_COLUMN_EXTEND_SELECTION = nullptr;
$String* BasicTableUI$Actions::LAST_COLUMN = nullptr;
$String* BasicTableUI$Actions::LAST_COLUMN_EXTEND_SELECTION = nullptr;
$String* BasicTableUI$Actions::FIRST_ROW = nullptr;
$String* BasicTableUI$Actions::FIRST_ROW_EXTEND_SELECTION = nullptr;
$String* BasicTableUI$Actions::LAST_ROW = nullptr;
$String* BasicTableUI$Actions::LAST_ROW_EXTEND_SELECTION = nullptr;
$String* BasicTableUI$Actions::ADD_TO_SELECTION = nullptr;
$String* BasicTableUI$Actions::TOGGLE_AND_ANCHOR = nullptr;
$String* BasicTableUI$Actions::EXTEND_TO = nullptr;
$String* BasicTableUI$Actions::MOVE_SELECTION_TO = nullptr;
$String* BasicTableUI$Actions::FOCUS_HEADER = nullptr;

void BasicTableUI$Actions::init$($String* name) {
	$UIAction::init$(name);
}

void BasicTableUI$Actions::init$($String* name, int32_t dx, int32_t dy, bool extend, bool inSelection) {
	$UIAction::init$(name);
	if (inSelection) {
		this->inSelection = true;
		dx = sign(dx);
		dy = sign(dy);
		if (!BasicTableUI$Actions::$assertionsDisabled && !((dx == 0 || dy == 0) && !(dx == 0 && dy == 0))) {
			$throwNew($AssertionError);
		}
	}
	this->dx = dx;
	this->dy = dy;
	this->extend = extend;
}

void BasicTableUI$Actions::init$($String* name, bool extend, bool forwards, bool vertically, bool toLimit) {
	BasicTableUI$Actions::init$(name, 0, 0, extend, false);
	this->forwards = forwards;
	this->vertically = vertically;
	this->toLimit = toLimit;
}

int32_t BasicTableUI$Actions::clipToRange(int32_t i, int32_t a, int32_t b) {
	$init(BasicTableUI$Actions);
	return $Math::min($Math::max(i, a), b - 1);
}

void BasicTableUI$Actions::moveWithinTableRange($JTable* table, int32_t dx, int32_t dy) {
	this->leadRow = clipToRange(this->leadRow + dy, 0, $nc(table)->getRowCount());
	this->leadColumn = clipToRange(this->leadColumn + dx, 0, $nc(table)->getColumnCount());
}

int32_t BasicTableUI$Actions::sign(int32_t num) {
	$init(BasicTableUI$Actions);
	return (num < 0) ? -1 : ((num == 0) ? 0 : 1);
}

bool BasicTableUI$Actions::moveWithinSelectedRange($JTable* table, int32_t dx, int32_t dy, $ListSelectionModel* rsm, $ListSelectionModel* csm) {
	int32_t totalCount = 0;
	int32_t minX = 0;
	int32_t maxX = 0;
	int32_t minY = 0;
	int32_t maxY = 0;
	bool rs = $nc(table)->getRowSelectionAllowed();
	bool cs = table->getColumnSelectionAllowed();
	if (rs && cs) {
		int32_t var$0 = table->getSelectedRowCount();
		totalCount = var$0 * table->getSelectedColumnCount();
		minX = $nc(csm)->getMinSelectionIndex();
		maxX = csm->getMaxSelectionIndex();
		minY = $nc(rsm)->getMinSelectionIndex();
		maxY = rsm->getMaxSelectionIndex();
	} else if (rs) {
		totalCount = table->getSelectedRowCount();
		minX = 0;
		maxX = table->getColumnCount() - 1;
		minY = $nc(rsm)->getMinSelectionIndex();
		maxY = rsm->getMaxSelectionIndex();
	} else if (cs) {
		totalCount = table->getSelectedColumnCount();
		minX = $nc(csm)->getMinSelectionIndex();
		maxX = csm->getMaxSelectionIndex();
		minY = 0;
		maxY = table->getRowCount() - 1;
	} else {
		totalCount = 0;
		minX = (maxX = (minY = (maxY = 0)));
	}
	bool stayInSelection = false;
	if (totalCount == 0 || (totalCount == 1 && table->isCellSelected(this->leadRow, this->leadColumn))) {
		stayInSelection = false;
		maxX = table->getColumnCount() - 1;
		maxY = table->getRowCount() - 1;
		minX = $Math::min(0, maxX);
		minY = $Math::min(0, maxY);
	} else {
		stayInSelection = true;
	}
	if (dy == 1 && this->leadColumn == -1) {
		this->leadColumn = minX;
		this->leadRow = -1;
	} else if (dx == 1 && this->leadRow == -1) {
		this->leadRow = minY;
		this->leadColumn = -1;
	} else if (dy == -1 && this->leadColumn == -1) {
		this->leadColumn = maxX;
		this->leadRow = maxY + 1;
	} else if (dx == -1 && this->leadRow == -1) {
		this->leadRow = maxY;
		this->leadColumn = maxX + 1;
	}
	this->leadRow = $Math::min($Math::max(this->leadRow, minY - 1), maxY + 1);
	this->leadColumn = $Math::min($Math::max(this->leadColumn, minX - 1), maxX + 1);
	do {
		calcNextPos(dx, minX, maxX, dy, minY, maxY);
	} while (stayInSelection && !table->isCellSelected(this->leadRow, this->leadColumn));
	return stayInSelection;
}

void BasicTableUI$Actions::calcNextPos(int32_t dx, int32_t minX, int32_t maxX, int32_t dy, int32_t minY, int32_t maxY) {
	if (dx != 0) {
		this->leadColumn += dx;
		if (this->leadColumn > maxX) {
			this->leadColumn = minX;
			++this->leadRow;
			if (this->leadRow > maxY) {
				this->leadRow = minY;
			}
		} else if (this->leadColumn < minX) {
			this->leadColumn = maxX;
			--this->leadRow;
			if (this->leadRow < minY) {
				this->leadRow = maxY;
			}
		}
	} else {
		this->leadRow += dy;
		if (this->leadRow > maxY) {
			this->leadRow = minY;
			++this->leadColumn;
			if (this->leadColumn > maxX) {
				this->leadColumn = minX;
			}
		} else if (this->leadRow < minY) {
			this->leadRow = maxY;
			--this->leadColumn;
			if (this->leadColumn < minX) {
				this->leadColumn = maxX;
			}
		}
	}
}

void BasicTableUI$Actions::actionPerformed($ActionEvent* e) {
	$var($String, key, getName());
	$var($JTable, table, $cast($JTable, $nc(e)->getSource()));
	$var($ListSelectionModel, rsm, $nc(table)->getSelectionModel());
	this->leadRow = $BasicTableUI::getAdjustedLead(table, true, rsm);
	$var($ListSelectionModel, csm, $nc($(table->getColumnModel()))->getSelectionModel());
	this->leadColumn = $BasicTableUI::getAdjustedLead(table, false, csm);
	if (key == BasicTableUI$Actions::SCROLL_LEFT_CHANGE_SELECTION || key == BasicTableUI$Actions::SCROLL_LEFT_EXTEND_SELECTION || key == BasicTableUI$Actions::SCROLL_RIGHT_CHANGE_SELECTION || key == BasicTableUI$Actions::SCROLL_RIGHT_EXTEND_SELECTION || key == BasicTableUI$Actions::SCROLL_UP_CHANGE_SELECTION || key == BasicTableUI$Actions::SCROLL_UP_EXTEND_SELECTION || key == BasicTableUI$Actions::SCROLL_DOWN_CHANGE_SELECTION || key == BasicTableUI$Actions::SCROLL_DOWN_EXTEND_SELECTION || key == BasicTableUI$Actions::FIRST_COLUMN || key == BasicTableUI$Actions::FIRST_COLUMN_EXTEND_SELECTION || key == BasicTableUI$Actions::FIRST_ROW || key == BasicTableUI$Actions::FIRST_ROW_EXTEND_SELECTION || key == BasicTableUI$Actions::LAST_COLUMN || key == BasicTableUI$Actions::LAST_COLUMN_EXTEND_SELECTION || key == BasicTableUI$Actions::LAST_ROW || key == BasicTableUI$Actions::LAST_ROW_EXTEND_SELECTION) {
		if (this->toLimit) {
			if (this->vertically) {
				int32_t rowCount = table->getRowCount();
				this->dx = 0;
				this->dy = this->forwards ? rowCount : -rowCount;
			} else {
				int32_t colCount = table->getColumnCount();
				this->dx = this->forwards ? colCount : -colCount;
				this->dy = 0;
			}
		} else {
			if (!($instanceOf($JScrollPane, $($nc($($SwingUtilities::getUnwrappedParent(table)))->getParent())))) {
				return;
			}
			$var($Dimension, delta, $nc($(table->getParent()))->getSize());
			if (this->vertically) {
				$var($Rectangle, r, table->getCellRect(this->leadRow, 0, true));
				if (this->forwards) {
					$nc(r)->y += $Math::max($nc(delta)->height, r->height);
				} else {
					$nc(r)->y -= $nc(delta)->height;
				}
				this->dx = 0;
				int32_t newRow = table->rowAtPoint($($nc(r)->getLocation()));
				if (newRow == -1 && this->forwards) {
					newRow = table->getRowCount();
				}
				this->dy = newRow - this->leadRow;
			} else {
				$var($Rectangle, r, table->getCellRect(0, this->leadColumn, true));
				if (this->forwards) {
					$nc(r)->x += $Math::max($nc(delta)->width, r->width);
				} else {
					$nc(r)->x -= $nc(delta)->width;
				}
				int32_t newColumn = table->columnAtPoint($($nc(r)->getLocation()));
				if (newColumn == -1) {
					bool ltr = $nc($(table->getComponentOrientation()))->isLeftToRight();
					newColumn = this->forwards ? (ltr ? table->getColumnCount() : 0) : (ltr ? 0 : table->getColumnCount());
				}
				this->dx = newColumn - this->leadColumn;
				this->dy = 0;
			}
		}
	}
	if (key == BasicTableUI$Actions::NEXT_ROW || key == BasicTableUI$Actions::NEXT_ROW_CELL || key == BasicTableUI$Actions::NEXT_ROW_EXTEND_SELECTION || key == BasicTableUI$Actions::NEXT_ROW_CHANGE_LEAD || key == BasicTableUI$Actions::NEXT_COLUMN || key == BasicTableUI$Actions::NEXT_COLUMN_CELL || key == BasicTableUI$Actions::NEXT_COLUMN_EXTEND_SELECTION || key == BasicTableUI$Actions::NEXT_COLUMN_CHANGE_LEAD || key == BasicTableUI$Actions::PREVIOUS_ROW || key == BasicTableUI$Actions::PREVIOUS_ROW_CELL || key == BasicTableUI$Actions::PREVIOUS_ROW_EXTEND_SELECTION || key == BasicTableUI$Actions::PREVIOUS_ROW_CHANGE_LEAD || key == BasicTableUI$Actions::PREVIOUS_COLUMN || key == BasicTableUI$Actions::PREVIOUS_COLUMN_CELL || key == BasicTableUI$Actions::PREVIOUS_COLUMN_EXTEND_SELECTION || key == BasicTableUI$Actions::PREVIOUS_COLUMN_CHANGE_LEAD || key == BasicTableUI$Actions::SCROLL_LEFT_CHANGE_SELECTION || key == BasicTableUI$Actions::SCROLL_LEFT_EXTEND_SELECTION || key == BasicTableUI$Actions::SCROLL_RIGHT_CHANGE_SELECTION || key == BasicTableUI$Actions::SCROLL_RIGHT_EXTEND_SELECTION || key == BasicTableUI$Actions::SCROLL_UP_CHANGE_SELECTION || key == BasicTableUI$Actions::SCROLL_UP_EXTEND_SELECTION || key == BasicTableUI$Actions::SCROLL_DOWN_CHANGE_SELECTION || key == BasicTableUI$Actions::SCROLL_DOWN_EXTEND_SELECTION || key == BasicTableUI$Actions::FIRST_COLUMN || key == BasicTableUI$Actions::FIRST_COLUMN_EXTEND_SELECTION || key == BasicTableUI$Actions::FIRST_ROW || key == BasicTableUI$Actions::FIRST_ROW_EXTEND_SELECTION || key == BasicTableUI$Actions::LAST_COLUMN || key == BasicTableUI$Actions::LAST_COLUMN_EXTEND_SELECTION || key == BasicTableUI$Actions::LAST_ROW || key == BasicTableUI$Actions::LAST_ROW_EXTEND_SELECTION) {
		bool var$0 = table->isEditing();
		if (var$0 && !$nc($(table->getCellEditor()))->stopCellEditing()) {
			return;
		}
		bool changeLead = false;
		if (key == BasicTableUI$Actions::NEXT_ROW_CHANGE_LEAD || key == BasicTableUI$Actions::PREVIOUS_ROW_CHANGE_LEAD) {
			changeLead = ($nc(rsm)->getSelectionMode() == $ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
		} else if (key == BasicTableUI$Actions::NEXT_COLUMN_CHANGE_LEAD || key == BasicTableUI$Actions::PREVIOUS_COLUMN_CHANGE_LEAD) {
			changeLead = ($nc(csm)->getSelectionMode() == $ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
		}
		if (changeLead) {
			moveWithinTableRange(table, this->dx, this->dy);
			if (this->dy != 0) {
				$nc(($cast($DefaultListSelectionModel, rsm)))->moveLeadSelectionIndex(this->leadRow);
				bool var$1 = $BasicTableUI::getAdjustedLead(table, false, csm) == -1;
				if (var$1 && table->getColumnCount() > 0) {
					$nc(($cast($DefaultListSelectionModel, csm)))->moveLeadSelectionIndex(0);
				}
			} else {
				$nc(($cast($DefaultListSelectionModel, csm)))->moveLeadSelectionIndex(this->leadColumn);
				bool var$2 = $BasicTableUI::getAdjustedLead(table, true, rsm) == -1;
				if (var$2 && table->getRowCount() > 0) {
					$nc(($cast($DefaultListSelectionModel, rsm)))->moveLeadSelectionIndex(0);
				}
			}
			$var($Rectangle, cellRect, table->getCellRect(this->leadRow, this->leadColumn, false));
			if (cellRect != nullptr) {
				table->scrollRectToVisible(cellRect);
			}
		} else if (!this->inSelection) {
			moveWithinTableRange(table, this->dx, this->dy);
			table->changeSelection(this->leadRow, this->leadColumn, false, this->extend);
		} else {
			bool var$3 = table->getRowCount() <= 0;
			if (var$3 || table->getColumnCount() <= 0) {
				return;
			}
			if (moveWithinSelectedRange(table, this->dx, this->dy, rsm, csm)) {
				if ($nc(rsm)->isSelectedIndex(this->leadRow)) {
					rsm->addSelectionInterval(this->leadRow, this->leadRow);
				} else {
					rsm->removeSelectionInterval(this->leadRow, this->leadRow);
				}
				if ($nc(csm)->isSelectedIndex(this->leadColumn)) {
					csm->addSelectionInterval(this->leadColumn, this->leadColumn);
				} else {
					csm->removeSelectionInterval(this->leadColumn, this->leadColumn);
				}
				$var($Rectangle, cellRect, table->getCellRect(this->leadRow, this->leadColumn, false));
				if (cellRect != nullptr) {
					table->scrollRectToVisible(cellRect);
				}
			} else {
				table->changeSelection(this->leadRow, this->leadColumn, false, false);
			}
		}
	} else if (key == BasicTableUI$Actions::CANCEL_EDITING) {
		table->removeEditor();
	} else if (key == BasicTableUI$Actions::SELECT_ALL) {
		table->selectAll();
	} else if (key == BasicTableUI$Actions::CLEAR_SELECTION) {
		table->clearSelection();
	} else if (key == BasicTableUI$Actions::START_EDITING) {
		if (!table->hasFocus()) {
			$var($CellEditor, cellEditor, table->getCellEditor());
			if (cellEditor != nullptr && !cellEditor->stopCellEditing()) {
				return;
			}
			table->requestFocus();
			return;
		}
		table->editCellAt(this->leadRow, this->leadColumn, e);
		$var($Component, editorComp, table->getEditorComponent());
		if (editorComp != nullptr) {
			editorComp->requestFocus();
		}
	} else if (key == BasicTableUI$Actions::ADD_TO_SELECTION) {
		if (!table->isCellSelected(this->leadRow, this->leadColumn)) {
			int32_t oldAnchorRow = $nc(rsm)->getAnchorSelectionIndex();
			int32_t oldAnchorColumn = $nc(csm)->getAnchorSelectionIndex();
			rsm->setValueIsAdjusting(true);
			csm->setValueIsAdjusting(true);
			table->changeSelection(this->leadRow, this->leadColumn, true, false);
			rsm->setAnchorSelectionIndex(oldAnchorRow);
			csm->setAnchorSelectionIndex(oldAnchorColumn);
			rsm->setValueIsAdjusting(false);
			csm->setValueIsAdjusting(false);
		}
	} else if (key == BasicTableUI$Actions::TOGGLE_AND_ANCHOR) {
		table->changeSelection(this->leadRow, this->leadColumn, true, false);
	} else if (key == BasicTableUI$Actions::EXTEND_TO) {
		table->changeSelection(this->leadRow, this->leadColumn, false, true);
	} else if (key == BasicTableUI$Actions::MOVE_SELECTION_TO) {
		table->changeSelection(this->leadRow, this->leadColumn, false, false);
	} else if (key == BasicTableUI$Actions::FOCUS_HEADER) {
		$var($JTableHeader, th, table->getTableHeader());
		if (th != nullptr) {
			int32_t col = table->getSelectedColumn();
			if (col >= 0) {
				$var($TableHeaderUI, thUI, $cast($TableHeaderUI, th->getUI()));
				if ($instanceOf($BasicTableHeaderUI, thUI)) {
					$nc(($cast($BasicTableHeaderUI, thUI)))->selectColumn(col);
				}
			}
			th->requestFocusInWindow();
		}
	}
}

bool BasicTableUI$Actions::accept(Object$* sender) {
	$var($String, key, getName());
	$init($Boolean);
	if ($instanceOf($JTable, sender) && $nc($Boolean::TRUE)->equals($($nc(($cast($JTable, sender)))->getClientProperty("Table.isFileList"_s)))) {
		if (key == BasicTableUI$Actions::NEXT_COLUMN || key == BasicTableUI$Actions::NEXT_COLUMN_CELL || key == BasicTableUI$Actions::NEXT_COLUMN_EXTEND_SELECTION || key == BasicTableUI$Actions::NEXT_COLUMN_CHANGE_LEAD || key == BasicTableUI$Actions::PREVIOUS_COLUMN || key == BasicTableUI$Actions::PREVIOUS_COLUMN_CELL || key == BasicTableUI$Actions::PREVIOUS_COLUMN_EXTEND_SELECTION || key == BasicTableUI$Actions::PREVIOUS_COLUMN_CHANGE_LEAD || key == BasicTableUI$Actions::SCROLL_LEFT_CHANGE_SELECTION || key == BasicTableUI$Actions::SCROLL_LEFT_EXTEND_SELECTION || key == BasicTableUI$Actions::SCROLL_RIGHT_CHANGE_SELECTION || key == BasicTableUI$Actions::SCROLL_RIGHT_EXTEND_SELECTION || key == BasicTableUI$Actions::FIRST_COLUMN || key == BasicTableUI$Actions::FIRST_COLUMN_EXTEND_SELECTION || key == BasicTableUI$Actions::LAST_COLUMN || key == BasicTableUI$Actions::LAST_COLUMN_EXTEND_SELECTION || key == BasicTableUI$Actions::NEXT_ROW_CELL || key == BasicTableUI$Actions::PREVIOUS_ROW_CELL) {
			return false;
		}
	}
	if (key == BasicTableUI$Actions::CANCEL_EDITING && $instanceOf($JTable, sender)) {
		return $nc(($cast($JTable, sender)))->isEditing();
	} else if (key == BasicTableUI$Actions::NEXT_ROW_CHANGE_LEAD || key == BasicTableUI$Actions::PREVIOUS_ROW_CHANGE_LEAD) {
		return sender != nullptr && $instanceOf($DefaultListSelectionModel, $($nc(($cast($JTable, sender)))->getSelectionModel()));
	} else if (key == BasicTableUI$Actions::NEXT_COLUMN_CHANGE_LEAD || key == BasicTableUI$Actions::PREVIOUS_COLUMN_CHANGE_LEAD) {
		return sender != nullptr && $instanceOf($DefaultListSelectionModel, $($nc($($nc(($cast($JTable, sender)))->getColumnModel()))->getSelectionModel()));
	} else if (key == BasicTableUI$Actions::ADD_TO_SELECTION && $instanceOf($JTable, sender)) {
		$var($JTable, table, $cast($JTable, sender));
		int32_t leadRow = $BasicTableUI::getAdjustedLead(table, true);
		int32_t leadCol = $BasicTableUI::getAdjustedLead(table, false);
		bool var$0 = $nc(table)->isEditing();
		return !(var$0 || $nc(table)->isCellSelected(leadRow, leadCol));
	} else if (key == BasicTableUI$Actions::FOCUS_HEADER && $instanceOf($JTable, sender)) {
		$var($JTable, table, $cast($JTable, sender));
		return $nc(table)->getTableHeader() != nullptr;
	}
	return true;
}

void clinit$BasicTableUI$Actions($Class* class$) {
	$assignStatic(BasicTableUI$Actions::CANCEL_EDITING, "cancel"_s);
	$assignStatic(BasicTableUI$Actions::SELECT_ALL, "selectAll"_s);
	$assignStatic(BasicTableUI$Actions::CLEAR_SELECTION, "clearSelection"_s);
	$assignStatic(BasicTableUI$Actions::START_EDITING, "startEditing"_s);
	$assignStatic(BasicTableUI$Actions::NEXT_ROW, "selectNextRow"_s);
	$assignStatic(BasicTableUI$Actions::NEXT_ROW_CELL, "selectNextRowCell"_s);
	$assignStatic(BasicTableUI$Actions::NEXT_ROW_EXTEND_SELECTION, "selectNextRowExtendSelection"_s);
	$assignStatic(BasicTableUI$Actions::NEXT_ROW_CHANGE_LEAD, "selectNextRowChangeLead"_s);
	$assignStatic(BasicTableUI$Actions::PREVIOUS_ROW, "selectPreviousRow"_s);
	$assignStatic(BasicTableUI$Actions::PREVIOUS_ROW_CELL, "selectPreviousRowCell"_s);
	$assignStatic(BasicTableUI$Actions::PREVIOUS_ROW_EXTEND_SELECTION, "selectPreviousRowExtendSelection"_s);
	$assignStatic(BasicTableUI$Actions::PREVIOUS_ROW_CHANGE_LEAD, "selectPreviousRowChangeLead"_s);
	$assignStatic(BasicTableUI$Actions::NEXT_COLUMN, "selectNextColumn"_s);
	$assignStatic(BasicTableUI$Actions::NEXT_COLUMN_CELL, "selectNextColumnCell"_s);
	$assignStatic(BasicTableUI$Actions::NEXT_COLUMN_EXTEND_SELECTION, "selectNextColumnExtendSelection"_s);
	$assignStatic(BasicTableUI$Actions::NEXT_COLUMN_CHANGE_LEAD, "selectNextColumnChangeLead"_s);
	$assignStatic(BasicTableUI$Actions::PREVIOUS_COLUMN, "selectPreviousColumn"_s);
	$assignStatic(BasicTableUI$Actions::PREVIOUS_COLUMN_CELL, "selectPreviousColumnCell"_s);
	$assignStatic(BasicTableUI$Actions::PREVIOUS_COLUMN_EXTEND_SELECTION, "selectPreviousColumnExtendSelection"_s);
	$assignStatic(BasicTableUI$Actions::PREVIOUS_COLUMN_CHANGE_LEAD, "selectPreviousColumnChangeLead"_s);
	$assignStatic(BasicTableUI$Actions::SCROLL_LEFT_CHANGE_SELECTION, "scrollLeftChangeSelection"_s);
	$assignStatic(BasicTableUI$Actions::SCROLL_LEFT_EXTEND_SELECTION, "scrollLeftExtendSelection"_s);
	$assignStatic(BasicTableUI$Actions::SCROLL_RIGHT_CHANGE_SELECTION, "scrollRightChangeSelection"_s);
	$assignStatic(BasicTableUI$Actions::SCROLL_RIGHT_EXTEND_SELECTION, "scrollRightExtendSelection"_s);
	$assignStatic(BasicTableUI$Actions::SCROLL_UP_CHANGE_SELECTION, "scrollUpChangeSelection"_s);
	$assignStatic(BasicTableUI$Actions::SCROLL_UP_EXTEND_SELECTION, "scrollUpExtendSelection"_s);
	$assignStatic(BasicTableUI$Actions::SCROLL_DOWN_CHANGE_SELECTION, "scrollDownChangeSelection"_s);
	$assignStatic(BasicTableUI$Actions::SCROLL_DOWN_EXTEND_SELECTION, "scrollDownExtendSelection"_s);
	$assignStatic(BasicTableUI$Actions::FIRST_COLUMN, "selectFirstColumn"_s);
	$assignStatic(BasicTableUI$Actions::FIRST_COLUMN_EXTEND_SELECTION, "selectFirstColumnExtendSelection"_s);
	$assignStatic(BasicTableUI$Actions::LAST_COLUMN, "selectLastColumn"_s);
	$assignStatic(BasicTableUI$Actions::LAST_COLUMN_EXTEND_SELECTION, "selectLastColumnExtendSelection"_s);
	$assignStatic(BasicTableUI$Actions::FIRST_ROW, "selectFirstRow"_s);
	$assignStatic(BasicTableUI$Actions::FIRST_ROW_EXTEND_SELECTION, "selectFirstRowExtendSelection"_s);
	$assignStatic(BasicTableUI$Actions::LAST_ROW, "selectLastRow"_s);
	$assignStatic(BasicTableUI$Actions::LAST_ROW_EXTEND_SELECTION, "selectLastRowExtendSelection"_s);
	$assignStatic(BasicTableUI$Actions::ADD_TO_SELECTION, "addToSelection"_s);
	$assignStatic(BasicTableUI$Actions::TOGGLE_AND_ANCHOR, "toggleAndAnchor"_s);
	$assignStatic(BasicTableUI$Actions::EXTEND_TO, "extendTo"_s);
	$assignStatic(BasicTableUI$Actions::MOVE_SELECTION_TO, "moveSelectionTo"_s);
	$assignStatic(BasicTableUI$Actions::FOCUS_HEADER, "focusHeader"_s);
	$load($BasicTableUI);
	BasicTableUI$Actions::$assertionsDisabled = !$BasicTableUI::class$->desiredAssertionStatus();
}

BasicTableUI$Actions::BasicTableUI$Actions() {
}

$Class* BasicTableUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicTableUI$Actions, name, initialize, &_BasicTableUI$Actions_ClassInfo_, clinit$BasicTableUI$Actions, allocate$BasicTableUI$Actions);
	return class$;
}

$Class* BasicTableUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax