#include <javax/swing/JTextField$NotifyAction.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {

$MethodInfo _JTextField$NotifyAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JTextField$NotifyAction::*)()>(&JTextField$NotifyAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTextField$NotifyAction_InnerClassesInfo_[] = {
	{"javax.swing.JTextField$NotifyAction", "javax.swing.JTextField", "NotifyAction", $STATIC},
	{}
};

$ClassInfo _JTextField$NotifyAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTextField$NotifyAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_JTextField$NotifyAction_MethodInfo_,
	nullptr,
	nullptr,
	_JTextField$NotifyAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTextField"
};

$Object* allocate$JTextField$NotifyAction($Class* clazz) {
	return $of($alloc(JTextField$NotifyAction));
}

void JTextField$NotifyAction::init$() {
	$TextAction::init$("notify-field-accept"_s);
}

void JTextField$NotifyAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getFocusedComponent());
	if ($instanceOf($JTextField, target)) {
		$var($JTextField, field, $cast($JTextField, target));
		$nc(field)->postActionEvent();
	}
}

bool JTextField$NotifyAction::isEnabled() {
	$var($JTextComponent, target, getFocusedComponent());
	if ($instanceOf($JTextField, target)) {
		return $nc(($cast($JTextField, target)))->hasActionListener();
	}
	return false;
}

JTextField$NotifyAction::JTextField$NotifyAction() {
}

$Class* JTextField$NotifyAction::load$($String* name, bool initialize) {
	$loadClass(JTextField$NotifyAction, name, initialize, &_JTextField$NotifyAction_ClassInfo_, allocate$JTextField$NotifyAction);
	return class$;
}

$Class* JTextField$NotifyAction::class$ = nullptr;

	} // swing
} // javax