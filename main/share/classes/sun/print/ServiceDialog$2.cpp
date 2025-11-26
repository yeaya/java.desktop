#include <sun/print/ServiceDialog$2.h>

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

$FieldInfo _ServiceDialog$2_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$2, this$0)},
	{}
};

$MethodInfo _ServiceDialog$2_MethodInfo_[] = {
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, 0, $method(static_cast<void(ServiceDialog$2::*)($ServiceDialog*)>(&ServiceDialog$2::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ServiceDialog$2_EnclosingMethodInfo_ = {
	"sun.print.ServiceDialog",
	"initPageDialog",
	"(IILjavax/print/PrintService;Ljavax/print/DocFlavor;Ljavax/print/attribute/PrintRequestAttributeSet;)V"
};

$InnerClassInfo _ServiceDialog$2_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceDialog$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_ServiceDialog$2_FieldInfo_,
	_ServiceDialog$2_MethodInfo_,
	nullptr,
	&_ServiceDialog$2_EnclosingMethodInfo_,
	_ServiceDialog$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$2($Class* clazz) {
	return $of($alloc(ServiceDialog$2));
}

void ServiceDialog$2::init$($ServiceDialog* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void ServiceDialog$2::windowClosing($WindowEvent* event) {
	this->this$0->dispose(2);
}

ServiceDialog$2::ServiceDialog$2() {
}

$Class* ServiceDialog$2::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$2, name, initialize, &_ServiceDialog$2_ClassInfo_, allocate$ServiceDialog$2);
	return class$;
}

$Class* ServiceDialog$2::class$ = nullptr;

	} // print
} // sun