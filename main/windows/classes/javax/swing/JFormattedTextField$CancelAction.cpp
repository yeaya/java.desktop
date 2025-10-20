#include <javax/swing/JFormattedTextField$CancelAction.h>

#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/TextAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $TextAction = ::javax::swing::text::TextAction;

namespace javax {
	namespace swing {

$MethodInfo _JFormattedTextField$CancelAction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JFormattedTextField$CancelAction::*)()>(&JFormattedTextField$CancelAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JFormattedTextField$CancelAction_InnerClassesInfo_[] = {
	{"javax.swing.JFormattedTextField$CancelAction", "javax.swing.JFormattedTextField", "CancelAction", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JFormattedTextField$CancelAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JFormattedTextField$CancelAction",
	"javax.swing.text.TextAction",
	nullptr,
	nullptr,
	_JFormattedTextField$CancelAction_MethodInfo_,
	nullptr,
	nullptr,
	_JFormattedTextField$CancelAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JFormattedTextField"
};

$Object* allocate$JFormattedTextField$CancelAction($Class* clazz) {
	return $of($alloc(JFormattedTextField$CancelAction));
}

void JFormattedTextField$CancelAction::init$() {
	$TextAction::init$("reset-field-edit"_s);
}

void JFormattedTextField$CancelAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getFocusedComponent());
	if ($instanceOf($JFormattedTextField, target)) {
		$var($JFormattedTextField, ftf, $cast($JFormattedTextField, target));
		$nc(ftf)->setValue($(ftf->getValue()));
	}
}

bool JFormattedTextField$CancelAction::isEnabled() {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, target, getFocusedComponent());
	if ($instanceOf($JFormattedTextField, target)) {
		$var($JFormattedTextField, ftf, $cast($JFormattedTextField, target));
		if (!$nc(ftf)->isEdited()) {
			return false;
		}
		return true;
	}
	return $TextAction::isEnabled();
}

JFormattedTextField$CancelAction::JFormattedTextField$CancelAction() {
}

$Class* JFormattedTextField$CancelAction::load$($String* name, bool initialize) {
	$loadClass(JFormattedTextField$CancelAction, name, initialize, &_JFormattedTextField$CancelAction_ClassInfo_, allocate$JFormattedTextField$CancelAction);
	return class$;
}

$Class* JFormattedTextField$CancelAction::class$ = nullptr;

	} // swing
} // javax