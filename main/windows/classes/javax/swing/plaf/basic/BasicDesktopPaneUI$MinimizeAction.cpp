#include <javax/swing/plaf/basic/BasicDesktopPaneUI$MinimizeAction.h>

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
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI$Actions.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

#undef MINIMIZE
#undef SHARED_ACTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;
using $BasicDesktopPaneUI$Actions = ::javax::swing::plaf::basic::BasicDesktopPaneUI$Actions;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicDesktopPaneUI$MinimizeAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopPaneUI$MinimizeAction, this$0)},
	{}
};

$MethodInfo _BasicDesktopPaneUI$MinimizeAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopPaneUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicDesktopPaneUI$MinimizeAction::*)($BasicDesktopPaneUI*)>(&BasicDesktopPaneUI$MinimizeAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicDesktopPaneUI$MinimizeAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$MinimizeAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "MinimizeAction", $PROTECTED},
	{}
};

$ClassInfo _BasicDesktopPaneUI$MinimizeAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicDesktopPaneUI$MinimizeAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicDesktopPaneUI$MinimizeAction_FieldInfo_,
	_BasicDesktopPaneUI$MinimizeAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDesktopPaneUI$MinimizeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDesktopPaneUI"
};

$Object* allocate$BasicDesktopPaneUI$MinimizeAction($Class* clazz) {
	return $of($alloc(BasicDesktopPaneUI$MinimizeAction));
}

void BasicDesktopPaneUI$MinimizeAction::init$($BasicDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicDesktopPaneUI$MinimizeAction::actionPerformed($ActionEvent* evt) {
	$var($JDesktopPane, dp, $cast($JDesktopPane, $nc(evt)->getSource()));
	$init($BasicDesktopPaneUI);
	$init($BasicDesktopPaneUI$Actions);
	$nc($BasicDesktopPaneUI::SHARED_ACTION)->setState(dp, $BasicDesktopPaneUI$Actions::MINIMIZE);
}

bool BasicDesktopPaneUI$MinimizeAction::isEnabled() {
	$var($JInternalFrame, iFrame, $nc(this->this$0->desktop)->getSelectedFrame());
	if (iFrame != nullptr) {
		return iFrame->isIconifiable();
	}
	return false;
}

BasicDesktopPaneUI$MinimizeAction::BasicDesktopPaneUI$MinimizeAction() {
}

$Class* BasicDesktopPaneUI$MinimizeAction::load$($String* name, bool initialize) {
	$loadClass(BasicDesktopPaneUI$MinimizeAction, name, initialize, &_BasicDesktopPaneUI$MinimizeAction_ClassInfo_, allocate$BasicDesktopPaneUI$MinimizeAction);
	return class$;
}

$Class* BasicDesktopPaneUI$MinimizeAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax