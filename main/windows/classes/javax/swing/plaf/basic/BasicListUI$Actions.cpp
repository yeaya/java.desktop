#include <javax/swing/plaf/basic/BasicListUI$Actions.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
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
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef ADD_TO_SELECTION
#undef CLEAR_SELECTION
#undef EXTEND_TO
#undef HORIZONTAL_WRAP
#undef MOVE_SELECTION_TO
#undef MULTIPLE_INTERVAL_SELECTION
#undef SCROLL_DOWN
#undef SCROLL_DOWN_CHANGE_LEAD
#undef SCROLL_DOWN_EXTEND
#undef SCROLL_UP
#undef SCROLL_UP_CHANGE_LEAD
#undef SCROLL_UP_EXTEND
#undef SELECT_ALL
#undef SELECT_FIRST_ROW
#undef SELECT_FIRST_ROW_CHANGE_LEAD
#undef SELECT_FIRST_ROW_EXTEND
#undef SELECT_LAST_ROW
#undef SELECT_LAST_ROW_CHANGE_LEAD
#undef SELECT_LAST_ROW_EXTEND
#undef SELECT_NEXT_COLUMN
#undef SELECT_NEXT_COLUMN_CHANGE_LEAD
#undef SELECT_NEXT_COLUMN_EXTEND
#undef SELECT_NEXT_ROW
#undef SELECT_NEXT_ROW_CHANGE_LEAD
#undef SELECT_NEXT_ROW_EXTEND
#undef SELECT_PREVIOUS_COLUMN
#undef SELECT_PREVIOUS_COLUMN_CHANGE_LEAD
#undef SELECT_PREVIOUS_COLUMN_EXTEND
#undef SELECT_PREVIOUS_ROW
#undef SELECT_PREVIOUS_ROW_CHANGE_LEAD
#undef SELECT_PREVIOUS_ROW_EXTEND
#undef SINGLE_SELECTION
#undef TOGGLE_AND_ANCHOR
#undef VERTICAL
#undef VERTICAL_WRAP

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ListUI = ::javax::swing::plaf::ListUI;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicListUI$Actions_FieldInfo_[] = {
	{"SELECT_PREVIOUS_COLUMN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_PREVIOUS_COLUMN)},
	{"SELECT_PREVIOUS_COLUMN_EXTEND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_PREVIOUS_COLUMN_EXTEND)},
	{"SELECT_PREVIOUS_COLUMN_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_PREVIOUS_COLUMN_CHANGE_LEAD)},
	{"SELECT_NEXT_COLUMN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_NEXT_COLUMN)},
	{"SELECT_NEXT_COLUMN_EXTEND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_NEXT_COLUMN_EXTEND)},
	{"SELECT_NEXT_COLUMN_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_NEXT_COLUMN_CHANGE_LEAD)},
	{"SELECT_PREVIOUS_ROW", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_PREVIOUS_ROW)},
	{"SELECT_PREVIOUS_ROW_EXTEND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_PREVIOUS_ROW_EXTEND)},
	{"SELECT_PREVIOUS_ROW_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_PREVIOUS_ROW_CHANGE_LEAD)},
	{"SELECT_NEXT_ROW", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_NEXT_ROW)},
	{"SELECT_NEXT_ROW_EXTEND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_NEXT_ROW_EXTEND)},
	{"SELECT_NEXT_ROW_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_NEXT_ROW_CHANGE_LEAD)},
	{"SELECT_FIRST_ROW", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_FIRST_ROW)},
	{"SELECT_FIRST_ROW_EXTEND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_FIRST_ROW_EXTEND)},
	{"SELECT_FIRST_ROW_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_FIRST_ROW_CHANGE_LEAD)},
	{"SELECT_LAST_ROW", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_LAST_ROW)},
	{"SELECT_LAST_ROW_EXTEND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_LAST_ROW_EXTEND)},
	{"SELECT_LAST_ROW_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_LAST_ROW_CHANGE_LEAD)},
	{"SCROLL_UP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SCROLL_UP)},
	{"SCROLL_UP_EXTEND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SCROLL_UP_EXTEND)},
	{"SCROLL_UP_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SCROLL_UP_CHANGE_LEAD)},
	{"SCROLL_DOWN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SCROLL_DOWN)},
	{"SCROLL_DOWN_EXTEND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SCROLL_DOWN_EXTEND)},
	{"SCROLL_DOWN_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SCROLL_DOWN_CHANGE_LEAD)},
	{"SELECT_ALL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, SELECT_ALL)},
	{"CLEAR_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, CLEAR_SELECTION)},
	{"ADD_TO_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, ADD_TO_SELECTION)},
	{"TOGGLE_AND_ANCHOR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, TOGGLE_AND_ANCHOR)},
	{"EXTEND_TO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, EXTEND_TO)},
	{"MOVE_SELECTION_TO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicListUI$Actions, MOVE_SELECTION_TO)},
	{}
};

$MethodInfo _BasicListUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicListUI$Actions::*)($String*)>(&BasicListUI$Actions::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"adjustScrollPositionIfNecessary", "(Ljavax/swing/JList;II)V", "(Ljavax/swing/JList<*>;II)V", $PRIVATE, $method(static_cast<void(BasicListUI$Actions::*)($JList*,int32_t,int32_t)>(&BasicListUI$Actions::adjustScrollPositionIfNecessary))},
	{"changeSelection", "(Ljavax/swing/JList;III)V", "(Ljavax/swing/JList<*>;III)V", $PRIVATE, $method(static_cast<void(BasicListUI$Actions::*)($JList*,int32_t,int32_t,int32_t)>(&BasicListUI$Actions::changeSelection))},
	{"clearSelection", "(Ljavax/swing/JList;)V", "(Ljavax/swing/JList<*>;)V", $PRIVATE, $method(static_cast<void(BasicListUI$Actions::*)($JList*)>(&BasicListUI$Actions::clearSelection))},
	{"getNextColumnIndex", "(Ljavax/swing/JList;Ljavax/swing/plaf/basic/BasicListUI;I)I", "(Ljavax/swing/JList<*>;Ljavax/swing/plaf/basic/BasicListUI;I)I", $PRIVATE, $method(static_cast<int32_t(BasicListUI$Actions::*)($JList*,$BasicListUI*,int32_t)>(&BasicListUI$Actions::getNextColumnIndex))},
	{"getNextIndex", "(Ljavax/swing/JList;Ljavax/swing/plaf/basic/BasicListUI;I)I", "(Ljavax/swing/JList<*>;Ljavax/swing/plaf/basic/BasicListUI;I)I", $PRIVATE, $method(static_cast<int32_t(BasicListUI$Actions::*)($JList*,$BasicListUI*,int32_t)>(&BasicListUI$Actions::getNextIndex))},
	{"getNextPageIndex", "(Ljavax/swing/JList;I)I", "(Ljavax/swing/JList<*>;I)I", $PRIVATE, $method(static_cast<int32_t(BasicListUI$Actions::*)($JList*,int32_t)>(&BasicListUI$Actions::getNextPageIndex))},
	{"selectAll", "(Ljavax/swing/JList;)V", "(Ljavax/swing/JList<*>;)V", $PRIVATE, $method(static_cast<void(BasicListUI$Actions::*)($JList*)>(&BasicListUI$Actions::selectAll))},
	{}
};

$InnerClassInfo _BasicListUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicListUI$Actions", "javax.swing.plaf.basic.BasicListUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicListUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicListUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicListUI$Actions_FieldInfo_,
	_BasicListUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicListUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicListUI"
};

$Object* allocate$BasicListUI$Actions($Class* clazz) {
	return $of($alloc(BasicListUI$Actions));
}

$String* BasicListUI$Actions::SELECT_PREVIOUS_COLUMN = nullptr;
$String* BasicListUI$Actions::SELECT_PREVIOUS_COLUMN_EXTEND = nullptr;
$String* BasicListUI$Actions::SELECT_PREVIOUS_COLUMN_CHANGE_LEAD = nullptr;
$String* BasicListUI$Actions::SELECT_NEXT_COLUMN = nullptr;
$String* BasicListUI$Actions::SELECT_NEXT_COLUMN_EXTEND = nullptr;
$String* BasicListUI$Actions::SELECT_NEXT_COLUMN_CHANGE_LEAD = nullptr;
$String* BasicListUI$Actions::SELECT_PREVIOUS_ROW = nullptr;
$String* BasicListUI$Actions::SELECT_PREVIOUS_ROW_EXTEND = nullptr;
$String* BasicListUI$Actions::SELECT_PREVIOUS_ROW_CHANGE_LEAD = nullptr;
$String* BasicListUI$Actions::SELECT_NEXT_ROW = nullptr;
$String* BasicListUI$Actions::SELECT_NEXT_ROW_EXTEND = nullptr;
$String* BasicListUI$Actions::SELECT_NEXT_ROW_CHANGE_LEAD = nullptr;
$String* BasicListUI$Actions::SELECT_FIRST_ROW = nullptr;
$String* BasicListUI$Actions::SELECT_FIRST_ROW_EXTEND = nullptr;
$String* BasicListUI$Actions::SELECT_FIRST_ROW_CHANGE_LEAD = nullptr;
$String* BasicListUI$Actions::SELECT_LAST_ROW = nullptr;
$String* BasicListUI$Actions::SELECT_LAST_ROW_EXTEND = nullptr;
$String* BasicListUI$Actions::SELECT_LAST_ROW_CHANGE_LEAD = nullptr;
$String* BasicListUI$Actions::SCROLL_UP = nullptr;
$String* BasicListUI$Actions::SCROLL_UP_EXTEND = nullptr;
$String* BasicListUI$Actions::SCROLL_UP_CHANGE_LEAD = nullptr;
$String* BasicListUI$Actions::SCROLL_DOWN = nullptr;
$String* BasicListUI$Actions::SCROLL_DOWN_EXTEND = nullptr;
$String* BasicListUI$Actions::SCROLL_DOWN_CHANGE_LEAD = nullptr;
$String* BasicListUI$Actions::SELECT_ALL = nullptr;
$String* BasicListUI$Actions::CLEAR_SELECTION = nullptr;
$String* BasicListUI$Actions::ADD_TO_SELECTION = nullptr;
$String* BasicListUI$Actions::TOGGLE_AND_ANCHOR = nullptr;
$String* BasicListUI$Actions::EXTEND_TO = nullptr;
$String* BasicListUI$Actions::MOVE_SELECTION_TO = nullptr;

void BasicListUI$Actions::init$($String* name) {
	$UIAction::init$(name);
}

void BasicListUI$Actions::actionPerformed($ActionEvent* e) {
	$var($String, name, getName());
	$var($JList, list, $cast($JList, $nc(e)->getSource()));
	$load($BasicListUI);
	$var($BasicListUI, ui, $cast($BasicListUI, $BasicLookAndFeel::getUIOfType($($nc(list)->getUI()), $BasicListUI::class$)));
	if (name == BasicListUI$Actions::SELECT_PREVIOUS_COLUMN) {
		changeSelection(list, 1, getNextColumnIndex(list, ui, -1), -1);
	} else if (name == BasicListUI$Actions::SELECT_PREVIOUS_COLUMN_EXTEND) {
		changeSelection(list, 2, getNextColumnIndex(list, ui, -1), -1);
	} else if (name == BasicListUI$Actions::SELECT_PREVIOUS_COLUMN_CHANGE_LEAD) {
		changeSelection(list, 0, getNextColumnIndex(list, ui, -1), -1);
	} else if (name == BasicListUI$Actions::SELECT_NEXT_COLUMN) {
		changeSelection(list, 1, getNextColumnIndex(list, ui, 1), 1);
	} else if (name == BasicListUI$Actions::SELECT_NEXT_COLUMN_EXTEND) {
		changeSelection(list, 2, getNextColumnIndex(list, ui, 1), 1);
	} else if (name == BasicListUI$Actions::SELECT_NEXT_COLUMN_CHANGE_LEAD) {
		changeSelection(list, 0, getNextColumnIndex(list, ui, 1), 1);
	} else if (name == BasicListUI$Actions::SELECT_PREVIOUS_ROW) {
		changeSelection(list, 1, getNextIndex(list, ui, -1), -1);
	} else if (name == BasicListUI$Actions::SELECT_PREVIOUS_ROW_EXTEND) {
		changeSelection(list, 2, getNextIndex(list, ui, -1), -1);
	} else if (name == BasicListUI$Actions::SELECT_PREVIOUS_ROW_CHANGE_LEAD) {
		changeSelection(list, 0, getNextIndex(list, ui, -1), -1);
	} else if (name == BasicListUI$Actions::SELECT_NEXT_ROW) {
		changeSelection(list, 1, getNextIndex(list, ui, 1), 1);
	} else if (name == BasicListUI$Actions::SELECT_NEXT_ROW_EXTEND) {
		changeSelection(list, 2, getNextIndex(list, ui, 1), 1);
	} else if (name == BasicListUI$Actions::SELECT_NEXT_ROW_CHANGE_LEAD) {
		changeSelection(list, 0, getNextIndex(list, ui, 1), 1);
	} else if (name == BasicListUI$Actions::SELECT_FIRST_ROW) {
		changeSelection(list, 1, 0, -1);
	} else if (name == BasicListUI$Actions::SELECT_FIRST_ROW_EXTEND) {
		changeSelection(list, 2, 0, -1);
	} else if (name == BasicListUI$Actions::SELECT_FIRST_ROW_CHANGE_LEAD) {
		changeSelection(list, 0, 0, -1);
	} else if (name == BasicListUI$Actions::SELECT_LAST_ROW) {
		changeSelection(list, 1, $nc($($nc(list)->getModel()))->getSize() - 1, 1);
	} else if (name == BasicListUI$Actions::SELECT_LAST_ROW_EXTEND) {
		changeSelection(list, 2, $nc($($nc(list)->getModel()))->getSize() - 1, 1);
	} else if (name == BasicListUI$Actions::SELECT_LAST_ROW_CHANGE_LEAD) {
		changeSelection(list, 0, $nc($($nc(list)->getModel()))->getSize() - 1, 1);
	} else if (name == BasicListUI$Actions::SCROLL_UP) {
		changeSelection(list, 1, getNextPageIndex(list, -1), -1);
	} else if (name == BasicListUI$Actions::SCROLL_UP_EXTEND) {
		changeSelection(list, 2, getNextPageIndex(list, -1), -1);
	} else if (name == BasicListUI$Actions::SCROLL_UP_CHANGE_LEAD) {
		changeSelection(list, 0, getNextPageIndex(list, -1), -1);
	} else if (name == BasicListUI$Actions::SCROLL_DOWN) {
		changeSelection(list, 1, getNextPageIndex(list, 1), 1);
	} else if (name == BasicListUI$Actions::SCROLL_DOWN_EXTEND) {
		changeSelection(list, 2, getNextPageIndex(list, 1), 1);
	} else if (name == BasicListUI$Actions::SCROLL_DOWN_CHANGE_LEAD) {
		changeSelection(list, 0, getNextPageIndex(list, 1), 1);
	} else if (name == BasicListUI$Actions::SELECT_ALL) {
		selectAll(list);
	} else if (name == BasicListUI$Actions::CLEAR_SELECTION) {
		clearSelection(list);
	} else if (name == BasicListUI$Actions::ADD_TO_SELECTION) {
		int32_t index = $BasicListUI::adjustIndex($nc($($nc(list)->getSelectionModel()))->getLeadSelectionIndex(), list);
		if (!$nc(list)->isSelectedIndex(index)) {
			int32_t oldAnchor = $nc($(list->getSelectionModel()))->getAnchorSelectionIndex();
			list->setValueIsAdjusting(true);
			list->addSelectionInterval(index, index);
			$nc($(list->getSelectionModel()))->setAnchorSelectionIndex(oldAnchor);
			list->setValueIsAdjusting(false);
		}
	} else if (name == BasicListUI$Actions::TOGGLE_AND_ANCHOR) {
		int32_t index = $BasicListUI::adjustIndex($nc($($nc(list)->getSelectionModel()))->getLeadSelectionIndex(), list);
		if ($nc(list)->isSelectedIndex(index)) {
			list->removeSelectionInterval(index, index);
		} else {
			list->addSelectionInterval(index, index);
		}
	} else if (name == BasicListUI$Actions::EXTEND_TO) {
		changeSelection(list, 2, $BasicListUI::adjustIndex($nc($($nc(list)->getSelectionModel()))->getLeadSelectionIndex(), list), 0);
	} else if (name == BasicListUI$Actions::MOVE_SELECTION_TO) {
		changeSelection(list, 1, $BasicListUI::adjustIndex($nc($($nc(list)->getSelectionModel()))->getLeadSelectionIndex(), list), 0);
	}
}

bool BasicListUI$Actions::accept(Object$* c) {
	$var($Object, name, getName());
	if ($equals(name, BasicListUI$Actions::SELECT_PREVIOUS_COLUMN_CHANGE_LEAD) || $equals(name, BasicListUI$Actions::SELECT_NEXT_COLUMN_CHANGE_LEAD) || $equals(name, BasicListUI$Actions::SELECT_PREVIOUS_ROW_CHANGE_LEAD) || $equals(name, BasicListUI$Actions::SELECT_NEXT_ROW_CHANGE_LEAD) || $equals(name, BasicListUI$Actions::SELECT_FIRST_ROW_CHANGE_LEAD) || $equals(name, BasicListUI$Actions::SELECT_LAST_ROW_CHANGE_LEAD) || $equals(name, BasicListUI$Actions::SCROLL_UP_CHANGE_LEAD) || $equals(name, BasicListUI$Actions::SCROLL_DOWN_CHANGE_LEAD)) {
		return c != nullptr && $instanceOf($DefaultListSelectionModel, $($nc(($cast($JList, c)))->getSelectionModel()));
	}
	return true;
}

void BasicListUI$Actions::clearSelection($JList* list) {
	$nc(list)->clearSelection();
}

void BasicListUI$Actions::selectAll($JList* list) {
	int32_t size = $nc($($nc(list)->getModel()))->getSize();
	if (size > 0) {
		$var($ListSelectionModel, lsm, list->getSelectionModel());
		int32_t lead = $BasicListUI::adjustIndex($nc(lsm)->getLeadSelectionIndex(), list);
		if ($nc(lsm)->getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION) {
			if (lead == -1) {
				int32_t min = $BasicListUI::adjustIndex(list->getMinSelectionIndex(), list);
				lead = (min == -1 ? 0 : min);
			}
			list->setSelectionInterval(lead, lead);
			list->ensureIndexIsVisible(lead);
		} else {
			list->setValueIsAdjusting(true);
			int32_t anchor = $BasicListUI::adjustIndex(lsm->getAnchorSelectionIndex(), list);
			list->setSelectionInterval(0, size - 1);
			$SwingUtilities2::setLeadAnchorWithoutSelection(lsm, anchor, lead);
			list->setValueIsAdjusting(false);
		}
	}
}

int32_t BasicListUI$Actions::getNextPageIndex($JList* list, int32_t direction) {
	if ($nc($($nc(list)->getModel()))->getSize() == 0) {
		return -1;
	}
	int32_t index = -1;
	$var($Rectangle, visRect, $nc(list)->getVisibleRect());
	$var($ListSelectionModel, lsm, list->getSelectionModel());
	int32_t lead = $BasicListUI::adjustIndex($nc(lsm)->getLeadSelectionIndex(), list);
	$var($Rectangle, leadRect, (lead == -1) ? $new($Rectangle) : list->getCellBounds(lead, lead));
	if (leadRect == nullptr) {
		return index;
	}
	bool var$0 = list->getLayoutOrientation() == $JList::VERTICAL_WRAP;
	if (var$0 && list->getVisibleRowCount() <= 0) {
		if (!$nc($(list->getComponentOrientation()))->isLeftToRight()) {
			direction = -direction;
		}
		if (direction < 0) {
			$nc(visRect)->x = $nc(leadRect)->x + leadRect->width - visRect->width;
			$var($Point, p, $new($Point, visRect->x - 1, leadRect->y));
			index = list->locationToIndex(p);
			if (index == -1) {
				return index;
			}
			$var($Rectangle, cellBounds, list->getCellBounds(index, index));
			if (cellBounds != nullptr && visRect->intersects(cellBounds)) {
				p->x = cellBounds->x - 1;
				index = list->locationToIndex(p);
				if (index == -1) {
					return index;
				}
				$assign(cellBounds, list->getCellBounds(index, index));
			}
			if (cellBounds != nullptr && cellBounds->y != leadRect->y) {
				p->x = cellBounds->x + cellBounds->width;
				index = list->locationToIndex(p);
			}
		} else {
			$nc(visRect)->x = $nc(leadRect)->x;
			$var($Point, p, $new($Point, visRect->x + visRect->width, leadRect->y));
			index = list->locationToIndex(p);
			if (index == -1) {
				return index;
			}
			$var($Rectangle, cellBounds, list->getCellBounds(index, index));
			if (cellBounds != nullptr && visRect->intersects(cellBounds)) {
				p->x = cellBounds->x + cellBounds->width;
				index = list->locationToIndex(p);
				if (index == -1) {
					return index;
				}
				$assign(cellBounds, list->getCellBounds(index, index));
			}
			if (cellBounds != nullptr && cellBounds->y != leadRect->y) {
				p->x = cellBounds->x - 1;
				index = list->locationToIndex(p);
			}
		}
	} else if (direction < 0) {
		$var($Point, p, $new($Point, $nc(leadRect)->x, $nc(visRect)->y));
		index = list->locationToIndex(p);
		if (lead <= index) {
			$nc(visRect)->y = $nc(leadRect)->y + leadRect->height - visRect->height;
			p->y = visRect->y;
			index = list->locationToIndex(p);
			if (index == -1) {
				return index;
			}
			$var($Rectangle, cellBounds, list->getCellBounds(index, index));
			if (cellBounds != nullptr && cellBounds->y < visRect->y) {
				p->y = cellBounds->y + cellBounds->height;
				index = list->locationToIndex(p);
				if (index == -1) {
					return index;
				}
				$assign(cellBounds, list->getCellBounds(index, index));
			}
			if (cellBounds != nullptr && cellBounds->y >= leadRect->y) {
				p->y = leadRect->y - 1;
				index = list->locationToIndex(p);
			}
		}
	} else {
		$var($Point, p, $new($Point, $nc(leadRect)->x, $nc(visRect)->y + visRect->height - 1));
		index = list->locationToIndex(p);
		if (index == -1) {
			return index;
		}
		$var($Rectangle, cellBounds, list->getCellBounds(index, index));
		if (cellBounds != nullptr && cellBounds->y + cellBounds->height > $nc(visRect)->y + visRect->height) {
			p->y = cellBounds->y - 1;
			index = list->locationToIndex(p);
			if (index == -1) {
				return index;
			}
			$assign(cellBounds, list->getCellBounds(index, index));
			index = $Math::max(index, lead);
		}
		if (lead >= index) {
			$nc(visRect)->y = $nc(leadRect)->y;
			p->y = visRect->y + visRect->height - 1;
			index = list->locationToIndex(p);
			if (index == -1) {
				return index;
			}
			$assign(cellBounds, list->getCellBounds(index, index));
			if (cellBounds != nullptr && cellBounds->y + cellBounds->height > visRect->y + visRect->height) {
				p->y = cellBounds->y - 1;
				index = list->locationToIndex(p);
				if (index == -1) {
					return index;
				}
				$assign(cellBounds, list->getCellBounds(index, index));
			}
			if (cellBounds != nullptr && cellBounds->y <= leadRect->y) {
				p->y = leadRect->y + leadRect->height;
				index = list->locationToIndex(p);
			}
		}
	}
	return index;
}

void BasicListUI$Actions::changeSelection($JList* list, int32_t type, int32_t index, int32_t direction) {
	if (index >= 0 && index < $nc($($nc(list)->getModel()))->getSize()) {
		$var($ListSelectionModel, lsm, list->getSelectionModel());
		if (type == 0 && list->getSelectionMode() != $ListSelectionModel::MULTIPLE_INTERVAL_SELECTION) {
			type = 1;
		}
		adjustScrollPositionIfNecessary(list, index, direction);
		if (type == 2) {
			int32_t anchor = $BasicListUI::adjustIndex($nc(lsm)->getAnchorSelectionIndex(), list);
			if (anchor == -1) {
				anchor = 0;
			}
			list->setSelectionInterval(anchor, index);
		} else if (type == 1) {
			list->setSelectedIndex(index);
		} else {
			$nc(($cast($DefaultListSelectionModel, lsm)))->moveLeadSelectionIndex(index);
		}
	}
}

void BasicListUI$Actions::adjustScrollPositionIfNecessary($JList* list, int32_t index, int32_t direction) {
	if (direction == 0) {
		return;
	}
	$var($Rectangle, cellBounds, $nc(list)->getCellBounds(index, index));
	$var($Rectangle, visRect, list->getVisibleRect());
	if (cellBounds != nullptr && !$nc(visRect)->contains(cellBounds)) {
		bool var$0 = list->getLayoutOrientation() == $JList::VERTICAL_WRAP;
		if (var$0 && list->getVisibleRowCount() <= 0) {
			if ($nc($(list->getComponentOrientation()))->isLeftToRight()) {
				if (direction > 0) {
					int32_t x = $Math::max(0, cellBounds->x + cellBounds->width - visRect->width);
					int32_t startIndex = list->locationToIndex($$new($Point, x, cellBounds->y));
					if (startIndex == -1) {
						return;
					}
					$var($Rectangle, startRect, list->getCellBounds(startIndex, startIndex));
					if (startRect != nullptr && startRect->x < x && startRect->x < cellBounds->x) {
						startRect->x += startRect->width;
						startIndex = list->locationToIndex($(startRect->getLocation()));
						if (startIndex == -1) {
							return;
						}
						$assign(startRect, list->getCellBounds(startIndex, startIndex));
					}
					$assign(cellBounds, startRect);
				}
				if (cellBounds != nullptr) {
					cellBounds->width = visRect->width;
				}
			} else if (direction > 0) {
				int32_t x = cellBounds->x + visRect->width;
				int32_t rightIndex = list->locationToIndex($$new($Point, x, cellBounds->y));
				if (rightIndex == -1) {
					return;
				}
				$var($Rectangle, rightRect, list->getCellBounds(rightIndex, rightIndex));
				if (rightRect != nullptr) {
					if (rightRect->x + rightRect->width > x && rightRect->x > cellBounds->x) {
						rightRect->width = 0;
					}
					cellBounds->x = $Math::max(0, rightRect->x + rightRect->width - visRect->width);
					cellBounds->width = visRect->width;
				}
			} else {
				cellBounds->x += $Math::max(0, cellBounds->width - visRect->width);
				cellBounds->width = $Math::min(cellBounds->width, visRect->width);
			}
		} else if (direction > 0 && (cellBounds->y < visRect->y || cellBounds->y + cellBounds->height > visRect->y + visRect->height)) {
			int32_t y = $Math::max(0, cellBounds->y + cellBounds->height - visRect->height);
			int32_t startIndex = list->locationToIndex($$new($Point, cellBounds->x, y));
			if (startIndex == -1) {
				return;
			}
			$var($Rectangle, startRect, list->getCellBounds(startIndex, startIndex));
			if (startRect != nullptr && startRect->y < y && startRect->y < cellBounds->y) {
				startRect->y += startRect->height;
				startIndex = list->locationToIndex($(startRect->getLocation()));
				if (startIndex == -1) {
					return;
				}
				$assign(startRect, list->getCellBounds(startIndex, startIndex));
			}
			$assign(cellBounds, startRect);
			if (cellBounds != nullptr) {
				cellBounds->height = visRect->height;
			}
		} else {
			cellBounds->height = $Math::min(cellBounds->height, visRect->height);
		}
		if (cellBounds != nullptr) {
			list->scrollRectToVisible(cellBounds);
		}
	}
}

int32_t BasicListUI$Actions::getNextColumnIndex($JList* list, $BasicListUI* ui, int32_t amount) {
	if ($nc(list)->getLayoutOrientation() != $JList::VERTICAL) {
		int32_t index = $BasicListUI::adjustIndex(list->getLeadSelectionIndex(), list);
		int32_t size = $nc($(list->getModel()))->getSize();
		if (index == -1) {
			return 0;
		} else if (size == 1) {
			return 0;
		} else if (ui == nullptr || $nc(ui)->columnCount <= 1) {
			return -1;
		}
		int32_t column = $nc(ui)->convertModelToColumn(index);
		int32_t row = ui->convertModelToRow(index);
		column += amount;
		if (column >= ui->columnCount || column < 0) {
			return -1;
		}
		int32_t maxRowCount = ui->getRowCount(column);
		if (row >= maxRowCount) {
			return -1;
		}
		return ui->getModelIndex(column, row);
	}
	return -1;
}

int32_t BasicListUI$Actions::getNextIndex($JList* list, $BasicListUI* ui, int32_t amount) {
	int32_t index = $BasicListUI::adjustIndex($nc(list)->getLeadSelectionIndex(), list);
	int32_t size = $nc($($nc(list)->getModel()))->getSize();
	if (index == -1) {
		if (size > 0) {
			if (amount > 0) {
				index = 0;
			} else {
				index = size - 1;
			}
		}
	} else if (size == 1) {
		index = 0;
	} else if (list->getLayoutOrientation() == $JList::HORIZONTAL_WRAP) {
		if (ui != nullptr) {
			index += ui->columnCount * amount;
		}
	} else {
		index += amount;
	}
	return index;
}

BasicListUI$Actions::BasicListUI$Actions() {
}

void clinit$BasicListUI$Actions($Class* class$) {
	$assignStatic(BasicListUI$Actions::SELECT_PREVIOUS_COLUMN, "selectPreviousColumn"_s);
	$assignStatic(BasicListUI$Actions::SELECT_PREVIOUS_COLUMN_EXTEND, "selectPreviousColumnExtendSelection"_s);
	$assignStatic(BasicListUI$Actions::SELECT_PREVIOUS_COLUMN_CHANGE_LEAD, "selectPreviousColumnChangeLead"_s);
	$assignStatic(BasicListUI$Actions::SELECT_NEXT_COLUMN, "selectNextColumn"_s);
	$assignStatic(BasicListUI$Actions::SELECT_NEXT_COLUMN_EXTEND, "selectNextColumnExtendSelection"_s);
	$assignStatic(BasicListUI$Actions::SELECT_NEXT_COLUMN_CHANGE_LEAD, "selectNextColumnChangeLead"_s);
	$assignStatic(BasicListUI$Actions::SELECT_PREVIOUS_ROW, "selectPreviousRow"_s);
	$assignStatic(BasicListUI$Actions::SELECT_PREVIOUS_ROW_EXTEND, "selectPreviousRowExtendSelection"_s);
	$assignStatic(BasicListUI$Actions::SELECT_PREVIOUS_ROW_CHANGE_LEAD, "selectPreviousRowChangeLead"_s);
	$assignStatic(BasicListUI$Actions::SELECT_NEXT_ROW, "selectNextRow"_s);
	$assignStatic(BasicListUI$Actions::SELECT_NEXT_ROW_EXTEND, "selectNextRowExtendSelection"_s);
	$assignStatic(BasicListUI$Actions::SELECT_NEXT_ROW_CHANGE_LEAD, "selectNextRowChangeLead"_s);
	$assignStatic(BasicListUI$Actions::SELECT_FIRST_ROW, "selectFirstRow"_s);
	$assignStatic(BasicListUI$Actions::SELECT_FIRST_ROW_EXTEND, "selectFirstRowExtendSelection"_s);
	$assignStatic(BasicListUI$Actions::SELECT_FIRST_ROW_CHANGE_LEAD, "selectFirstRowChangeLead"_s);
	$assignStatic(BasicListUI$Actions::SELECT_LAST_ROW, "selectLastRow"_s);
	$assignStatic(BasicListUI$Actions::SELECT_LAST_ROW_EXTEND, "selectLastRowExtendSelection"_s);
	$assignStatic(BasicListUI$Actions::SELECT_LAST_ROW_CHANGE_LEAD, "selectLastRowChangeLead"_s);
	$assignStatic(BasicListUI$Actions::SCROLL_UP, "scrollUp"_s);
	$assignStatic(BasicListUI$Actions::SCROLL_UP_EXTEND, "scrollUpExtendSelection"_s);
	$assignStatic(BasicListUI$Actions::SCROLL_UP_CHANGE_LEAD, "scrollUpChangeLead"_s);
	$assignStatic(BasicListUI$Actions::SCROLL_DOWN, "scrollDown"_s);
	$assignStatic(BasicListUI$Actions::SCROLL_DOWN_EXTEND, "scrollDownExtendSelection"_s);
	$assignStatic(BasicListUI$Actions::SCROLL_DOWN_CHANGE_LEAD, "scrollDownChangeLead"_s);
	$assignStatic(BasicListUI$Actions::SELECT_ALL, "selectAll"_s);
	$assignStatic(BasicListUI$Actions::CLEAR_SELECTION, "clearSelection"_s);
	$assignStatic(BasicListUI$Actions::ADD_TO_SELECTION, "addToSelection"_s);
	$assignStatic(BasicListUI$Actions::TOGGLE_AND_ANCHOR, "toggleAndAnchor"_s);
	$assignStatic(BasicListUI$Actions::EXTEND_TO, "extendTo"_s);
	$assignStatic(BasicListUI$Actions::MOVE_SELECTION_TO, "moveSelectionTo"_s);
}

$Class* BasicListUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicListUI$Actions, name, initialize, &_BasicListUI$Actions_ClassInfo_, clinit$BasicListUI$Actions, allocate$BasicListUI$Actions);
	return class$;
}

$Class* BasicListUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax