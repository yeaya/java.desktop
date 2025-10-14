#include <javax/swing/plaf/basic/BasicDesktopPaneUI$CloseAction.h>

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

#undef CLOSE
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

$FieldInfo _BasicDesktopPaneUI$CloseAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopPaneUI$CloseAction, this$0)},
	{}
};

$MethodInfo _BasicDesktopPaneUI$CloseAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopPaneUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicDesktopPaneUI$CloseAction::*)($BasicDesktopPaneUI*)>(&BasicDesktopPaneUI$CloseAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicDesktopPaneUI$CloseAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$CloseAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "CloseAction", $PROTECTED},
	{}
};

$ClassInfo _BasicDesktopPaneUI$CloseAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicDesktopPaneUI$CloseAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicDesktopPaneUI$CloseAction_FieldInfo_,
	_BasicDesktopPaneUI$CloseAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDesktopPaneUI$CloseAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDesktopPaneUI"
};

$Object* allocate$BasicDesktopPaneUI$CloseAction($Class* clazz) {
	return $of($alloc(BasicDesktopPaneUI$CloseAction));
}

void BasicDesktopPaneUI$CloseAction::init$($BasicDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicDesktopPaneUI$CloseAction::actionPerformed($ActionEvent* evt) {
	$var($JDesktopPane, dp, $cast($JDesktopPane, $nc(evt)->getSource()));
	$init($BasicDesktopPaneUI);
	$init($BasicDesktopPaneUI$Actions);
	$nc($BasicDesktopPaneUI::SHARED_ACTION)->setState(dp, $BasicDesktopPaneUI$Actions::CLOSE);
}

bool BasicDesktopPaneUI$CloseAction::isEnabled() {
	$var($JInternalFrame, iFrame, $nc(this->this$0->desktop)->getSelectedFrame());
	if (iFrame != nullptr) {
		return iFrame->isClosable();
	}
	return false;
}

BasicDesktopPaneUI$CloseAction::BasicDesktopPaneUI$CloseAction() {
}

$Class* BasicDesktopPaneUI$CloseAction::load$($String* name, bool initialize) {
	$loadClass(BasicDesktopPaneUI$CloseAction, name, initialize, &_BasicDesktopPaneUI$CloseAction_ClassInfo_, allocate$BasicDesktopPaneUI$CloseAction);
	return class$;
}

$Class* BasicDesktopPaneUI$CloseAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax