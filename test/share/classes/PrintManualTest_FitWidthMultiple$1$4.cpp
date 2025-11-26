#include <PrintManualTest_FitWidthMultiple$1$4.h>

#include <PrintManualTest_FitWidthMultiple$1.h>
#include <java/awt/event/ActionEvent.h>
#include <java/text/MessageFormat.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/swing/JTable$PrintMode.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

#undef FIT_WIDTH

using $PrintManualTest_FitWidthMultiple$1 = ::PrintManualTest_FitWidthMultiple$1;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $JTable = ::javax::swing::JTable;
using $JTable$PrintMode = ::javax::swing::JTable$PrintMode;

$FieldInfo _PrintManualTest_FitWidthMultiple$1$4_FieldInfo_[] = {
	{"this$1", "LPrintManualTest_FitWidthMultiple$1;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1$4, this$1)},
	{"val$prattr", "Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1$4, val$prattr)},
	{"val$table", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1$4, val$table)},
	{}
};

$MethodInfo _PrintManualTest_FitWidthMultiple$1$4_MethodInfo_[] = {
	{"<init>", "(LPrintManualTest_FitWidthMultiple$1;Ljavax/swing/JTable;Ljavax/print/attribute/PrintRequestAttributeSet;)V", "()V", 0, $method(static_cast<void(PrintManualTest_FitWidthMultiple$1$4::*)($PrintManualTest_FitWidthMultiple$1*,$JTable*,$PrintRequestAttributeSet*)>(&PrintManualTest_FitWidthMultiple$1$4::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PrintManualTest_FitWidthMultiple$1$4_EnclosingMethodInfo_ = {
	"PrintManualTest_FitWidthMultiple$1",
	"run",
	"()V"
};

$InnerClassInfo _PrintManualTest_FitWidthMultiple$1$4_InnerClassesInfo_[] = {
	{"PrintManualTest_FitWidthMultiple$1", nullptr, nullptr, 0},
	{"PrintManualTest_FitWidthMultiple$1$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PrintManualTest_FitWidthMultiple$1$4_ClassInfo_ = {
	$ACC_SUPER,
	"PrintManualTest_FitWidthMultiple$1$4",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_PrintManualTest_FitWidthMultiple$1$4_FieldInfo_,
	_PrintManualTest_FitWidthMultiple$1$4_MethodInfo_,
	nullptr,
	&_PrintManualTest_FitWidthMultiple$1$4_EnclosingMethodInfo_,
	_PrintManualTest_FitWidthMultiple$1$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PrintManualTest_FitWidthMultiple"
};

$Object* allocate$PrintManualTest_FitWidthMultiple$1$4($Class* clazz) {
	return $of($alloc(PrintManualTest_FitWidthMultiple$1$4));
}

void PrintManualTest_FitWidthMultiple$1$4::init$($PrintManualTest_FitWidthMultiple$1* this$1, $JTable* val$table, $PrintRequestAttributeSet* val$prattr) {
	$set(this, this$1, this$1);
	$set(this, val$table, val$table);
	$set(this, val$prattr, val$prattr);
}

void PrintManualTest_FitWidthMultiple$1$4::actionPerformed($ActionEvent* ae) {
	try {
		$init($JTable$PrintMode);
		$nc(this->val$table)->print($JTable$PrintMode::FIT_WIDTH, this->this$1->val$header, this->this$1->val$footer, true, this->val$prattr, true);
	} catch ($Exception& e) {
	}
}

PrintManualTest_FitWidthMultiple$1$4::PrintManualTest_FitWidthMultiple$1$4() {
}

$Class* PrintManualTest_FitWidthMultiple$1$4::load$($String* name, bool initialize) {
	$loadClass(PrintManualTest_FitWidthMultiple$1$4, name, initialize, &_PrintManualTest_FitWidthMultiple$1$4_ClassInfo_, allocate$PrintManualTest_FitWidthMultiple$1$4);
	return class$;
}

$Class* PrintManualTest_FitWidthMultiple$1$4::class$ = nullptr;