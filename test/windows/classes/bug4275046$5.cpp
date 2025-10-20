#include <bug4275046$5.h>

#include <bug4275046.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

using $bug4275046 = ::bug4275046;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTable = ::javax::swing::JTable;
using $TableModel = ::javax::swing::table::TableModel;

$FieldInfo _bug4275046$5_FieldInfo_[] = {
	{"this$0", "Lbug4275046;", nullptr, $FINAL | $SYNTHETIC, $field(bug4275046$5, this$0)},
	{}
};

$MethodInfo _bug4275046$5_MethodInfo_[] = {
	{"<init>", "(Lbug4275046;)V", nullptr, 0, $method(static_cast<void(bug4275046$5::*)($bug4275046*)>(&bug4275046$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4275046$5_EnclosingMethodInfo_ = {
	"bug4275046",
	"checkResult",
	"()V"
};

$InnerClassInfo _bug4275046$5_InnerClassesInfo_[] = {
	{"bug4275046$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4275046$5_ClassInfo_ = {
	$ACC_SUPER,
	"bug4275046$5",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4275046$5_FieldInfo_,
	_bug4275046$5_MethodInfo_,
	nullptr,
	&_bug4275046$5_EnclosingMethodInfo_,
	_bug4275046$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4275046"
};

$Object* allocate$bug4275046$5($Class* clazz) {
	return $of($alloc(bug4275046$5));
}

void bug4275046$5::init$($bug4275046* this$0) {
	$set(this, this$0, this$0);
}

void bug4275046$5::run() {
	$useLocalCurrentObjectStackCache();
	$set(this->this$0, editedValue, $nc($($nc(this->this$0->table)->getModel()))->getValueAt(0, 1));
	$init($System);
	$nc($System::out)->println($$str({"The edited value is = "_s, this->this$0->editedValue}));
	this->this$0->testResult = $nc($of(this->this$0->editedValue))->equals("rededited"_s);
	if (this->this$0->testResult) {
		$nc($System::out)->println("Test passed"_s);
	} else {
		$nc($System::out)->println("Test failed"_s);
	}
}

bug4275046$5::bug4275046$5() {
}

$Class* bug4275046$5::load$($String* name, bool initialize) {
	$loadClass(bug4275046$5, name, initialize, &_bug4275046$5_ClassInfo_, allocate$bug4275046$5);
	return class$;
}

$Class* bug4275046$5::class$ = nullptr;