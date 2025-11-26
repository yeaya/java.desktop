#include <javax/swing/plaf/basic/BasicMenuItemUI$Actions.h>

#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef CLICK

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicMenuItemUI$Actions_FieldInfo_[] = {
	{"CLICK", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicMenuItemUI$Actions, CLICK)},
	{}
};

$MethodInfo _BasicMenuItemUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicMenuItemUI$Actions::*)($String*)>(&BasicMenuItemUI$Actions::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicMenuItemUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicMenuItemUI$Actions", "javax.swing.plaf.basic.BasicMenuItemUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicMenuItemUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicMenuItemUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicMenuItemUI$Actions_FieldInfo_,
	_BasicMenuItemUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicMenuItemUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicMenuItemUI"
};

$Object* allocate$BasicMenuItemUI$Actions($Class* clazz) {
	return $of($alloc(BasicMenuItemUI$Actions));
}

$String* BasicMenuItemUI$Actions::CLICK = nullptr;

void BasicMenuItemUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

void BasicMenuItemUI$Actions::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuItem, mi, $cast($JMenuItem, $nc(e)->getSource()));
	$nc($($MenuSelectionManager::defaultManager()))->clearSelectedPath();
	$nc(mi)->doClick();
}

BasicMenuItemUI$Actions::BasicMenuItemUI$Actions() {
}

void clinit$BasicMenuItemUI$Actions($Class* class$) {
	$assignStatic(BasicMenuItemUI$Actions::CLICK, "doClick"_s);
}

$Class* BasicMenuItemUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicMenuItemUI$Actions, name, initialize, &_BasicMenuItemUI$Actions_ClassInfo_, clinit$BasicMenuItemUI$Actions, allocate$BasicMenuItemUI$Actions);
	return class$;
}

$Class* BasicMenuItemUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax