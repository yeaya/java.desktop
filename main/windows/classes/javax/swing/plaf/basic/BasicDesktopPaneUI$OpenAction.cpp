#include <javax/swing/plaf/basic/BasicDesktopPaneUI$OpenAction.h>

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
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI$Actions.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

#undef RESTORE
#undef SHARED_ACTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;
using $BasicDesktopPaneUI$Actions = ::javax::swing::plaf::basic::BasicDesktopPaneUI$Actions;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicDesktopPaneUI$OpenAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopPaneUI$OpenAction, this$0)},
	{}
};

$MethodInfo _BasicDesktopPaneUI$OpenAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopPaneUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicDesktopPaneUI$OpenAction::*)($BasicDesktopPaneUI*)>(&BasicDesktopPaneUI$OpenAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicDesktopPaneUI$OpenAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$OpenAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "OpenAction", $PROTECTED},
	{}
};

$ClassInfo _BasicDesktopPaneUI$OpenAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicDesktopPaneUI$OpenAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicDesktopPaneUI$OpenAction_FieldInfo_,
	_BasicDesktopPaneUI$OpenAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDesktopPaneUI$OpenAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDesktopPaneUI"
};

$Object* allocate$BasicDesktopPaneUI$OpenAction($Class* clazz) {
	return $of($alloc(BasicDesktopPaneUI$OpenAction));
}

void BasicDesktopPaneUI$OpenAction::init$($BasicDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicDesktopPaneUI$OpenAction::actionPerformed($ActionEvent* evt) {
	$var($JDesktopPane, dp, $cast($JDesktopPane, $nc(evt)->getSource()));
	$init($BasicDesktopPaneUI);
	$init($BasicDesktopPaneUI$Actions);
	$nc($BasicDesktopPaneUI::SHARED_ACTION)->setState(dp, $BasicDesktopPaneUI$Actions::RESTORE);
}

bool BasicDesktopPaneUI$OpenAction::isEnabled() {
	return true;
}

BasicDesktopPaneUI$OpenAction::BasicDesktopPaneUI$OpenAction() {
}

$Class* BasicDesktopPaneUI$OpenAction::load$($String* name, bool initialize) {
	$loadClass(BasicDesktopPaneUI$OpenAction, name, initialize, &_BasicDesktopPaneUI$OpenAction_ClassInfo_, allocate$BasicDesktopPaneUI$OpenAction);
	return class$;
}

$Class* BasicDesktopPaneUI$OpenAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax