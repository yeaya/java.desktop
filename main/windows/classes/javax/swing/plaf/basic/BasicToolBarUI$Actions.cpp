#include <javax/swing/plaf/basic/BasicToolBarUI$Actions.h>

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
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef NAVIGATE_DOWN
#undef NAVIGATE_LEFT
#undef NAVIGATE_RIGHT
#undef NAVIGATE_UP

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JToolBar = ::javax::swing::JToolBar;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ToolBarUI = ::javax::swing::plaf::ToolBarUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolBarUI$Actions_FieldInfo_[] = {
	{"NAVIGATE_RIGHT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicToolBarUI$Actions, NAVIGATE_RIGHT)},
	{"NAVIGATE_LEFT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicToolBarUI$Actions, NAVIGATE_LEFT)},
	{"NAVIGATE_UP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicToolBarUI$Actions, NAVIGATE_UP)},
	{"NAVIGATE_DOWN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicToolBarUI$Actions, NAVIGATE_DOWN)},
	{}
};

$MethodInfo _BasicToolBarUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicToolBarUI$Actions::*)($String*)>(&BasicToolBarUI$Actions::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicToolBarUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$Actions", "javax.swing.plaf.basic.BasicToolBarUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicToolBarUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicToolBarUI$Actions_FieldInfo_,
	_BasicToolBarUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicToolBarUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI"
};

$Object* allocate$BasicToolBarUI$Actions($Class* clazz) {
	return $of($alloc(BasicToolBarUI$Actions));
}

$String* BasicToolBarUI$Actions::NAVIGATE_RIGHT = nullptr;
$String* BasicToolBarUI$Actions::NAVIGATE_LEFT = nullptr;
$String* BasicToolBarUI$Actions::NAVIGATE_UP = nullptr;
$String* BasicToolBarUI$Actions::NAVIGATE_DOWN = nullptr;

void BasicToolBarUI$Actions::init$($String* name) {
	$UIAction::init$(name);
}

void BasicToolBarUI$Actions::actionPerformed($ActionEvent* evt) {
	$var($String, key, getName());
	$var($JToolBar, toolBar, $cast($JToolBar, $nc(evt)->getSource()));
	$load($BasicToolBarUI);
	$var($BasicToolBarUI, ui, $cast($BasicToolBarUI, $BasicLookAndFeel::getUIOfType($($nc(toolBar)->getUI()), $BasicToolBarUI::class$)));
	if (BasicToolBarUI$Actions::NAVIGATE_RIGHT == key) {
		$nc(ui)->navigateFocusedComp(3);
	} else if (BasicToolBarUI$Actions::NAVIGATE_LEFT == key) {
		$nc(ui)->navigateFocusedComp(7);
	} else if (BasicToolBarUI$Actions::NAVIGATE_UP == key) {
		$nc(ui)->navigateFocusedComp(1);
	} else if (BasicToolBarUI$Actions::NAVIGATE_DOWN == key) {
		$nc(ui)->navigateFocusedComp(5);
	}
}

BasicToolBarUI$Actions::BasicToolBarUI$Actions() {
}

void clinit$BasicToolBarUI$Actions($Class* class$) {
	$assignStatic(BasicToolBarUI$Actions::NAVIGATE_RIGHT, "navigateRight"_s);
	$assignStatic(BasicToolBarUI$Actions::NAVIGATE_LEFT, "navigateLeft"_s);
	$assignStatic(BasicToolBarUI$Actions::NAVIGATE_UP, "navigateUp"_s);
	$assignStatic(BasicToolBarUI$Actions::NAVIGATE_DOWN, "navigateDown"_s);
}

$Class* BasicToolBarUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI$Actions, name, initialize, &_BasicToolBarUI$Actions_ClassInfo_, clinit$BasicToolBarUI$Actions, allocate$BasicToolBarUI$Actions);
	return class$;
}

$Class* BasicToolBarUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax