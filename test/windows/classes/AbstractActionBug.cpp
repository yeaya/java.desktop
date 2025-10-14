#include <AbstractActionBug.h>

#include <java/awt/event/ActionEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <jcpp.h>

#undef NAME

using $ActionEvent = ::java::awt::event::ActionEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;

$MethodInfo _AbstractActionBug_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractActionBug::*)($String*)>(&AbstractActionBug::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($StringArray*)>(&AbstractActionBug::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _AbstractActionBug_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"AbstractActionBug",
	"javax.swing.AbstractAction",
	nullptr,
	nullptr,
	_AbstractActionBug_MethodInfo_
};

$Object* allocate$AbstractActionBug($Class* clazz) {
	return $of($alloc(AbstractActionBug));
}

void AbstractActionBug::main($StringArray* args) {
	$init(AbstractActionBug);
	$var(AbstractActionBug, a1, $new(AbstractActionBug, "a1"_s));
	$assign(a1, $cast(AbstractActionBug, a1->clone()));
	$init($System);
	$nc($System::out)->println("a1 cloned ok"_s);
	$var(AbstractActionBug, a2, $new(AbstractActionBug, "a2"_s));
	$init($Action);
	a2->putValue($Action::NAME, "null"_s);
	$assign(a2, $cast(AbstractActionBug, a2->clone()));
	$nc($System::out)->println("a2 cloned ok"_s);
	$var(AbstractActionBug, a3, $new(AbstractActionBug, nullptr));
	$assign(a3, $cast(AbstractActionBug, a3->clone()));
	$nc($System::out)->println("a3 cloned ok"_s);
}

void AbstractActionBug::init$($String* name) {
	$AbstractAction::init$();
	$init($Action);
	putValue($Action::NAME, name);
}

void AbstractActionBug::actionPerformed($ActionEvent* e) {
}

AbstractActionBug::AbstractActionBug() {
}

$Class* AbstractActionBug::load$($String* name, bool initialize) {
	$loadClass(AbstractActionBug, name, initialize, &_AbstractActionBug_ClassInfo_, allocate$AbstractActionBug);
	return class$;
}

$Class* AbstractActionBug::class$ = nullptr;