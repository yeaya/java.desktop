#include <javax/swing/plaf/basic/BasicRootPaneUI$Actions.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef POST_POPUP
#undef PRESS
#undef RELEASE

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JRootPane = ::javax::swing::JRootPane;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicRootPaneUI = ::javax::swing::plaf::basic::BasicRootPaneUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicRootPaneUI$Actions_FieldInfo_[] = {
	{"PRESS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicRootPaneUI$Actions, PRESS)},
	{"RELEASE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicRootPaneUI$Actions, RELEASE)},
	{"POST_POPUP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicRootPaneUI$Actions, POST_POPUP)},
	{}
};

$MethodInfo _BasicRootPaneUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicRootPaneUI$Actions::*)($String*)>(&BasicRootPaneUI$Actions::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicRootPaneUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicRootPaneUI$Actions", "javax.swing.plaf.basic.BasicRootPaneUI", "Actions", $STATIC},
	{}
};

$ClassInfo _BasicRootPaneUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicRootPaneUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicRootPaneUI$Actions_FieldInfo_,
	_BasicRootPaneUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicRootPaneUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicRootPaneUI"
};

$Object* allocate$BasicRootPaneUI$Actions($Class* clazz) {
	return $of($alloc(BasicRootPaneUI$Actions));
}

$String* BasicRootPaneUI$Actions::PRESS = nullptr;
$String* BasicRootPaneUI$Actions::RELEASE = nullptr;
$String* BasicRootPaneUI$Actions::POST_POPUP = nullptr;

void BasicRootPaneUI$Actions::init$($String* name) {
	$UIAction::init$(name);
}

void BasicRootPaneUI$Actions::actionPerformed($ActionEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($JRootPane, root, $cast($JRootPane, $nc(evt)->getSource()));
	$var($JButton, owner, $nc(root)->getDefaultButton());
	$var($String, key, getName());
	if (key == BasicRootPaneUI$Actions::POST_POPUP) {
		$var($Component, c, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
		if ($instanceOf($JComponent, c)) {
			$var($JComponent, src, $cast($JComponent, c));
			$var($JPopupMenu, jpm, $nc(src)->getComponentPopupMenu());
			if (jpm != nullptr) {
				$var($Point, pt, src->getPopupLocation(nullptr));
				if (pt == nullptr) {
					$var($Rectangle, vis, src->getVisibleRect());
					$assign(pt, $new($Point, $nc(vis)->x + vis->width / 2, vis->y + vis->height / 2));
				}
				jpm->show(c, $nc(pt)->x, pt->y);
			}
		}
	} else if (owner != nullptr && $SwingUtilities::getRootPane(owner) == root) {
		if (key == BasicRootPaneUI$Actions::PRESS) {
			owner->doClick(20);
		}
	}
}

bool BasicRootPaneUI$Actions::accept(Object$* sender) {
	$useLocalCurrentObjectStackCache();
	$var($String, key, getName());
	if (key == BasicRootPaneUI$Actions::POST_POPUP) {
		$var($MenuElementArray, elems, $nc($($MenuSelectionManager::defaultManager()))->getSelectedPath());
		if (elems != nullptr && elems->length != 0) {
			return false;
		}
		$var($Component, c, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
		if ($instanceOf($JComponent, c)) {
			$var($JComponent, src, $cast($JComponent, c));
			return $nc(src)->getComponentPopupMenu() != nullptr;
		}
		return false;
	}
	if ($instanceOf($JRootPane, sender)) {
		$var($JButton, owner, $nc(($cast($JRootPane, sender)))->getDefaultButton());
		bool var$0 = owner != nullptr && $nc($(owner->getModel()))->isEnabled();
		return (var$0 && owner->isShowing());
	}
	return true;
}

BasicRootPaneUI$Actions::BasicRootPaneUI$Actions() {
}

void clinit$BasicRootPaneUI$Actions($Class* class$) {
	$assignStatic(BasicRootPaneUI$Actions::PRESS, "press"_s);
	$assignStatic(BasicRootPaneUI$Actions::RELEASE, "release"_s);
	$assignStatic(BasicRootPaneUI$Actions::POST_POPUP, "postPopup"_s);
}

$Class* BasicRootPaneUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicRootPaneUI$Actions, name, initialize, &_BasicRootPaneUI$Actions_ClassInfo_, clinit$BasicRootPaneUI$Actions, allocate$BasicRootPaneUI$Actions);
	return class$;
}

$Class* BasicRootPaneUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax