#include <sun/print/ServiceDialog$1.h>

#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$1_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$1, this$0)},
	{}
};

$MethodInfo _ServiceDialog$1_MethodInfo_[] = {
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, 0, $method(static_cast<void(ServiceDialog$1::*)($ServiceDialog*)>(&ServiceDialog$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ServiceDialog$1_EnclosingMethodInfo_ = {
	"sun.print.ServiceDialog",
	"initPrintDialog",
	"(II[Ljavax/print/PrintService;ILjavax/print/DocFlavor;Ljavax/print/attribute/PrintRequestAttributeSet;)V"
};

$InnerClassInfo _ServiceDialog$1_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceDialog$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	_ServiceDialog$1_FieldInfo_,
	_ServiceDialog$1_MethodInfo_,
	nullptr,
	&_ServiceDialog$1_EnclosingMethodInfo_,
	_ServiceDialog$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$1($Class* clazz) {
	return $of($alloc(ServiceDialog$1));
}

void ServiceDialog$1::init$($ServiceDialog* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void ServiceDialog$1::windowClosing($WindowEvent* event) {
	this->this$0->dispose(2);
}

ServiceDialog$1::ServiceDialog$1() {
}

$Class* ServiceDialog$1::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$1, name, initialize, &_ServiceDialog$1_ClassInfo_, allocate$ServiceDialog$1);
	return class$;
}

$Class* ServiceDialog$1::class$ = nullptr;

	} // print
} // sun