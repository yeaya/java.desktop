#include <javax/swing/plaf/basic/BasicTreeUI$Actions.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/util/EventObject.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Actions$1.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/TreeSelectionModel.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef ADD_TO_SELECTION
#undef CANCEL_EDITING
#undef CLEAR_SELECTION
#undef COLLAPSE
#undef DISCONTIGUOUS_TREE_SELECTION
#undef EXPAND
#undef EXTEND_TO
#undef HORIZONTAL
#undef MOVE_SELECTION_TO
#undef MOVE_SELECTION_TO_PARENT
#undef SCROLL_DOWN_CHANGE_LEAD
#undef SCROLL_DOWN_CHANGE_SELECTION
#undef SCROLL_DOWN_EXTEND_SELECTION
#undef SCROLL_LEFT
#undef SCROLL_LEFT_CHANGE_LEAD
#undef SCROLL_LEFT_EXTEND_SELECTION
#undef SCROLL_RIGHT
#undef SCROLL_RIGHT_CHANGE_LEAD
#undef SCROLL_RIGHT_EXTEND_SELECTION
#undef SCROLL_UP_CHANGE_LEAD
#undef SCROLL_UP_CHANGE_SELECTION
#undef SCROLL_UP_EXTEND_SELECTION
#undef SELECT_ALL
#undef SELECT_CHILD
#undef SELECT_CHILD_CHANGE_LEAD
#undef SELECT_FIRST
#undef SELECT_FIRST_CHANGE_LEAD
#undef SELECT_FIRST_EXTEND_SELECTION
#undef SELECT_LAST
#undef SELECT_LAST_CHANGE_LEAD
#undef SELECT_LAST_EXTEND_SELECTION
#undef SELECT_NEXT
#undef SELECT_NEXT_CHANGE_LEAD
#undef SELECT_NEXT_EXTEND_SELECTION
#undef SELECT_PARENT
#undef SELECT_PARENT_CHANGE_LEAD
#undef SELECT_PREVIOUS
#undef SELECT_PREVIOUS_CHANGE_LEAD
#undef SELECT_PREVIOUS_EXTEND_SELECTION
#undef SINGLE_TREE_SELECTION
#undef START_EDITING
#undef TOGGLE
#undef TOGGLE_AND_ANCHOR

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $EventObject = ::java::util::EventObject;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$Actions$1 = ::javax::swing::plaf::basic::BasicTreeUI$Actions$1;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;
using $TreeSelectionModel = ::javax::swing::tree::TreeSelectionModel;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$Actions_FieldInfo_[] = {
	{"SELECT_PREVIOUS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_PREVIOUS)},
	{"SELECT_PREVIOUS_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_PREVIOUS_CHANGE_LEAD)},
	{"SELECT_PREVIOUS_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_PREVIOUS_EXTEND_SELECTION)},
	{"SELECT_NEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_NEXT)},
	{"SELECT_NEXT_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_NEXT_CHANGE_LEAD)},
	{"SELECT_NEXT_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_NEXT_EXTEND_SELECTION)},
	{"SELECT_CHILD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_CHILD)},
	{"SELECT_CHILD_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_CHILD_CHANGE_LEAD)},
	{"SELECT_PARENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_PARENT)},
	{"SELECT_PARENT_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_PARENT_CHANGE_LEAD)},
	{"SCROLL_UP_CHANGE_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SCROLL_UP_CHANGE_SELECTION)},
	{"SCROLL_UP_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SCROLL_UP_CHANGE_LEAD)},
	{"SCROLL_UP_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SCROLL_UP_EXTEND_SELECTION)},
	{"SCROLL_DOWN_CHANGE_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SCROLL_DOWN_CHANGE_SELECTION)},
	{"SCROLL_DOWN_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SCROLL_DOWN_EXTEND_SELECTION)},
	{"SCROLL_DOWN_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SCROLL_DOWN_CHANGE_LEAD)},
	{"SELECT_FIRST", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_FIRST)},
	{"SELECT_FIRST_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_FIRST_CHANGE_LEAD)},
	{"SELECT_FIRST_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_FIRST_EXTEND_SELECTION)},
	{"SELECT_LAST", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_LAST)},
	{"SELECT_LAST_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_LAST_CHANGE_LEAD)},
	{"SELECT_LAST_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_LAST_EXTEND_SELECTION)},
	{"TOGGLE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, TOGGLE)},
	{"CANCEL_EDITING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, CANCEL_EDITING)},
	{"START_EDITING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, START_EDITING)},
	{"SELECT_ALL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SELECT_ALL)},
	{"CLEAR_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, CLEAR_SELECTION)},
	{"SCROLL_LEFT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SCROLL_LEFT)},
	{"SCROLL_RIGHT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SCROLL_RIGHT)},
	{"SCROLL_LEFT_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SCROLL_LEFT_EXTEND_SELECTION)},
	{"SCROLL_RIGHT_EXTEND_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SCROLL_RIGHT_EXTEND_SELECTION)},
	{"SCROLL_RIGHT_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SCROLL_RIGHT_CHANGE_LEAD)},
	{"SCROLL_LEFT_CHANGE_LEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, SCROLL_LEFT_CHANGE_LEAD)},
	{"EXPAND", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, EXPAND)},
	{"COLLAPSE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, COLLAPSE)},
	{"MOVE_SELECTION_TO_PARENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, MOVE_SELECTION_TO_PARENT)},
	{"ADD_TO_SELECTION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, ADD_TO_SELECTION)},
	{"TOGGLE_AND_ANCHOR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, TOGGLE_AND_ANCHOR)},
	{"EXTEND_TO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, EXTEND_TO)},
	{"MOVE_SELECTION_TO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicTreeUI$Actions, MOVE_SELECTION_TO)},
	{}
};

$MethodInfo _BasicTreeUI$Actions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicTreeUI$Actions::*)()>(&BasicTreeUI$Actions::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicTreeUI$Actions::*)($String*)>(&BasicTreeUI$Actions::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"cancelEditing", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*)>(&BasicTreeUI$Actions::cancelEditing))},
	{"collapse", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*)>(&BasicTreeUI$Actions::collapse))},
	{"expand", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*)>(&BasicTreeUI$Actions::expand))},
	{"extendSelection", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*)>(&BasicTreeUI$Actions::extendSelection))},
	{"home", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;IZZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*,int32_t,bool,bool)>(&BasicTreeUI$Actions::home))},
	{"increment", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;IZZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*,int32_t,bool,bool)>(&BasicTreeUI$Actions::increment))},
	{"moveSelectionToParent", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*)>(&BasicTreeUI$Actions::moveSelectionToParent))},
	{"page", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;IZZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*,int32_t,bool,bool)>(&BasicTreeUI$Actions::page))},
	{"scroll", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;II)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*,int32_t,int32_t)>(&BasicTreeUI$Actions::scroll))},
	{"scrollChangeSelection", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;IZZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*,int32_t,bool,bool)>(&BasicTreeUI$Actions::scrollChangeSelection))},
	{"selectAll", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;Z)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*,bool)>(&BasicTreeUI$Actions::selectAll))},
	{"startEditing", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*)>(&BasicTreeUI$Actions::startEditing))},
	{"toggle", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*)>(&BasicTreeUI$Actions::toggle))},
	{"traverse", "(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;IZ)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Actions::*)($JTree*,$BasicTreeUI*,int32_t,bool)>(&BasicTreeUI$Actions::traverse))},
	{}
};

$InnerClassInfo _BasicTreeUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$Actions", "javax.swing.plaf.basic.BasicTreeUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicTreeUI$Actions$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicTreeUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicTreeUI$Actions_FieldInfo_,
	_BasicTreeUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$Actions($Class* clazz) {
	return $of($alloc(BasicTreeUI$Actions));
}

$String* BasicTreeUI$Actions::SELECT_PREVIOUS = nullptr;
$String* BasicTreeUI$Actions::SELECT_PREVIOUS_CHANGE_LEAD = nullptr;
$String* BasicTreeUI$Actions::SELECT_PREVIOUS_EXTEND_SELECTION = nullptr;
$String* BasicTreeUI$Actions::SELECT_NEXT = nullptr;
$String* BasicTreeUI$Actions::SELECT_NEXT_CHANGE_LEAD = nullptr;
$String* BasicTreeUI$Actions::SELECT_NEXT_EXTEND_SELECTION = nullptr;
$String* BasicTreeUI$Actions::SELECT_CHILD = nullptr;
$String* BasicTreeUI$Actions::SELECT_CHILD_CHANGE_LEAD = nullptr;
$String* BasicTreeUI$Actions::SELECT_PARENT = nullptr;
$String* BasicTreeUI$Actions::SELECT_PARENT_CHANGE_LEAD = nullptr;
$String* BasicTreeUI$Actions::SCROLL_UP_CHANGE_SELECTION = nullptr;
$String* BasicTreeUI$Actions::SCROLL_UP_CHANGE_LEAD = nullptr;
$String* BasicTreeUI$Actions::SCROLL_UP_EXTEND_SELECTION = nullptr;
$String* BasicTreeUI$Actions::SCROLL_DOWN_CHANGE_SELECTION = nullptr;
$String* BasicTreeUI$Actions::SCROLL_DOWN_EXTEND_SELECTION = nullptr;
$String* BasicTreeUI$Actions::SCROLL_DOWN_CHANGE_LEAD = nullptr;
$String* BasicTreeUI$Actions::SELECT_FIRST = nullptr;
$String* BasicTreeUI$Actions::SELECT_FIRST_CHANGE_LEAD = nullptr;
$String* BasicTreeUI$Actions::SELECT_FIRST_EXTEND_SELECTION = nullptr;
$String* BasicTreeUI$Actions::SELECT_LAST = nullptr;
$String* BasicTreeUI$Actions::SELECT_LAST_CHANGE_LEAD = nullptr;
$String* BasicTreeUI$Actions::SELECT_LAST_EXTEND_SELECTION = nullptr;
$String* BasicTreeUI$Actions::TOGGLE = nullptr;
$String* BasicTreeUI$Actions::CANCEL_EDITING = nullptr;
$String* BasicTreeUI$Actions::START_EDITING = nullptr;
$String* BasicTreeUI$Actions::SELECT_ALL = nullptr;
$String* BasicTreeUI$Actions::CLEAR_SELECTION = nullptr;
$String* BasicTreeUI$Actions::SCROLL_LEFT = nullptr;
$String* BasicTreeUI$Actions::SCROLL_RIGHT = nullptr;
$String* BasicTreeUI$Actions::SCROLL_LEFT_EXTEND_SELECTION = nullptr;
$String* BasicTreeUI$Actions::SCROLL_RIGHT_EXTEND_SELECTION = nullptr;
$String* BasicTreeUI$Actions::SCROLL_RIGHT_CHANGE_LEAD = nullptr;
$String* BasicTreeUI$Actions::SCROLL_LEFT_CHANGE_LEAD = nullptr;
$String* BasicTreeUI$Actions::EXPAND = nullptr;
$String* BasicTreeUI$Actions::COLLAPSE = nullptr;
$String* BasicTreeUI$Actions::MOVE_SELECTION_TO_PARENT = nullptr;
$String* BasicTreeUI$Actions::ADD_TO_SELECTION = nullptr;
$String* BasicTreeUI$Actions::TOGGLE_AND_ANCHOR = nullptr;
$String* BasicTreeUI$Actions::EXTEND_TO = nullptr;
$String* BasicTreeUI$Actions::MOVE_SELECTION_TO = nullptr;

void BasicTreeUI$Actions::init$() {
	$UIAction::init$(nullptr);
}

void BasicTreeUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

bool BasicTreeUI$Actions::accept(Object$* o) {
	if ($instanceOf($JTree, o)) {
		if (getName() == BasicTreeUI$Actions::CANCEL_EDITING) {
			return $nc(($cast($JTree, o)))->isEditing();
		}
	}
	return true;
}

void BasicTreeUI$Actions::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTree, tree, $cast($JTree, $nc(e)->getSource()));
	$load($BasicTreeUI);
	$var($BasicTreeUI, ui, $cast($BasicTreeUI, $BasicLookAndFeel::getUIOfType($($nc(tree)->getUI()), $BasicTreeUI::class$)));
	if (ui == nullptr) {
		return;
	}
	$var($String, key, getName());
	if (key == BasicTreeUI$Actions::SELECT_PREVIOUS) {
		increment(tree, ui, -1, false, true);
	} else if (key == BasicTreeUI$Actions::SELECT_PREVIOUS_CHANGE_LEAD) {
		increment(tree, ui, -1, false, false);
	} else if (key == BasicTreeUI$Actions::SELECT_PREVIOUS_EXTEND_SELECTION) {
		increment(tree, ui, -1, true, true);
	} else if (key == BasicTreeUI$Actions::SELECT_NEXT) {
		increment(tree, ui, 1, false, true);
	} else if (key == BasicTreeUI$Actions::SELECT_NEXT_CHANGE_LEAD) {
		increment(tree, ui, 1, false, false);
	} else if (key == BasicTreeUI$Actions::SELECT_NEXT_EXTEND_SELECTION) {
		increment(tree, ui, 1, true, true);
	} else if (key == BasicTreeUI$Actions::SELECT_CHILD) {
		traverse(tree, ui, 1, true);
	} else if (key == BasicTreeUI$Actions::SELECT_CHILD_CHANGE_LEAD) {
		traverse(tree, ui, 1, false);
	} else if (key == BasicTreeUI$Actions::SELECT_PARENT) {
		traverse(tree, ui, -1, true);
	} else if (key == BasicTreeUI$Actions::SELECT_PARENT_CHANGE_LEAD) {
		traverse(tree, ui, -1, false);
	} else if (key == BasicTreeUI$Actions::SCROLL_UP_CHANGE_SELECTION) {
		page(tree, ui, -1, false, true);
	} else if (key == BasicTreeUI$Actions::SCROLL_UP_CHANGE_LEAD) {
		page(tree, ui, -1, false, false);
	} else if (key == BasicTreeUI$Actions::SCROLL_UP_EXTEND_SELECTION) {
		page(tree, ui, -1, true, true);
	} else if (key == BasicTreeUI$Actions::SCROLL_DOWN_CHANGE_SELECTION) {
		page(tree, ui, 1, false, true);
	} else if (key == BasicTreeUI$Actions::SCROLL_DOWN_EXTEND_SELECTION) {
		page(tree, ui, 1, true, true);
	} else if (key == BasicTreeUI$Actions::SCROLL_DOWN_CHANGE_LEAD) {
		page(tree, ui, 1, false, false);
	} else if (key == BasicTreeUI$Actions::SELECT_FIRST) {
		home(tree, ui, -1, false, true);
	} else if (key == BasicTreeUI$Actions::SELECT_FIRST_CHANGE_LEAD) {
		home(tree, ui, -1, false, false);
	} else if (key == BasicTreeUI$Actions::SELECT_FIRST_EXTEND_SELECTION) {
		home(tree, ui, -1, true, true);
	} else if (key == BasicTreeUI$Actions::SELECT_LAST) {
		home(tree, ui, 1, false, true);
	} else if (key == BasicTreeUI$Actions::SELECT_LAST_CHANGE_LEAD) {
		home(tree, ui, 1, false, false);
	} else if (key == BasicTreeUI$Actions::SELECT_LAST_EXTEND_SELECTION) {
		home(tree, ui, 1, true, true);
	} else if (key == BasicTreeUI$Actions::TOGGLE) {
		toggle(tree, ui);
	} else if (key == BasicTreeUI$Actions::CANCEL_EDITING) {
		cancelEditing(tree, ui);
	} else if (key == BasicTreeUI$Actions::START_EDITING) {
		startEditing(tree, ui);
	} else if (key == BasicTreeUI$Actions::SELECT_ALL) {
		selectAll(tree, ui, true);
	} else if (key == BasicTreeUI$Actions::CLEAR_SELECTION) {
		selectAll(tree, ui, false);
	} else if (key == BasicTreeUI$Actions::ADD_TO_SELECTION) {
		if ($nc(ui)->getRowCount(tree) > 0) {
			int32_t lead = ui->getLeadSelectionRow();
			if (!$nc(tree)->isRowSelected(lead)) {
				$var($TreePath, aPath, ui->getAnchorSelectionPath());
				tree->addSelectionRow(lead);
				ui->setAnchorSelectionPath(aPath);
			}
		}
	} else if (key == BasicTreeUI$Actions::TOGGLE_AND_ANCHOR) {
		if ($nc(ui)->getRowCount(tree) > 0) {
			int32_t lead = ui->getLeadSelectionRow();
			$var($TreePath, lPath, ui->getLeadSelectionPath());
			if (!$nc(tree)->isRowSelected(lead)) {
				tree->addSelectionRow(lead);
			} else {
				tree->removeSelectionRow(lead);
				ui->setLeadSelectionPath(lPath);
			}
			ui->setAnchorSelectionPath(lPath);
		}
	} else if (key == BasicTreeUI$Actions::EXTEND_TO) {
		extendSelection(tree, ui);
	} else if (key == BasicTreeUI$Actions::MOVE_SELECTION_TO) {
		if ($nc(ui)->getRowCount(tree) > 0) {
			int32_t lead = ui->getLeadSelectionRow();
			$nc(tree)->setSelectionInterval(lead, lead);
		}
	} else if (key == BasicTreeUI$Actions::SCROLL_LEFT) {
		scroll(tree, ui, $SwingConstants::HORIZONTAL, -10);
	} else if (key == BasicTreeUI$Actions::SCROLL_RIGHT) {
		scroll(tree, ui, $SwingConstants::HORIZONTAL, 10);
	} else if (key == BasicTreeUI$Actions::SCROLL_LEFT_EXTEND_SELECTION) {
		scrollChangeSelection(tree, ui, -1, true, true);
	} else if (key == BasicTreeUI$Actions::SCROLL_RIGHT_EXTEND_SELECTION) {
		scrollChangeSelection(tree, ui, 1, true, true);
	} else if (key == BasicTreeUI$Actions::SCROLL_RIGHT_CHANGE_LEAD) {
		scrollChangeSelection(tree, ui, 1, false, false);
	} else if (key == BasicTreeUI$Actions::SCROLL_LEFT_CHANGE_LEAD) {
		scrollChangeSelection(tree, ui, -1, false, false);
	} else if (key == BasicTreeUI$Actions::EXPAND) {
		expand(tree, ui);
	} else if (key == BasicTreeUI$Actions::COLLAPSE) {
		collapse(tree, ui);
	} else if (key == BasicTreeUI$Actions::MOVE_SELECTION_TO_PARENT) {
		moveSelectionToParent(tree, ui);
	}
}

void BasicTreeUI$Actions::scrollChangeSelection($JTree* tree, $BasicTreeUI* ui, int32_t direction, bool addToSelection, bool changeSelection) {
	$useLocalCurrentObjectStackCache();
	int32_t rowCount = 0;
	if ((rowCount = $nc(ui)->getRowCount(tree)) > 0 && ui->treeSelectionModel != nullptr) {
		$var($TreePath, newPath, nullptr);
		$var($Rectangle, visRect, $nc(tree)->getVisibleRect());
		if (direction == -1) {
			$assign(newPath, ui->getClosestPathForLocation(tree, $nc(visRect)->x, visRect->y));
			$nc(visRect)->x = $Math::max(0, visRect->x - visRect->width);
		} else {
			$nc(visRect)->x = $Math::min($Math::max(0, tree->getWidth() - visRect->width), visRect->x + visRect->width);
			$assign(newPath, ui->getClosestPathForLocation(tree, visRect->x, visRect->y + visRect->height));
		}
		tree->scrollRectToVisible(visRect);
		if (addToSelection) {
			ui->extendSelection(newPath);
		} else if (changeSelection) {
			tree->setSelectionPath(newPath);
		} else {
			ui->setLeadSelectionPath(newPath, true);
		}
	}
}

void BasicTreeUI$Actions::scroll($JTree* component, $BasicTreeUI* ui, int32_t direction, int32_t amount) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, visRect, $nc(component)->getVisibleRect());
	$var($Dimension, size, component->getSize());
	if (direction == $SwingConstants::HORIZONTAL) {
		$nc(visRect)->x += amount;
		visRect->x = $Math::max(0, visRect->x);
		visRect->x = $Math::min($Math::max(0, $nc(size)->width - visRect->width), visRect->x);
	} else {
		$nc(visRect)->y += amount;
		visRect->y = $Math::max(0, visRect->y);
		visRect->y = $Math::min($Math::max(0, $nc(size)->width - visRect->height), visRect->y);
	}
	component->scrollRectToVisible(visRect);
}

void BasicTreeUI$Actions::extendSelection($JTree* tree, $BasicTreeUI* ui) {
	$useLocalCurrentObjectStackCache();
	if ($nc(ui)->getRowCount(tree) > 0) {
		int32_t lead = ui->getLeadSelectionRow();
		if (lead != -1) {
			$var($TreePath, leadP, ui->getLeadSelectionPath());
			$var($TreePath, aPath, ui->getAnchorSelectionPath());
			int32_t aRow = ui->getRowForPath(tree, aPath);
			if (aRow == -1) {
				aRow = 0;
			}
			$nc(tree)->setSelectionInterval(aRow, lead);
			ui->setLeadSelectionPath(leadP);
			ui->setAnchorSelectionPath(aPath);
		}
	}
}

void BasicTreeUI$Actions::selectAll($JTree* tree, $BasicTreeUI* ui, bool selectAll) {
	$useLocalCurrentObjectStackCache();
	int32_t rowCount = $nc(ui)->getRowCount(tree);
	if (rowCount > 0) {
		if (selectAll) {
			if ($nc($($nc(tree)->getSelectionModel()))->getSelectionMode() == $TreeSelectionModel::SINGLE_TREE_SELECTION) {
				int32_t lead = ui->getLeadSelectionRow();
				if (lead != -1) {
					tree->setSelectionRow(lead);
				} else if (tree->getMinSelectionRow() == -1) {
					tree->setSelectionRow(0);
					ui->ensureRowsAreVisible(0, 0);
				}
				return;
			}
			$var($TreePath, lastPath, ui->getLeadSelectionPath());
			$var($TreePath, aPath, ui->getAnchorSelectionPath());
			if (lastPath != nullptr && !$nc(tree)->isVisible(lastPath)) {
				$assign(lastPath, nullptr);
			}
			$nc(tree)->setSelectionInterval(0, rowCount - 1);
			if (lastPath != nullptr) {
				ui->setLeadSelectionPath(lastPath);
			}
			if (aPath != nullptr && tree->isVisible(aPath)) {
				ui->setAnchorSelectionPath(aPath);
			}
		} else {
			$var($TreePath, lastPath, ui->getLeadSelectionPath());
			$var($TreePath, aPath, ui->getAnchorSelectionPath());
			$nc(tree)->clearSelection();
			ui->setAnchorSelectionPath(aPath);
			ui->setLeadSelectionPath(lastPath);
		}
	}
}

void BasicTreeUI$Actions::startEditing($JTree* tree, $BasicTreeUI* ui) {
	$var($TreePath, lead, $nc(ui)->getLeadSelectionPath());
	int32_t editRow = (lead != nullptr) ? ui->getRowForPath(tree, lead) : -1;
	if (editRow != -1) {
		$nc(tree)->startEditingAtPath(lead);
	}
}

void BasicTreeUI$Actions::cancelEditing($JTree* tree, $BasicTreeUI* ui) {
	$nc(tree)->cancelEditing();
}

void BasicTreeUI$Actions::toggle($JTree* tree, $BasicTreeUI* ui) {
	$useLocalCurrentObjectStackCache();
	int32_t selRow = $nc(ui)->getLeadSelectionRow();
	if (selRow != -1 && !ui->isLeaf(selRow)) {
		$var($TreePath, aPath, ui->getAnchorSelectionPath());
		$var($TreePath, lPath, ui->getLeadSelectionPath());
		ui->toggleExpandState($(ui->getPathForRow(tree, selRow)));
		ui->setAnchorSelectionPath(aPath);
		ui->setLeadSelectionPath(lPath);
	}
}

void BasicTreeUI$Actions::expand($JTree* tree, $BasicTreeUI* ui) {
	int32_t selRow = $nc(ui)->getLeadSelectionRow();
	$nc(tree)->expandRow(selRow);
}

void BasicTreeUI$Actions::collapse($JTree* tree, $BasicTreeUI* ui) {
	int32_t selRow = $nc(ui)->getLeadSelectionRow();
	$nc(tree)->collapseRow(selRow);
}

void BasicTreeUI$Actions::increment($JTree* tree, $BasicTreeUI* ui, int32_t direction, bool addToSelection, bool changeSelection) {
	$useLocalCurrentObjectStackCache();
	if (!addToSelection && !changeSelection && $nc($($nc(tree)->getSelectionModel()))->getSelectionMode() != $TreeSelectionModel::DISCONTIGUOUS_TREE_SELECTION) {
		changeSelection = true;
	}
	int32_t rowCount = 0;
	if ($nc(ui)->treeSelectionModel != nullptr && (rowCount = $nc(tree)->getRowCount()) > 0) {
		int32_t selIndex = ui->getLeadSelectionRow();
		int32_t newIndex = 0;
		if (selIndex == -1) {
			if (direction == 1) {
				newIndex = 0;
			} else {
				newIndex = rowCount - 1;
			}
		} else {
			newIndex = $Math::min(rowCount - 1, $Math::max(0, (selIndex + direction)));
		}
		if (addToSelection && $nc(ui->treeSelectionModel)->getSelectionMode() != $TreeSelectionModel::SINGLE_TREE_SELECTION) {
			ui->extendSelection($(tree->getPathForRow(newIndex)));
		} else if (changeSelection) {
			tree->setSelectionInterval(newIndex, newIndex);
		} else {
			ui->setLeadSelectionPath($(tree->getPathForRow(newIndex)), true);
		}
		ui->ensureRowsAreVisible(newIndex, newIndex);
		ui->lastSelectedRow = newIndex;
	}
}

void BasicTreeUI$Actions::traverse($JTree* tree, $BasicTreeUI* ui, int32_t direction, bool changeSelection) {
	$useLocalCurrentObjectStackCache();
	if (!changeSelection && $nc($($nc(tree)->getSelectionModel()))->getSelectionMode() != $TreeSelectionModel::DISCONTIGUOUS_TREE_SELECTION) {
		changeSelection = true;
	}
	int32_t rowCount = 0;
	if ((rowCount = $nc(tree)->getRowCount()) > 0) {
		int32_t minSelIndex = $nc(ui)->getLeadSelectionRow();
		int32_t newIndex = 0;
		if (minSelIndex == -1) {
			newIndex = 0;
		} else if (direction == 1) {
			$var($TreePath, minSelPath, ui->getPathForRow(tree, minSelIndex));
			int32_t childCount = $nc($(tree->getModel()))->getChildCount($($nc(minSelPath)->getLastPathComponent()));
			newIndex = -1;
			if (!ui->isLeaf(minSelIndex)) {
				if (!tree->isExpanded(minSelIndex)) {
					ui->toggleExpandState(minSelPath);
				} else if (childCount > 0) {
					newIndex = $Math::min(minSelIndex + 1, rowCount - 1);
				}
			}
		} else {
			bool var$1 = !ui->isLeaf(minSelIndex);
			if (var$1 && tree->isExpanded(minSelIndex)) {
				ui->toggleExpandState($(ui->getPathForRow(tree, minSelIndex)));
				newIndex = -1;
			} else {
				$var($TreePath, path, ui->getPathForRow(tree, minSelIndex));
				if (path != nullptr && path->getPathCount() > 1) {
					newIndex = ui->getRowForPath(tree, $(path->getParentPath()));
				} else {
					newIndex = -1;
				}
			}
		}
		if (newIndex != -1) {
			if (changeSelection) {
				tree->setSelectionInterval(newIndex, newIndex);
			} else {
				ui->setLeadSelectionPath($(ui->getPathForRow(tree, newIndex)), true);
			}
			ui->ensureRowsAreVisible(newIndex, newIndex);
		}
	}
}

void BasicTreeUI$Actions::moveSelectionToParent($JTree* tree, $BasicTreeUI* ui) {
	$useLocalCurrentObjectStackCache();
	int32_t selRow = $nc(ui)->getLeadSelectionRow();
	$var($TreePath, path, ui->getPathForRow(tree, selRow));
	if (path != nullptr && path->getPathCount() > 1) {
		int32_t newIndex = ui->getRowForPath(tree, $(path->getParentPath()));
		if (newIndex != -1) {
			$nc(tree)->setSelectionInterval(newIndex, newIndex);
			ui->ensureRowsAreVisible(newIndex, newIndex);
		}
	}
}

void BasicTreeUI$Actions::page($JTree* tree, $BasicTreeUI* ui, int32_t direction, bool addToSelection, bool changeSelection) {
	$useLocalCurrentObjectStackCache();
	if (!addToSelection && !changeSelection && $nc($($nc(tree)->getSelectionModel()))->getSelectionMode() != $TreeSelectionModel::DISCONTIGUOUS_TREE_SELECTION) {
		changeSelection = true;
	}
	int32_t rowCount = 0;
	if ((rowCount = $nc(ui)->getRowCount(tree)) > 0 && ui->treeSelectionModel != nullptr) {
		$var($Dimension, maxSize, $nc(tree)->getSize());
		$var($TreePath, lead, ui->getLeadSelectionPath());
		$var($TreePath, newPath, nullptr);
		$var($Rectangle, visRect, tree->getVisibleRect());
		if (direction == -1) {
			$assign(newPath, ui->getClosestPathForLocation(tree, $nc(visRect)->x, visRect->y));
			if ($nc(newPath)->equals(lead)) {
				$nc(visRect)->y = $Math::max(0, visRect->y - visRect->height);
				$assign(newPath, tree->getClosestPathForLocation(visRect->x, visRect->y));
			}
		} else {
			$nc(visRect)->y = $Math::min($nc(maxSize)->height, visRect->y + visRect->height - 1);
			$assign(newPath, tree->getClosestPathForLocation(visRect->x, visRect->y));
			if ($nc(newPath)->equals(lead)) {
				visRect->y = $Math::min($nc(maxSize)->height, visRect->y + visRect->height - 1);
				$assign(newPath, tree->getClosestPathForLocation(visRect->x, visRect->y));
			}
		}
		$var($Rectangle, newRect, ui->getPathBounds(tree, newPath));
		if (newRect != nullptr) {
			newRect->x = $nc(visRect)->x;
			newRect->width = visRect->width;
			if (direction == -1) {
				newRect->height = visRect->height;
			} else {
				newRect->y -= (visRect->height - newRect->height);
				newRect->height = visRect->height;
			}
			if (addToSelection) {
				ui->extendSelection(newPath);
			} else if (changeSelection) {
				tree->setSelectionPath(newPath);
			} else {
				ui->setLeadSelectionPath(newPath, true);
			}
			tree->scrollRectToVisible(newRect);
		}
	}
}

void BasicTreeUI$Actions::home($JTree* tree, $BasicTreeUI* ui, int32_t direction, bool addToSelection, bool changeSelection) {
	$useLocalCurrentObjectStackCache();
	if (!addToSelection && !changeSelection && $nc($($nc(tree)->getSelectionModel()))->getSelectionMode() != $TreeSelectionModel::DISCONTIGUOUS_TREE_SELECTION) {
		changeSelection = true;
	}
	int32_t rowCount = $nc(ui)->getRowCount(tree);
	if (rowCount > 0) {
		if (direction == -1) {
			ui->ensureRowsAreVisible(0, 0);
			if (addToSelection) {
				$var($TreePath, aPath, ui->getAnchorSelectionPath());
				int32_t aRow = (aPath == nullptr) ? -1 : ui->getRowForPath(tree, aPath);
				if (aRow == -1) {
					$nc(tree)->setSelectionInterval(0, 0);
				} else {
					$nc(tree)->setSelectionInterval(0, aRow);
					ui->setAnchorSelectionPath(aPath);
					ui->setLeadSelectionPath($(ui->getPathForRow(tree, 0)));
				}
			} else if (changeSelection) {
				$nc(tree)->setSelectionInterval(0, 0);
			} else {
				ui->setLeadSelectionPath($(ui->getPathForRow(tree, 0)), true);
			}
		} else {
			ui->ensureRowsAreVisible(rowCount - 1, rowCount - 1);
			if (addToSelection) {
				$var($TreePath, aPath, ui->getAnchorSelectionPath());
				int32_t aRow = (aPath == nullptr) ? -1 : ui->getRowForPath(tree, aPath);
				if (aRow == -1) {
					$nc(tree)->setSelectionInterval(rowCount - 1, rowCount - 1);
				} else {
					$nc(tree)->setSelectionInterval(aRow, rowCount - 1);
					ui->setAnchorSelectionPath(aPath);
					ui->setLeadSelectionPath($(ui->getPathForRow(tree, rowCount - 1)));
				}
			} else if (changeSelection) {
				$nc(tree)->setSelectionInterval(rowCount - 1, rowCount - 1);
			} else {
				ui->setLeadSelectionPath($(ui->getPathForRow(tree, rowCount - 1)), true);
			}
			if (ui->isLargeModel()) {
				$SwingUtilities::invokeLater($$new($BasicTreeUI$Actions$1, this, ui, rowCount));
			}
		}
	}
}

BasicTreeUI$Actions::BasicTreeUI$Actions() {
}

void clinit$BasicTreeUI$Actions($Class* class$) {
	$assignStatic(BasicTreeUI$Actions::SELECT_PREVIOUS, "selectPrevious"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_PREVIOUS_CHANGE_LEAD, "selectPreviousChangeLead"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_PREVIOUS_EXTEND_SELECTION, "selectPreviousExtendSelection"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_NEXT, "selectNext"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_NEXT_CHANGE_LEAD, "selectNextChangeLead"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_NEXT_EXTEND_SELECTION, "selectNextExtendSelection"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_CHILD, "selectChild"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_CHILD_CHANGE_LEAD, "selectChildChangeLead"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_PARENT, "selectParent"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_PARENT_CHANGE_LEAD, "selectParentChangeLead"_s);
	$assignStatic(BasicTreeUI$Actions::SCROLL_UP_CHANGE_SELECTION, "scrollUpChangeSelection"_s);
	$assignStatic(BasicTreeUI$Actions::SCROLL_UP_CHANGE_LEAD, "scrollUpChangeLead"_s);
	$assignStatic(BasicTreeUI$Actions::SCROLL_UP_EXTEND_SELECTION, "scrollUpExtendSelection"_s);
	$assignStatic(BasicTreeUI$Actions::SCROLL_DOWN_CHANGE_SELECTION, "scrollDownChangeSelection"_s);
	$assignStatic(BasicTreeUI$Actions::SCROLL_DOWN_EXTEND_SELECTION, "scrollDownExtendSelection"_s);
	$assignStatic(BasicTreeUI$Actions::SCROLL_DOWN_CHANGE_LEAD, "scrollDownChangeLead"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_FIRST, "selectFirst"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_FIRST_CHANGE_LEAD, "selectFirstChangeLead"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_FIRST_EXTEND_SELECTION, "selectFirstExtendSelection"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_LAST, "selectLast"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_LAST_CHANGE_LEAD, "selectLastChangeLead"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_LAST_EXTEND_SELECTION, "selectLastExtendSelection"_s);
	$assignStatic(BasicTreeUI$Actions::TOGGLE, "toggle"_s);
	$assignStatic(BasicTreeUI$Actions::CANCEL_EDITING, "cancel"_s);
	$assignStatic(BasicTreeUI$Actions::START_EDITING, "startEditing"_s);
	$assignStatic(BasicTreeUI$Actions::SELECT_ALL, "selectAll"_s);
	$assignStatic(BasicTreeUI$Actions::CLEAR_SELECTION, "clearSelection"_s);
	$assignStatic(BasicTreeUI$Actions::SCROLL_LEFT, "scrollLeft"_s);
	$assignStatic(BasicTreeUI$Actions::SCROLL_RIGHT, "scrollRight"_s);
	$assignStatic(BasicTreeUI$Actions::SCROLL_LEFT_EXTEND_SELECTION, "scrollLeftExtendSelection"_s);
	$assignStatic(BasicTreeUI$Actions::SCROLL_RIGHT_EXTEND_SELECTION, "scrollRightExtendSelection"_s);
	$assignStatic(BasicTreeUI$Actions::SCROLL_RIGHT_CHANGE_LEAD, "scrollRightChangeLead"_s);
	$assignStatic(BasicTreeUI$Actions::SCROLL_LEFT_CHANGE_LEAD, "scrollLeftChangeLead"_s);
	$assignStatic(BasicTreeUI$Actions::EXPAND, "expand"_s);
	$assignStatic(BasicTreeUI$Actions::COLLAPSE, "collapse"_s);
	$assignStatic(BasicTreeUI$Actions::MOVE_SELECTION_TO_PARENT, "moveSelectionToParent"_s);
	$assignStatic(BasicTreeUI$Actions::ADD_TO_SELECTION, "addToSelection"_s);
	$assignStatic(BasicTreeUI$Actions::TOGGLE_AND_ANCHOR, "toggleAndAnchor"_s);
	$assignStatic(BasicTreeUI$Actions::EXTEND_TO, "extendTo"_s);
	$assignStatic(BasicTreeUI$Actions::MOVE_SELECTION_TO, "moveSelectionTo"_s);
}

$Class* BasicTreeUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$Actions, name, initialize, &_BasicTreeUI$Actions_ClassInfo_, clinit$BasicTreeUI$Actions, allocate$BasicTreeUI$Actions);
	return class$;
}

$Class* BasicTreeUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax