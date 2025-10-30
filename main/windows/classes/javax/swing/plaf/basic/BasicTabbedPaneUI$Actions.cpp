#include <javax/swing/plaf/basic/BasicTabbedPaneUI$Actions.h>

#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <java/util/Hashtable.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabSupport.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef DOWN
#undef EAST
#undef LEFT
#undef NEXT
#undef NORTH
#undef PAGE_DOWN
#undef PAGE_UP
#undef PREVIOUS
#undef REQUEST_FOCUS
#undef REQUEST_FOCUS_FOR_VISIBLE
#undef RIGHT
#undef SCROLL_BACKWARD
#undef SCROLL_FORWARD
#undef SELECT_FOCUSED
#undef SET_SELECTED
#undef SOUTH
#undef UP
#undef WEST

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Hashtable = ::java::util::Hashtable;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$ScrollableTabSupport = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabSupport;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTabbedPaneUI$Actions_FieldInfo_[] = {
	{"NEXT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, NEXT)},
	{"PREVIOUS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, PREVIOUS)},
	{"RIGHT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, RIGHT)},
	{"LEFT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, LEFT)},
	{"UP", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, UP)},
	{"DOWN", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, DOWN)},
	{"PAGE_UP", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, PAGE_UP)},
	{"PAGE_DOWN", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, PAGE_DOWN)},
	{"REQUEST_FOCUS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, REQUEST_FOCUS)},
	{"REQUEST_FOCUS_FOR_VISIBLE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, REQUEST_FOCUS_FOR_VISIBLE)},
	{"SET_SELECTED", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, SET_SELECTED)},
	{"SELECT_FOCUSED", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, SELECT_FOCUSED)},
	{"SCROLL_FORWARD", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, SCROLL_FORWARD)},
	{"SCROLL_BACKWARD", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(BasicTabbedPaneUI$Actions, SCROLL_BACKWARD)},
	{}
};

$MethodInfo _BasicTabbedPaneUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicTabbedPaneUI$Actions::*)($String*)>(&BasicTabbedPaneUI$Actions::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$Actions", "javax.swing.plaf.basic.BasicTabbedPaneUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicTabbedPaneUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicTabbedPaneUI$Actions_FieldInfo_,
	_BasicTabbedPaneUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI"
};

$Object* allocate$BasicTabbedPaneUI$Actions($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI$Actions));
}

$String* BasicTabbedPaneUI$Actions::NEXT = nullptr;
$String* BasicTabbedPaneUI$Actions::PREVIOUS = nullptr;
$String* BasicTabbedPaneUI$Actions::RIGHT = nullptr;
$String* BasicTabbedPaneUI$Actions::LEFT = nullptr;
$String* BasicTabbedPaneUI$Actions::UP = nullptr;
$String* BasicTabbedPaneUI$Actions::DOWN = nullptr;
$String* BasicTabbedPaneUI$Actions::PAGE_UP = nullptr;
$String* BasicTabbedPaneUI$Actions::PAGE_DOWN = nullptr;
$String* BasicTabbedPaneUI$Actions::REQUEST_FOCUS = nullptr;
$String* BasicTabbedPaneUI$Actions::REQUEST_FOCUS_FOR_VISIBLE = nullptr;
$String* BasicTabbedPaneUI$Actions::SET_SELECTED = nullptr;
$String* BasicTabbedPaneUI$Actions::SELECT_FOCUSED = nullptr;
$String* BasicTabbedPaneUI$Actions::SCROLL_FORWARD = nullptr;
$String* BasicTabbedPaneUI$Actions::SCROLL_BACKWARD = nullptr;

void BasicTabbedPaneUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

void BasicTabbedPaneUI$Actions::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, getName());
	$var($JTabbedPane, pane, $cast($JTabbedPane, $nc(e)->getSource()));
	$load($BasicTabbedPaneUI);
	$var($BasicTabbedPaneUI, ui, $cast($BasicTabbedPaneUI, $BasicLookAndFeel::getUIOfType($($nc(pane)->getUI()), $BasicTabbedPaneUI::class$)));
	if (ui == nullptr) {
		return;
	}
	if (key == BasicTabbedPaneUI$Actions::NEXT) {
		$nc(ui)->navigateSelectedTab($SwingConstants::NEXT);
	} else if (key == BasicTabbedPaneUI$Actions::PREVIOUS) {
		$nc(ui)->navigateSelectedTab($SwingConstants::PREVIOUS);
	} else if (key == BasicTabbedPaneUI$Actions::RIGHT) {
		$nc(ui)->navigateSelectedTab($SwingConstants::EAST);
	} else if (key == BasicTabbedPaneUI$Actions::LEFT) {
		$nc(ui)->navigateSelectedTab($SwingConstants::WEST);
	} else if (key == BasicTabbedPaneUI$Actions::UP) {
		$nc(ui)->navigateSelectedTab($SwingConstants::NORTH);
	} else if (key == BasicTabbedPaneUI$Actions::DOWN) {
		$nc(ui)->navigateSelectedTab($SwingConstants::SOUTH);
	} else if (key == BasicTabbedPaneUI$Actions::PAGE_UP) {
		int32_t tabPlacement = $nc(pane)->getTabPlacement();
		if (tabPlacement == 1 || tabPlacement == 3) {
			$nc(ui)->navigateSelectedTab($SwingConstants::WEST);
		} else {
			$nc(ui)->navigateSelectedTab($SwingConstants::NORTH);
		}
	} else if (key == BasicTabbedPaneUI$Actions::PAGE_DOWN) {
		int32_t tabPlacement = $nc(pane)->getTabPlacement();
		if (tabPlacement == 1 || tabPlacement == 3) {
			$nc(ui)->navigateSelectedTab($SwingConstants::EAST);
		} else {
			$nc(ui)->navigateSelectedTab($SwingConstants::SOUTH);
		}
	} else if (key == BasicTabbedPaneUI$Actions::REQUEST_FOCUS) {
		$nc(pane)->requestFocus();
	} else if (key == BasicTabbedPaneUI$Actions::REQUEST_FOCUS_FOR_VISIBLE) {
		$nc(ui)->requestFocusForVisibleComponent();
	} else if (key == BasicTabbedPaneUI$Actions::SET_SELECTED) {
		$var($String, command, e->getActionCommand());
		if (command != nullptr && command->length() > 0) {
			int32_t mnemonic = (int32_t)$nc($(e->getActionCommand()))->charAt(0);
			if (mnemonic >= u'a' && mnemonic <= u'z') {
				mnemonic -= (u'a' - u'A');
			}
			$var($Integer, index, $cast($Integer, $nc($nc(ui)->mnemonicToIndexMap)->get($($Integer::valueOf(mnemonic)))));
			if (index != nullptr && $nc(pane)->isEnabledAt(index->intValue())) {
				pane->setSelectedIndex(index->intValue());
			}
		}
	} else if (key == BasicTabbedPaneUI$Actions::SELECT_FOCUSED) {
		int32_t focusIndex = $nc(ui)->getFocusIndex();
		if (focusIndex != -1) {
			$nc(pane)->setSelectedIndex(focusIndex);
		}
	} else if (key == BasicTabbedPaneUI$Actions::SCROLL_FORWARD) {
		if ($nc(ui)->scrollableTabLayoutEnabled()) {
			$nc(ui->tabScroller)->scrollForward($nc(pane)->getTabPlacement());
		}
	} else if (key == BasicTabbedPaneUI$Actions::SCROLL_BACKWARD) {
		if ($nc(ui)->scrollableTabLayoutEnabled()) {
			$nc(ui->tabScroller)->scrollBackward($nc(pane)->getTabPlacement());
		}
	}
}

BasicTabbedPaneUI$Actions::BasicTabbedPaneUI$Actions() {
}

void clinit$BasicTabbedPaneUI$Actions($Class* class$) {
	$assignStatic(BasicTabbedPaneUI$Actions::NEXT, "navigateNext"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::PREVIOUS, "navigatePrevious"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::RIGHT, "navigateRight"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::LEFT, "navigateLeft"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::UP, "navigateUp"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::DOWN, "navigateDown"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::PAGE_UP, "navigatePageUp"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::PAGE_DOWN, "navigatePageDown"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::REQUEST_FOCUS, "requestFocus"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::REQUEST_FOCUS_FOR_VISIBLE, "requestFocusForVisibleComponent"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::SET_SELECTED, "setSelectedIndex"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::SELECT_FOCUSED, "selectTabWithFocus"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::SCROLL_FORWARD, "scrollTabsForwardAction"_s);
	$assignStatic(BasicTabbedPaneUI$Actions::SCROLL_BACKWARD, "scrollTabsBackwardAction"_s);
}

$Class* BasicTabbedPaneUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI$Actions, name, initialize, &_BasicTabbedPaneUI$Actions_ClassInfo_, clinit$BasicTabbedPaneUI$Actions, allocate$BasicTabbedPaneUI$Actions);
	return class$;
}

$Class* BasicTabbedPaneUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax