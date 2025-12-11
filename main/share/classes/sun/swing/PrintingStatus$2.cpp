#include <sun/swing/PrintingStatus$2.h>

#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/Action.h>
#include <sun/swing/PrintingStatus.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $PrintingStatus = ::sun::swing::PrintingStatus;

namespace sun {
	namespace swing {

$FieldInfo _PrintingStatus$2_FieldInfo_[] = {
	{"this$0", "Lsun/swing/PrintingStatus;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$2, this$0)},
	{}
};

$MethodInfo _PrintingStatus$2_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/PrintingStatus;)V", nullptr, 0, $method(static_cast<void(PrintingStatus$2::*)($PrintingStatus*)>(&PrintingStatus$2::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PrintingStatus$2_EnclosingMethodInfo_ = {
	"sun.swing.PrintingStatus",
	nullptr,
	nullptr
};

$InnerClassInfo _PrintingStatus$2_InnerClassesInfo_[] = {
	{"sun.swing.PrintingStatus$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintingStatus$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.PrintingStatus$2",
	"java.awt.event.WindowAdapter",
	nullptr,
	_PrintingStatus$2_FieldInfo_,
	_PrintingStatus$2_MethodInfo_,
	nullptr,
	&_PrintingStatus$2_EnclosingMethodInfo_,
	_PrintingStatus$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.PrintingStatus"
};

$Object* allocate$PrintingStatus$2($Class* clazz) {
	return $of($alloc(PrintingStatus$2));
}

void PrintingStatus$2::init$($PrintingStatus* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void PrintingStatus$2::windowClosing($WindowEvent* we) {
	$nc(this->this$0->abortAction)->actionPerformed(nullptr);
}

PrintingStatus$2::PrintingStatus$2() {
}

$Class* PrintingStatus$2::load$($String* name, bool initialize) {
	$loadClass(PrintingStatus$2, name, initialize, &_PrintingStatus$2_ClassInfo_, allocate$PrintingStatus$2);
	return class$;
}

$Class* PrintingStatus$2::class$ = nullptr;

	} // swing
} // sun