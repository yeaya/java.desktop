#include <sun/swing/PrintingStatus$1.h>

#include <java/awt/Dialog.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/print/PrinterJob.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIManager.h>
#include <sun/swing/PrintingStatus.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JButton = ::javax::swing::JButton;
using $JDialog = ::javax::swing::JDialog;
using $JLabel = ::javax::swing::JLabel;
using $UIManager = ::javax::swing::UIManager;
using $PrintingStatus = ::sun::swing::PrintingStatus;

namespace sun {
	namespace swing {

$FieldInfo _PrintingStatus$1_FieldInfo_[] = {
	{"this$0", "Lsun/swing/PrintingStatus;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$1, this$0)},
	{}
};

$MethodInfo _PrintingStatus$1_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/PrintingStatus;)V", nullptr, 0, $method(static_cast<void(PrintingStatus$1::*)($PrintingStatus*)>(&PrintingStatus$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PrintingStatus$1_EnclosingMethodInfo_ = {
	"sun.swing.PrintingStatus",
	nullptr,
	nullptr
};

$InnerClassInfo _PrintingStatus$1_InnerClassesInfo_[] = {
	{"sun.swing.PrintingStatus$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintingStatus$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.PrintingStatus$1",
	"javax.swing.AbstractAction",
	nullptr,
	_PrintingStatus$1_FieldInfo_,
	_PrintingStatus$1_MethodInfo_,
	nullptr,
	&_PrintingStatus$1_EnclosingMethodInfo_,
	_PrintingStatus$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.PrintingStatus"
};

$Object* allocate$PrintingStatus$1($Class* clazz) {
	return $of($alloc(PrintingStatus$1));
}

void PrintingStatus$1::init$($PrintingStatus* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void PrintingStatus$1::actionPerformed($ActionEvent* ae) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->this$0->isAborted$)->get()) {
		$nc(this->this$0->isAborted$)->set(true);
		$nc(this->this$0->abortButton)->setEnabled(false);
		$nc(this->this$0->abortDialog)->setTitle($($UIManager::getString("PrintingDialog.titleAbortingText"_s)));
		$nc(this->this$0->statusLabel)->setText($($UIManager::getString("PrintingDialog.contentAbortingText"_s)));
		$nc(this->this$0->job)->cancel();
	}
}

PrintingStatus$1::PrintingStatus$1() {
}

$Class* PrintingStatus$1::load$($String* name, bool initialize) {
	$loadClass(PrintingStatus$1, name, initialize, &_PrintingStatus$1_ClassInfo_, allocate$PrintingStatus$1);
	return class$;
}

$Class* PrintingStatus$1::class$ = nullptr;

	} // swing
} // sun