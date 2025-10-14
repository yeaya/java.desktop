#include <sun/swing/PrintingStatus$NotificationPrintable.h>

#include <java/awt/Graphics.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/Format.h>
#include <java/text/MessageFormat.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/swing/PrintingStatus$NotificationPrintable$1.h>
#include <sun/swing/PrintingStatus.h>
#include <jcpp.h>

#undef NO_SUCH_PAGE

using $Graphics = ::java::awt::Graphics;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $PrintingStatus = ::sun::swing::PrintingStatus;
using $PrintingStatus$NotificationPrintable$1 = ::sun::swing::PrintingStatus$NotificationPrintable$1;

namespace sun {
	namespace swing {

$FieldInfo _PrintingStatus$NotificationPrintable_FieldInfo_[] = {
	{"this$0", "Lsun/swing/PrintingStatus;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingStatus$NotificationPrintable, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PrintingStatus$NotificationPrintable, $assertionsDisabled)},
	{"printDelegatee", "Ljava/awt/print/Printable;", nullptr, $PRIVATE | $FINAL, $field(PrintingStatus$NotificationPrintable, printDelegatee)},
	{}
};

$MethodInfo _PrintingStatus$NotificationPrintable_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/PrintingStatus;Ljava/awt/print/Printable;)V", nullptr, $PUBLIC, $method(static_cast<void(PrintingStatus$NotificationPrintable::*)($PrintingStatus*,$Printable*)>(&PrintingStatus$NotificationPrintable::init$))},
	{"print", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{"updateStatusOnEDT", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PrintingStatus$NotificationPrintable::*)(int32_t)>(&PrintingStatus$NotificationPrintable::updateStatusOnEDT))},
	{}
};

$InnerClassInfo _PrintingStatus$NotificationPrintable_InnerClassesInfo_[] = {
	{"sun.swing.PrintingStatus$NotificationPrintable", "sun.swing.PrintingStatus", "NotificationPrintable", $PRIVATE},
	{"sun.swing.PrintingStatus$NotificationPrintable$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintingStatus$NotificationPrintable_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.PrintingStatus$NotificationPrintable",
	"java.lang.Object",
	"java.awt.print.Printable",
	_PrintingStatus$NotificationPrintable_FieldInfo_,
	_PrintingStatus$NotificationPrintable_MethodInfo_,
	nullptr,
	nullptr,
	_PrintingStatus$NotificationPrintable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.PrintingStatus"
};

$Object* allocate$PrintingStatus$NotificationPrintable($Class* clazz) {
	return $of($alloc(PrintingStatus$NotificationPrintable));
}

bool PrintingStatus$NotificationPrintable::$assertionsDisabled = false;

void PrintingStatus$NotificationPrintable::init$($PrintingStatus* this$0, $Printable* delegatee) {
	$set(this, this$0, this$0);
	if (delegatee == nullptr) {
		$throwNew($NullPointerException, "Printable is null"_s);
	}
	$set(this, printDelegatee, delegatee);
}

int32_t PrintingStatus$NotificationPrintable::print($Graphics* graphics, $PageFormat* pageFormat, int32_t pageIndex) {
	int32_t retVal = $nc(this->printDelegatee)->print(graphics, pageFormat, pageIndex);
	if (retVal != $Printable::NO_SUCH_PAGE && !this->this$0->isAborted()) {
		if ($SwingUtilities::isEventDispatchThread()) {
			updateStatusOnEDT(pageIndex);
		} else {
			$SwingUtilities::invokeLater($$new($PrintingStatus$NotificationPrintable$1, this, pageIndex));
		}
	}
	return retVal;
}

void PrintingStatus$NotificationPrintable::updateStatusOnEDT(int32_t pageIndex) {
	if (!PrintingStatus$NotificationPrintable::$assertionsDisabled && !$SwingUtilities::isEventDispatchThread()) {
		$throwNew($AssertionError);
	}
	$var($ObjectArray, pageNumber, $new($ObjectArray, {$($of($Integer::valueOf(pageIndex + 1)))}));
	$nc(this->this$0->statusLabel)->setText($($nc(this->this$0->statusFormat)->format(pageNumber)));
}

void clinit$PrintingStatus$NotificationPrintable($Class* class$) {
	$load($PrintingStatus);
	PrintingStatus$NotificationPrintable::$assertionsDisabled = !$PrintingStatus::class$->desiredAssertionStatus();
}

PrintingStatus$NotificationPrintable::PrintingStatus$NotificationPrintable() {
}

$Class* PrintingStatus$NotificationPrintable::load$($String* name, bool initialize) {
	$loadClass(PrintingStatus$NotificationPrintable, name, initialize, &_PrintingStatus$NotificationPrintable_ClassInfo_, clinit$PrintingStatus$NotificationPrintable, allocate$PrintingStatus$NotificationPrintable);
	return class$;
}

$Class* PrintingStatus$NotificationPrintable::class$ = nullptr;

	} // swing
} // sun