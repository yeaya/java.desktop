#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$Actions.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <java/util/Hashtable.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
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

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$ScrollableTabSupport;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIAction = ::sun::swing::UIAction;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$Actions_FieldInfo_[] = {
	{"NEXT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, NEXT)},
	{"PREVIOUS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, PREVIOUS)},
	{"RIGHT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, RIGHT)},
	{"LEFT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, LEFT)},
	{"UP", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, UP)},
	{"DOWN", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, DOWN)},
	{"PAGE_UP", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, PAGE_UP)},
	{"PAGE_DOWN", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, PAGE_DOWN)},
	{"REQUEST_FOCUS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, REQUEST_FOCUS)},
	{"REQUEST_FOCUS_FOR_VISIBLE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, REQUEST_FOCUS_FOR_VISIBLE)},
	{"SET_SELECTED", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, SET_SELECTED)},
	{"SELECT_FOCUSED", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, SELECT_FOCUSED)},
	{"SCROLL_FORWARD", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, SCROLL_FORWARD)},
	{"SCROLL_BACKWARD", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaTabbedPaneCopyFromBasicUI$Actions, SCROLL_BACKWARD)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$Actions::*)($String*)>(&AquaTabbedPaneCopyFromBasicUI$Actions::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"getUIOfType", "(Ljavax/swing/plaf/ComponentUI;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljavax/swing/plaf/ComponentUI;Ljava/lang/Class<Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;>;)Ljava/lang/Object;", $STATIC, $method(static_cast<$Object*(*)($ComponentUI*,$Class*)>(&AquaTabbedPaneCopyFromBasicUI$Actions::getUIOfType))},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$Actions_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$Actions", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$Actions_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$Actions($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$Actions));
}

$String* AquaTabbedPaneCopyFromBasicUI$Actions::NEXT = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::PREVIOUS = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::RIGHT = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::LEFT = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::UP = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::DOWN = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::PAGE_UP = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::PAGE_DOWN = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::REQUEST_FOCUS = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::REQUEST_FOCUS_FOR_VISIBLE = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::SET_SELECTED = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::SELECT_FOCUSED = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::SCROLL_FORWARD = nullptr;
$String* AquaTabbedPaneCopyFromBasicUI$Actions::SCROLL_BACKWARD = nullptr;

void AquaTabbedPaneCopyFromBasicUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

$Object* AquaTabbedPaneCopyFromBasicUI$Actions::getUIOfType($ComponentUI* ui, $Class* klass) {
	$init(AquaTabbedPaneCopyFromBasicUI$Actions);
	if ($nc(klass)->isInstance(ui)) {
		return $of(ui);
	}
	return $of(nullptr);
}

void AquaTabbedPaneCopyFromBasicUI$Actions::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, getName());
	$var($JTabbedPane, pane, $cast($JTabbedPane, $nc(e)->getSource()));
	$load($AquaTabbedPaneCopyFromBasicUI);
	$var($AquaTabbedPaneCopyFromBasicUI, ui, $cast($AquaTabbedPaneCopyFromBasicUI, getUIOfType($($nc(pane)->getUI()), $AquaTabbedPaneCopyFromBasicUI::class$)));
	if (ui == nullptr) {
		return;
	}
	if (key == AquaTabbedPaneCopyFromBasicUI$Actions::NEXT) {
		$nc(ui)->navigateSelectedTab($SwingConstants::NEXT);
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::PREVIOUS) {
		$nc(ui)->navigateSelectedTab($SwingConstants::PREVIOUS);
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::RIGHT) {
		$nc(ui)->navigateSelectedTab($SwingConstants::EAST);
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::LEFT) {
		$nc(ui)->navigateSelectedTab($SwingConstants::WEST);
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::UP) {
		$nc(ui)->navigateSelectedTab($SwingConstants::NORTH);
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::DOWN) {
		$nc(ui)->navigateSelectedTab($SwingConstants::SOUTH);
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::PAGE_UP) {
		int32_t tabPlacement = $nc(pane)->getTabPlacement();
		if (tabPlacement == 1 || tabPlacement == 3) {
			$nc(ui)->navigateSelectedTab($SwingConstants::WEST);
		} else {
			$nc(ui)->navigateSelectedTab($SwingConstants::NORTH);
		}
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::PAGE_DOWN) {
		int32_t tabPlacement = $nc(pane)->getTabPlacement();
		if (tabPlacement == 1 || tabPlacement == 3) {
			$nc(ui)->navigateSelectedTab($SwingConstants::EAST);
		} else {
			$nc(ui)->navigateSelectedTab($SwingConstants::SOUTH);
		}
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::REQUEST_FOCUS) {
		$nc(pane)->requestFocus();
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::REQUEST_FOCUS_FOR_VISIBLE) {
		$nc(ui)->requestFocusForVisibleComponent();
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::SET_SELECTED) {
		$var($String, command, e->getActionCommand());
		if (command != nullptr && command->length() > 0) {
			int32_t mnemonic = $nc($(e->getActionCommand()))->charAt(0);
			if (mnemonic >= u'a' && mnemonic <= u'z') {
				mnemonic -= (u'a' - u'A');
			}
			$var($Integer, index, $cast($Integer, $nc($nc(ui)->mnemonicToIndexMap)->get($($Integer::valueOf(mnemonic)))));
			if (index != nullptr && $nc(pane)->isEnabledAt(index->intValue())) {
				pane->setSelectedIndex(index->intValue());
			}
		}
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::SELECT_FOCUSED) {
		int32_t focusIndex = $nc(ui)->getFocusIndex();
		if (focusIndex != -1) {
			$nc(pane)->setSelectedIndex(focusIndex);
		}
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::SCROLL_FORWARD) {
		if ($nc(ui)->scrollableTabLayoutEnabled()) {
			$nc(ui->tabScroller)->scrollForward($nc(pane)->getTabPlacement());
		}
	} else if (key == AquaTabbedPaneCopyFromBasicUI$Actions::SCROLL_BACKWARD) {
		if ($nc(ui)->scrollableTabLayoutEnabled()) {
			$nc(ui->tabScroller)->scrollBackward($nc(pane)->getTabPlacement());
		}
	}
}

AquaTabbedPaneCopyFromBasicUI$Actions::AquaTabbedPaneCopyFromBasicUI$Actions() {
}

void clinit$AquaTabbedPaneCopyFromBasicUI$Actions($Class* class$) {
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::NEXT, "navigateNext"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::PREVIOUS, "navigatePrevious"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::RIGHT, "navigateRight"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::LEFT, "navigateLeft"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::UP, "navigateUp"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::DOWN, "navigateDown"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::PAGE_UP, "navigatePageUp"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::PAGE_DOWN, "navigatePageDown"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::REQUEST_FOCUS, "requestFocus"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::REQUEST_FOCUS_FOR_VISIBLE, "requestFocusForVisibleComponent"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::SET_SELECTED, "setSelectedIndex"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::SELECT_FOCUSED, "selectTabWithFocus"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::SCROLL_FORWARD, "scrollTabsForwardAction"_s);
	$assignStatic(AquaTabbedPaneCopyFromBasicUI$Actions::SCROLL_BACKWARD, "scrollTabsBackwardAction"_s);
}

$Class* AquaTabbedPaneCopyFromBasicUI$Actions::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$Actions, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$Actions_ClassInfo_, clinit$AquaTabbedPaneCopyFromBasicUI$Actions, allocate$AquaTabbedPaneCopyFromBasicUI$Actions);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$Actions::class$ = nullptr;

		} // laf
	} // apple
} // com