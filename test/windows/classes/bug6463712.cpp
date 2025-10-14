#include <bug6463712.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerDateModel.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;
using $JSpinner = ::javax::swing::JSpinner;
using $SpinnerDateModel = ::javax::swing::SpinnerDateModel;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

$MethodInfo _bug6463712_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6463712::*)()>(&bug6463712::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6463712::main))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _bug6463712_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6463712",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	nullptr,
	_bug6463712_MethodInfo_
};

$Object* allocate$bug6463712($Class* clazz) {
	return $of($alloc(bug6463712));
}

void bug6463712::init$() {
	$var($SpinnerNumberModel, m1, $new($SpinnerNumberModel));
	$var($JSpinner, s, $new($JSpinner, m1));
	s->addChangeListener(this);
	$var($SpinnerDateModel, m2, $new($SpinnerDateModel));
	s->setModel(m2);
	m1->setValue($$new($Integer, 1));
}

void bug6463712::stateChanged($ChangeEvent* e) {
	$throwNew($RuntimeException, "Should not receive this event."_s);
}

void bug6463712::main($StringArray* args) {
	$init(bug6463712);
	$var(bug6463712, bug, $new(bug6463712));
}

bug6463712::bug6463712() {
}

$Class* bug6463712::load$($String* name, bool initialize) {
	$loadClass(bug6463712, name, initialize, &_bug6463712_ClassInfo_, allocate$bug6463712);
	return class$;
}

$Class* bug6463712::class$ = nullptr;