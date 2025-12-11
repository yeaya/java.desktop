#include <javax/swing/JFormattedTextField$CommitAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/text/ParseException.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JTextField$NotifyAction.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParseException = ::java::text::ParseException;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JTextField$NotifyAction = ::javax::swing::JTextField$NotifyAction;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {

$MethodInfo _JFormattedTextField$CommitAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JFormattedTextField$CommitAction::*)()>(&JFormattedTextField$CommitAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JFormattedTextField$CommitAction_InnerClassesInfo_[] = {
	{"javax.swing.JFormattedTextField$CommitAction", "javax.swing.JFormattedTextField", "CommitAction", $STATIC},
	{"javax.swing.JTextField$NotifyAction", "javax.swing.JTextField", "NotifyAction", $STATIC},
	{}
};

$ClassInfo _JFormattedTextField$CommitAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JFormattedTextField$CommitAction",
	"javax.swing.JTextField$NotifyAction",
	nullptr,
	nullptr,
	_JFormattedTextField$CommitAction_MethodInfo_,
	nullptr,
	nullptr,
	_JFormattedTextField$CommitAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JFormattedTextField"
};

$Object* allocate$JFormattedTextField$CommitAction($Class* clazz) {
	return $of($alloc(JFormattedTextField$CommitAction));
}

void JFormattedTextField$CommitAction::init$() {
	$JTextField$NotifyAction::init$();
}

void JFormattedTextField$CommitAction::actionPerformed($ActionEvent* e) {
	$var($JTextComponent, target, getFocusedComponent());
	if ($instanceOf($JFormattedTextField, target)) {
		try {
			$nc(($cast($JFormattedTextField, target)))->commitEdit();
		} catch ($ParseException& pe) {
			$nc(($cast($JFormattedTextField, target)))->invalidEdit();
			return;
		}
	}
	$JTextField$NotifyAction::actionPerformed(e);
}

bool JFormattedTextField$CommitAction::isEnabled() {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getFocusedComponent());
	if ($instanceOf($JFormattedTextField, target)) {
		$var($JFormattedTextField, ftf, $cast($JFormattedTextField, target));
		if (!$nc(ftf)->isEdited()) {
			return false;
		}
		return true;
	}
	return $JTextField$NotifyAction::isEnabled();
}

JFormattedTextField$CommitAction::JFormattedTextField$CommitAction() {
}

$Class* JFormattedTextField$CommitAction::load$($String* name, bool initialize) {
	$loadClass(JFormattedTextField$CommitAction, name, initialize, &_JFormattedTextField$CommitAction_ClassInfo_, allocate$JFormattedTextField$CommitAction);
	return class$;
}

$Class* JFormattedTextField$CommitAction::class$ = nullptr;

	} // swing
} // javax