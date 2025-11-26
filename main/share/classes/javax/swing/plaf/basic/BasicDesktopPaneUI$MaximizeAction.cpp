#include <javax/swing/plaf/basic/BasicDesktopPaneUI$MaximizeAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI$Actions.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

#undef MAXIMIZE
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

$FieldInfo _BasicDesktopPaneUI$MaximizeAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopPaneUI$MaximizeAction, this$0)},
	{}
};

$MethodInfo _BasicDesktopPaneUI$MaximizeAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopPaneUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicDesktopPaneUI$MaximizeAction::*)($BasicDesktopPaneUI*)>(&BasicDesktopPaneUI$MaximizeAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicDesktopPaneUI$MaximizeAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$MaximizeAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "MaximizeAction", $PROTECTED},
	{}
};

$ClassInfo _BasicDesktopPaneUI$MaximizeAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicDesktopPaneUI$MaximizeAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicDesktopPaneUI$MaximizeAction_FieldInfo_,
	_BasicDesktopPaneUI$MaximizeAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDesktopPaneUI$MaximizeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDesktopPaneUI"
};

$Object* allocate$BasicDesktopPaneUI$MaximizeAction($Class* clazz) {
	return $of($alloc(BasicDesktopPaneUI$MaximizeAction));
}

void BasicDesktopPaneUI$MaximizeAction::init$($BasicDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicDesktopPaneUI$MaximizeAction::actionPerformed($ActionEvent* evt) {
	$var($JDesktopPane, dp, $cast($JDesktopPane, $nc(evt)->getSource()));
	$init($BasicDesktopPaneUI);
	$init($BasicDesktopPaneUI$Actions);
	$nc($BasicDesktopPaneUI::SHARED_ACTION)->setState(dp, $BasicDesktopPaneUI$Actions::MAXIMIZE);
}

bool BasicDesktopPaneUI$MaximizeAction::isEnabled() {
	$var($JInternalFrame, iFrame, $nc(this->this$0->desktop)->getSelectedFrame());
	if (iFrame != nullptr) {
		return iFrame->isMaximizable();
	}
	return false;
}

BasicDesktopPaneUI$MaximizeAction::BasicDesktopPaneUI$MaximizeAction() {
}

$Class* BasicDesktopPaneUI$MaximizeAction::load$($String* name, bool initialize) {
	$loadClass(BasicDesktopPaneUI$MaximizeAction, name, initialize, &_BasicDesktopPaneUI$MaximizeAction_ClassInfo_, allocate$BasicDesktopPaneUI$MaximizeAction);
	return class$;
}

$Class* BasicDesktopPaneUI$MaximizeAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax