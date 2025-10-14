#include <javax/swing/JTextField$TextFieldActionPropertyChangeListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionPropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionPropertyChangeListener = ::javax::swing::ActionPropertyChangeListener;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {

$MethodInfo _JTextField$TextFieldActionPropertyChangeListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTextField;Ljavax/swing/Action;)V", nullptr, 0, $method(static_cast<void(JTextField$TextFieldActionPropertyChangeListener::*)($JTextField*,$Action*)>(&JTextField$TextFieldActionPropertyChangeListener::init$))},
	{"actionPropertyChanged", "(Ljavax/swing/JTextField;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"actionPropertyChanged", "(Ljavax/swing/JComponent;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JTextField$TextFieldActionPropertyChangeListener_InnerClassesInfo_[] = {
	{"javax.swing.JTextField$TextFieldActionPropertyChangeListener", "javax.swing.JTextField", "TextFieldActionPropertyChangeListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JTextField$TextFieldActionPropertyChangeListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTextField$TextFieldActionPropertyChangeListener",
	"javax.swing.ActionPropertyChangeListener",
	nullptr,
	nullptr,
	_JTextField$TextFieldActionPropertyChangeListener_MethodInfo_,
	"Ljavax/swing/ActionPropertyChangeListener<Ljavax/swing/JTextField;>;",
	nullptr,
	_JTextField$TextFieldActionPropertyChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTextField"
};

$Object* allocate$JTextField$TextFieldActionPropertyChangeListener($Class* clazz) {
	return $of($alloc(JTextField$TextFieldActionPropertyChangeListener));
}

void JTextField$TextFieldActionPropertyChangeListener::init$($JTextField* tf, $Action* a) {
	$ActionPropertyChangeListener::init$(tf, a);
}

void JTextField$TextFieldActionPropertyChangeListener::actionPropertyChanged($JTextField* textField, $Action* action, $PropertyChangeEvent* e) {
	if ($AbstractAction::shouldReconfigure(e)) {
		$nc(textField)->configurePropertiesFromAction(action);
	} else {
		$nc(textField)->actionPropertyChanged(action, $($nc(e)->getPropertyName()));
	}
}

void JTextField$TextFieldActionPropertyChangeListener::actionPropertyChanged($JComponent* textField, $Action* action, $PropertyChangeEvent* e) {
	this->actionPropertyChanged($cast($JTextField, textField), action, e);
}

JTextField$TextFieldActionPropertyChangeListener::JTextField$TextFieldActionPropertyChangeListener() {
}

$Class* JTextField$TextFieldActionPropertyChangeListener::load$($String* name, bool initialize) {
	$loadClass(JTextField$TextFieldActionPropertyChangeListener, name, initialize, &_JTextField$TextFieldActionPropertyChangeListener_ClassInfo_, allocate$JTextField$TextFieldActionPropertyChangeListener);
	return class$;
}

$Class* JTextField$TextFieldActionPropertyChangeListener::class$ = nullptr;

	} // swing
} // javax