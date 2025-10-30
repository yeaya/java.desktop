#include <javax/swing/AbstractButton$ButtonActionPropertyChangeListener.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionPropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionPropertyChangeListener = ::javax::swing::ActionPropertyChangeListener;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$MethodInfo _AbstractButton$ButtonActionPropertyChangeListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/AbstractButton;Ljavax/swing/Action;)V", nullptr, 0, $method(static_cast<void(AbstractButton$ButtonActionPropertyChangeListener::*)($AbstractButton*,$Action*)>(&AbstractButton$ButtonActionPropertyChangeListener::init$))},
	{"actionPropertyChanged", "(Ljavax/swing/AbstractButton;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"actionPropertyChanged", "(Ljavax/swing/JComponent;Ljavax/swing/Action;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _AbstractButton$ButtonActionPropertyChangeListener_InnerClassesInfo_[] = {
	{"javax.swing.AbstractButton$ButtonActionPropertyChangeListener", "javax.swing.AbstractButton", "ButtonActionPropertyChangeListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AbstractButton$ButtonActionPropertyChangeListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.AbstractButton$ButtonActionPropertyChangeListener",
	"javax.swing.ActionPropertyChangeListener",
	nullptr,
	nullptr,
	_AbstractButton$ButtonActionPropertyChangeListener_MethodInfo_,
	"Ljavax/swing/ActionPropertyChangeListener<Ljavax/swing/AbstractButton;>;",
	nullptr,
	_AbstractButton$ButtonActionPropertyChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.AbstractButton"
};

$Object* allocate$AbstractButton$ButtonActionPropertyChangeListener($Class* clazz) {
	return $of($alloc(AbstractButton$ButtonActionPropertyChangeListener));
}

void AbstractButton$ButtonActionPropertyChangeListener::init$($AbstractButton* b, $Action* a) {
	$ActionPropertyChangeListener::init$(b, a);
}

void AbstractButton$ButtonActionPropertyChangeListener::actionPropertyChanged($AbstractButton* button, $Action* action, $PropertyChangeEvent* e) {
	if ($AbstractAction::shouldReconfigure(e)) {
		$nc(button)->configurePropertiesFromAction(action);
	} else {
		$nc(button)->actionPropertyChanged(action, $($nc(e)->getPropertyName()));
	}
}

void AbstractButton$ButtonActionPropertyChangeListener::actionPropertyChanged($JComponent* button, $Action* action, $PropertyChangeEvent* e) {
	this->actionPropertyChanged($cast($AbstractButton, button), action, e);
}

AbstractButton$ButtonActionPropertyChangeListener::AbstractButton$ButtonActionPropertyChangeListener() {
}

$Class* AbstractButton$ButtonActionPropertyChangeListener::load$($String* name, bool initialize) {
	$loadClass(AbstractButton$ButtonActionPropertyChangeListener, name, initialize, &_AbstractButton$ButtonActionPropertyChangeListener_ClassInfo_, allocate$AbstractButton$ButtonActionPropertyChangeListener);
	return class$;
}

$Class* AbstractButton$ButtonActionPropertyChangeListener::class$ = nullptr;

	} // swing
} // javax