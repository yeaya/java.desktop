#include <javax/swing/plaf/basic/BasicDesktopPaneUI$NavigateAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicDesktopPaneUI$NavigateAction_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopPaneUI$NavigateAction, this$0)},
	{}
};

$MethodInfo _BasicDesktopPaneUI$NavigateAction_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopPaneUI;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicDesktopPaneUI$NavigateAction::*)($BasicDesktopPaneUI*)>(&BasicDesktopPaneUI$NavigateAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicDesktopPaneUI$NavigateAction_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDesktopPaneUI$NavigateAction", "javax.swing.plaf.basic.BasicDesktopPaneUI", "NavigateAction", $PROTECTED},
	{}
};

$ClassInfo _BasicDesktopPaneUI$NavigateAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicDesktopPaneUI$NavigateAction",
	"javax.swing.AbstractAction",
	nullptr,
	_BasicDesktopPaneUI$NavigateAction_FieldInfo_,
	_BasicDesktopPaneUI$NavigateAction_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDesktopPaneUI$NavigateAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDesktopPaneUI"
};

$Object* allocate$BasicDesktopPaneUI$NavigateAction($Class* clazz) {
	return $of($alloc(BasicDesktopPaneUI$NavigateAction));
}

void BasicDesktopPaneUI$NavigateAction::init$($BasicDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void BasicDesktopPaneUI$NavigateAction::actionPerformed($ActionEvent* evt) {
	$var($JDesktopPane, dp, $cast($JDesktopPane, $nc(evt)->getSource()));
	$nc(dp)->selectFrame(true);
}

bool BasicDesktopPaneUI$NavigateAction::isEnabled() {
	return true;
}

BasicDesktopPaneUI$NavigateAction::BasicDesktopPaneUI$NavigateAction() {
}

$Class* BasicDesktopPaneUI$NavigateAction::load$($String* name, bool initialize) {
	$loadClass(BasicDesktopPaneUI$NavigateAction, name, initialize, &_BasicDesktopPaneUI$NavigateAction_ClassInfo_, allocate$BasicDesktopPaneUI$NavigateAction);
	return class$;
}

$Class* BasicDesktopPaneUI$NavigateAction::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax