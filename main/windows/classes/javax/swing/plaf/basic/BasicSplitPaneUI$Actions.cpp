#include <javax/swing/plaf/basic/BasicSplitPaneUI$Actions.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
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
#include <java/util/HashSet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef FOCUS_OUT_BACKWARD
#undef FOCUS_OUT_FORWARD
#undef NEGATIVE_INCREMENT
#undef POSITIVE_INCREMENT
#undef SELECT_MAX
#undef SELECT_MIN
#undef START_RESIZE
#undef TOGGLE_FOCUS
#undef VERTICAL_SPLIT

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $HashSet = ::java::util::HashSet;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneUI$Actions_FieldInfo_[] = {
	{"NEGATIVE_INCREMENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicSplitPaneUI$Actions, NEGATIVE_INCREMENT)},
	{"POSITIVE_INCREMENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicSplitPaneUI$Actions, POSITIVE_INCREMENT)},
	{"SELECT_MIN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicSplitPaneUI$Actions, SELECT_MIN)},
	{"SELECT_MAX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicSplitPaneUI$Actions, SELECT_MAX)},
	{"START_RESIZE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicSplitPaneUI$Actions, START_RESIZE)},
	{"TOGGLE_FOCUS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicSplitPaneUI$Actions, TOGGLE_FOCUS)},
	{"FOCUS_OUT_FORWARD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicSplitPaneUI$Actions, FOCUS_OUT_FORWARD)},
	{"FOCUS_OUT_BACKWARD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicSplitPaneUI$Actions, FOCUS_OUT_BACKWARD)},
	{}
};

$MethodInfo _BasicSplitPaneUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicSplitPaneUI$Actions::*)($String*)>(&BasicSplitPaneUI$Actions::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"getFirstAvailableComponent", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(BasicSplitPaneUI$Actions::*)($Component*)>(&BasicSplitPaneUI$Actions::getFirstAvailableComponent))},
	{"getNextSide", "(Ljavax/swing/JSplitPane;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(BasicSplitPaneUI$Actions::*)($JSplitPane*,$Component*)>(&BasicSplitPaneUI$Actions::getNextSide))},
	{"moveFocus", "(Ljavax/swing/JSplitPane;I)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSplitPaneUI$Actions::*)($JSplitPane*,int32_t)>(&BasicSplitPaneUI$Actions::moveFocus))},
	{"toggleFocus", "(Ljavax/swing/JSplitPane;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSplitPaneUI$Actions::*)($JSplitPane*)>(&BasicSplitPaneUI$Actions::toggleFocus))},
	{}
};

$InnerClassInfo _BasicSplitPaneUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneUI$Actions", "javax.swing.plaf.basic.BasicSplitPaneUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicSplitPaneUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicSplitPaneUI$Actions_FieldInfo_,
	_BasicSplitPaneUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneUI"
};

$Object* allocate$BasicSplitPaneUI$Actions($Class* clazz) {
	return $of($alloc(BasicSplitPaneUI$Actions));
}

$String* BasicSplitPaneUI$Actions::NEGATIVE_INCREMENT = nullptr;
$String* BasicSplitPaneUI$Actions::POSITIVE_INCREMENT = nullptr;
$String* BasicSplitPaneUI$Actions::SELECT_MIN = nullptr;
$String* BasicSplitPaneUI$Actions::SELECT_MAX = nullptr;
$String* BasicSplitPaneUI$Actions::START_RESIZE = nullptr;
$String* BasicSplitPaneUI$Actions::TOGGLE_FOCUS = nullptr;
$String* BasicSplitPaneUI$Actions::FOCUS_OUT_FORWARD = nullptr;
$String* BasicSplitPaneUI$Actions::FOCUS_OUT_BACKWARD = nullptr;

void BasicSplitPaneUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

void BasicSplitPaneUI$Actions::actionPerformed($ActionEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($JSplitPane, splitPane, $cast($JSplitPane, $nc(ev)->getSource()));
	$load($BasicSplitPaneUI);
	$var($BasicSplitPaneUI, ui, $cast($BasicSplitPaneUI, $BasicLookAndFeel::getUIOfType($($nc(splitPane)->getUI()), $BasicSplitPaneUI::class$)));
	if (ui == nullptr) {
		return;
	}
	$var($String, key, getName());
	if (key == BasicSplitPaneUI$Actions::NEGATIVE_INCREMENT) {
		if ($nc(ui)->dividerKeyboardResize) {
			int32_t var$0 = ui->getDividerLocation(splitPane);
			$nc(splitPane)->setDividerLocation($Math::max(0, var$0 - ui->getKeyboardMoveIncrement()));
		}
	} else if (key == BasicSplitPaneUI$Actions::POSITIVE_INCREMENT) {
		if ($nc(ui)->dividerKeyboardResize) {
			int32_t var$1 = ui->getDividerLocation(splitPane);
			$nc(splitPane)->setDividerLocation(var$1 + ui->getKeyboardMoveIncrement());
		}
	} else if (key == BasicSplitPaneUI$Actions::SELECT_MIN) {
		if ($nc(ui)->dividerKeyboardResize) {
			$nc(splitPane)->setDividerLocation(0);
		}
	} else if (key == BasicSplitPaneUI$Actions::SELECT_MAX) {
		if ($nc(ui)->dividerKeyboardResize) {
			$var($Insets, insets, $nc(splitPane)->getInsets());
			int32_t bottomI = (insets != nullptr) ? $nc(insets)->bottom : 0;
			int32_t rightI = (insets != nullptr) ? insets->right : 0;
			if (ui->orientation == $JSplitPane::VERTICAL_SPLIT) {
				splitPane->setDividerLocation(splitPane->getHeight() - bottomI);
			} else {
				splitPane->setDividerLocation(splitPane->getWidth() - rightI);
			}
		}
	} else if (key == BasicSplitPaneUI$Actions::START_RESIZE) {
		if (!$nc(ui)->dividerKeyboardResize) {
			$nc(splitPane)->requestFocus();
		} else {
			$var($JSplitPane, parentSplitPane, $cast($JSplitPane, $SwingUtilities::getAncestorOfClass($JSplitPane::class$, splitPane)));
			if (parentSplitPane != nullptr) {
				parentSplitPane->requestFocus();
			}
		}
	} else if (key == BasicSplitPaneUI$Actions::TOGGLE_FOCUS) {
		toggleFocus(splitPane);
	} else if (key == BasicSplitPaneUI$Actions::FOCUS_OUT_FORWARD) {
		moveFocus(splitPane, 1);
	} else if (key == BasicSplitPaneUI$Actions::FOCUS_OUT_BACKWARD) {
		moveFocus(splitPane, -1);
	}
}

void BasicSplitPaneUI$Actions::moveFocus($JSplitPane* splitPane, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	$var($Container, rootAncestor, $nc(splitPane)->getFocusCycleRootAncestor());
	$var($FocusTraversalPolicy, policy, $nc(rootAncestor)->getFocusTraversalPolicy());
	$var($Component, focusOn, (direction > 0) ? $nc(policy)->getComponentAfter(rootAncestor, splitPane) : policy->getComponentBefore(rootAncestor, splitPane));
	$var($HashSet, focusFrom, $new($HashSet));
	if (splitPane->isAncestorOf(focusOn)) {
		bool var$0 = false;
		do {
			focusFrom->add(focusOn);
			$assign(rootAncestor, $nc(focusOn)->getFocusCycleRootAncestor());
			$assign(policy, $nc(rootAncestor)->getFocusTraversalPolicy());
			$assign(focusOn, (direction > 0) ? $nc(policy)->getComponentAfter(rootAncestor, focusOn) : policy->getComponentBefore(rootAncestor, focusOn));
			var$0 = splitPane->isAncestorOf(focusOn);
		} while (var$0 && !focusFrom->contains(focusOn));
	}
	if (focusOn != nullptr && !splitPane->isAncestorOf(focusOn)) {
		focusOn->requestFocus();
	}
}

void BasicSplitPaneUI$Actions::toggleFocus($JSplitPane* splitPane) {
	$useLocalCurrentObjectStackCache();
	$var($Component, left, $nc(splitPane)->getLeftComponent());
	$var($Component, right, splitPane->getRightComponent());
	$var($KeyboardFocusManager, manager, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
	$var($Component, focus, $nc(manager)->getFocusOwner());
	$var($Component, focusOn, getNextSide(splitPane, focus));
	if (focusOn != nullptr) {
		bool var$0 = focus != nullptr;
		if (var$0) {
			bool var$2 = $SwingUtilities::isDescendingFrom(focus, left);
			bool var$1 = (var$2 && $SwingUtilities::isDescendingFrom(focusOn, left));
			if (!var$1) {
				bool var$3 = $SwingUtilities::isDescendingFrom(focus, right);
				var$1 = (var$3 && $SwingUtilities::isDescendingFrom(focusOn, right));
			}
			var$0 = (var$1);
		}
		if (var$0) {
			return;
		}
		$SwingUtilities2::compositeRequestFocus(focusOn);
	}
}

$Component* BasicSplitPaneUI$Actions::getNextSide($JSplitPane* splitPane, $Component* focus) {
	$useLocalCurrentObjectStackCache();
	$var($Component, left, $nc(splitPane)->getLeftComponent());
	$var($Component, right, splitPane->getRightComponent());
	$var($Component, next, nullptr);
	if (focus != nullptr && $SwingUtilities::isDescendingFrom(focus, left) && right != nullptr) {
		$assign(next, getFirstAvailableComponent(right));
		if (next != nullptr) {
			return next;
		}
	}
	$var($JSplitPane, parentSplitPane, $cast($JSplitPane, $SwingUtilities::getAncestorOfClass($JSplitPane::class$, splitPane)));
	if (parentSplitPane != nullptr) {
		$assign(next, getNextSide(parentSplitPane, focus));
	} else {
		$assign(next, getFirstAvailableComponent(left));
		if (next == nullptr) {
			$assign(next, getFirstAvailableComponent(right));
		}
	}
	return next;
}

$Component* BasicSplitPaneUI$Actions::getFirstAvailableComponent($Component* c$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, c$renamed);
	if (c != nullptr && $instanceOf($JSplitPane, c)) {
		$var($JSplitPane, sp, $cast($JSplitPane, c));
		$var($Component, left, getFirstAvailableComponent($(sp->getLeftComponent())));
		if (left != nullptr) {
			$assign(c, left);
		} else {
			$assign(c, getFirstAvailableComponent($(sp->getRightComponent())));
		}
	}
	return c;
}

BasicSplitPaneUI$Actions::BasicSplitPaneUI$Actions() {
}

void clinit$BasicSplitPaneUI$Actions($Class* class$) {
	$assignStatic(BasicSplitPaneUI$Actions::NEGATIVE_INCREMENT, "negativeIncrement"_s);
	$assignStatic(BasicSplitPaneUI$Actions::POSITIVE_INCREMENT, "positiveIncrement"_s);
	$assignStatic(BasicSplitPaneUI$Actions::SELECT_MIN, "selectMin"_s);
	$assignStatic(BasicSplitPaneUI$Actions::SELECT_MAX, "selectMax"_s);
	$assignStatic(BasicSplitPaneUI$Actions::START_RESIZE, "startResize"_s);
	$assignStatic(BasicSplitPaneUI$Actions::TOGGLE_FOCUS, "toggleFocus"_s);
	$assignStatic(BasicSplitPaneUI$Actions::FOCUS_OUT_FORWARD, "focusOutForward"_s);
	$assignStatic(BasicSplitPaneUI$Actions::FOCUS_OUT_BACKWARD, "focusOutBackward"_s);
}

$Class* BasicSplitPaneUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneUI$Actions, name, initialize, &_BasicSplitPaneUI$Actions_ClassInfo_, clinit$BasicSplitPaneUI$Actions, allocate$BasicSplitPaneUI$Actions);
	return class$;
}

$Class* BasicSplitPaneUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax