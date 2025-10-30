#include <sun/print/ServiceDialog$3.h>

#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$3_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$3, this$0)},
	{}
};

$MethodInfo _ServiceDialog$3_MethodInfo_[] = {
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, 0, $method(static_cast<void(ServiceDialog$3::*)($ServiceDialog*)>(&ServiceDialog$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ServiceDialog$3_EnclosingMethodInfo_ = {
	"sun.print.ServiceDialog",
	"handleEscKey",
	"(Ljavax/swing/JButton;)V"
};

$InnerClassInfo _ServiceDialog$3_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceDialog$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$3",
	"javax.swing.AbstractAction",
	nullptr,
	_ServiceDialog$3_FieldInfo_,
	_ServiceDialog$3_MethodInfo_,
	nullptr,
	&_ServiceDialog$3_EnclosingMethodInfo_,
	_ServiceDialog$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$3($Class* clazz) {
	return $of($alloc(ServiceDialog$3));
}

void ServiceDialog$3::init$($ServiceDialog* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void ServiceDialog$3::actionPerformed($ActionEvent* e) {
	this->this$0->dispose(2);
}

ServiceDialog$3::ServiceDialog$3() {
}

$Class* ServiceDialog$3::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$3, name, initialize, &_ServiceDialog$3_ClassInfo_, allocate$ServiceDialog$3);
	return class$;
}

$Class* ServiceDialog$3::class$ = nullptr;

	} // print
} // sun