#include <Test6559154.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;

$FieldInfo _Test6559154_FieldInfo_[] = {
	{"dialog", "Ljavax/swing/JDialog;", nullptr, $PRIVATE, $field(Test6559154, dialog)},
	{}
};

$MethodInfo _Test6559154_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6559154::*)()>(&Test6559154::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6559154::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"setEnabledRecursive", "(Ljava/awt/Container;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Container*,bool)>(&Test6559154::setEnabledRecursive))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test6559154_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6559154",
	"java.lang.Object",
	"java.awt.event.ActionListener,java.lang.Runnable",
	_Test6559154_FieldInfo_,
	_Test6559154_MethodInfo_
};

$Object* allocate$Test6559154($Class* clazz) {
	return $of($alloc(Test6559154));
}

int32_t Test6559154::hashCode() {
	 return this->$ActionListener::hashCode();
}

bool Test6559154::equals(Object$* arg0) {
	 return this->$ActionListener::equals(arg0);
}

$Object* Test6559154::clone() {
	 return this->$ActionListener::clone();
}

$String* Test6559154::toString() {
	 return this->$ActionListener::toString();
}

void Test6559154::finalize() {
	this->$ActionListener::finalize();
}

void Test6559154::init$() {
}

void Test6559154::actionPerformed($ActionEvent* event) {
	if (this->dialog != nullptr) {
		$nc(this->dialog)->dispose();
	}
}

void Test6559154::run() {
	$var($Timer, timer, $new($Timer, 1000, this));
	timer->setRepeats(false);
	timer->start();
	$var($JColorChooser, chooser, $new($JColorChooser));
	setEnabledRecursive(chooser, false);
	$set(this, dialog, $new($JDialog));
	$nc(this->dialog)->add(static_cast<$Component*>(chooser));
	$nc(this->dialog)->setVisible(true);
}

void Test6559154::setEnabledRecursive($Container* container, bool enabled) {
	$init(Test6559154);
	{
		$var($ComponentArray, arr$, $nc(container)->getComponents());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, component, arr$->get(i$));
			{
				$nc(component)->setEnabled(enabled);
				if ($instanceOf($Container, component)) {
					setEnabledRecursive($cast($Container, component), enabled);
				}
			}
		}
	}
}

void Test6559154::main($StringArray* args) {
	$init(Test6559154);
	$SwingUtilities::invokeAndWait($$new(Test6559154));
}

Test6559154::Test6559154() {
}

$Class* Test6559154::load$($String* name, bool initialize) {
	$loadClass(Test6559154, name, initialize, &_Test6559154_ClassInfo_, allocate$Test6559154);
	return class$;
}

$Class* Test6559154::class$ = nullptr;