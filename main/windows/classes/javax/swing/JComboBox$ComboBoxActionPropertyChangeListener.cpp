#include <javax/swing/JComboBox$ComboBoxActionPropertyChangeListener.h>

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
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionPropertyChangeListener = ::javax::swing::ActionPropertyChangeListener;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$MethodInfo _JComboBox$ComboBoxActionPropertyChangeListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComboBox;Ljavax/swing/Action;)V", "(Ljavax/swing/JComboBox<*>;Ljavax/swing/Action;)V", 0, $method(static_cast<void(JComboBox$ComboBoxActionPropertyChangeListener::*)($JComboBox*,$Action*)>(&JComboBox$ComboBoxActionPropertyChangeListener::init$))},
	{"actionPropertyChanged", "(Ljavax/swing/JComboBox;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", "(Ljavax/swing/JComboBox<*>;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", $PROTECTED},
	{"actionPropertyChanged", "(Ljavax/swing/JComponent;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JComboBox$ComboBoxActionPropertyChangeListener_InnerClassesInfo_[] = {
	{"javax.swing.JComboBox$ComboBoxActionPropertyChangeListener", "javax.swing.JComboBox", "ComboBoxActionPropertyChangeListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JComboBox$ComboBoxActionPropertyChangeListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JComboBox$ComboBoxActionPropertyChangeListener",
	"javax.swing.ActionPropertyChangeListener",
	nullptr,
	nullptr,
	_JComboBox$ComboBoxActionPropertyChangeListener_MethodInfo_,
	"Ljavax/swing/ActionPropertyChangeListener<Ljavax/swing/JComboBox<*>;>;",
	nullptr,
	_JComboBox$ComboBoxActionPropertyChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComboBox"
};

$Object* allocate$JComboBox$ComboBoxActionPropertyChangeListener($Class* clazz) {
	return $of($alloc(JComboBox$ComboBoxActionPropertyChangeListener));
}

void JComboBox$ComboBoxActionPropertyChangeListener::init$($JComboBox* b, $Action* a) {
	$ActionPropertyChangeListener::init$(b, a);
}

void JComboBox$ComboBoxActionPropertyChangeListener::actionPropertyChanged($JComboBox* cb, $Action* action, $PropertyChangeEvent* e) {
	if ($AbstractAction::shouldReconfigure(e)) {
		$nc(cb)->configurePropertiesFromAction(action);
	} else {
		$nc(cb)->actionPropertyChanged(action, $($nc(e)->getPropertyName()));
	}
}

void JComboBox$ComboBoxActionPropertyChangeListener::actionPropertyChanged($JComponent* cb, $Action* action, $PropertyChangeEvent* e) {
	this->actionPropertyChanged($cast($JComboBox, cb), action, e);
}

JComboBox$ComboBoxActionPropertyChangeListener::JComboBox$ComboBoxActionPropertyChangeListener() {
}

$Class* JComboBox$ComboBoxActionPropertyChangeListener::load$($String* name, bool initialize) {
	$loadClass(JComboBox$ComboBoxActionPropertyChangeListener, name, initialize, &_JComboBox$ComboBoxActionPropertyChangeListener_ClassInfo_, allocate$JComboBox$ComboBoxActionPropertyChangeListener);
	return class$;
}

$Class* JComboBox$ComboBoxActionPropertyChangeListener::class$ = nullptr;

	} // swing
} // javax