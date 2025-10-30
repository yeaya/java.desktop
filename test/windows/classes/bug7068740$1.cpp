#include <bug7068740$1.h>

#include <bug7068740.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <jcpp.h>

using $bug7068740 = ::bug7068740;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

$FieldInfo _bug7068740$1_FieldInfo_[] = {
	{"this$0", "Lbug7068740;", nullptr, $FINAL | $SYNTHETIC, $field(bug7068740$1, this$0)},
	{}
};

$MethodInfo _bug7068740$1_MethodInfo_[] = {
	{"<init>", "(Lbug7068740;)V", nullptr, 0, $method(static_cast<void(bug7068740$1::*)($bug7068740*)>(&bug7068740$1::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7068740$1_EnclosingMethodInfo_ = {
	"bug7068740",
	"<init>",
	"()V"
};

$InnerClassInfo _bug7068740$1_InnerClassesInfo_[] = {
	{"bug7068740$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7068740$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7068740$1",
	"javax.swing.table.DefaultTableModel",
	nullptr,
	_bug7068740$1_FieldInfo_,
	_bug7068740$1_MethodInfo_,
	nullptr,
	&_bug7068740$1_EnclosingMethodInfo_,
	_bug7068740$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7068740"
};

$Object* allocate$bug7068740$1($Class* clazz) {
	return $of($alloc(bug7068740$1));
}

void bug7068740$1::init$($bug7068740* this$0) {
	$set(this, this$0, this$0);
	$DefaultTableModel::init$();
}

int32_t bug7068740$1::getRowCount() {
	return 20;
}

int32_t bug7068740$1::getColumnCount() {
	return 2;
}

$Object* bug7068740$1::getValueAt(int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	return $of($str({"("_s, $$str(row), ","_s, $$str(column), ")"_s}));
}

bug7068740$1::bug7068740$1() {
}

$Class* bug7068740$1::load$($String* name, bool initialize) {
	$loadClass(bug7068740$1, name, initialize, &_bug7068740$1_ClassInfo_, allocate$bug7068740$1);
	return class$;
}

$Class* bug7068740$1::class$ = nullptr;