#include <DrawGridLinesTest$1.h>

#include <DrawGridLinesTest.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <jcpp.h>

using $DrawGridLinesTest = ::DrawGridLinesTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;

$MethodInfo _DrawGridLinesTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DrawGridLinesTest$1::*)()>(&DrawGridLinesTest$1::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DrawGridLinesTest$1_EnclosingMethodInfo_ = {
	"DrawGridLinesTest",
	"checkTableGridLines",
	"()V"
};

$InnerClassInfo _DrawGridLinesTest$1_InnerClassesInfo_[] = {
	{"DrawGridLinesTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DrawGridLinesTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"DrawGridLinesTest$1",
	"javax.swing.table.AbstractTableModel",
	nullptr,
	nullptr,
	_DrawGridLinesTest$1_MethodInfo_,
	nullptr,
	&_DrawGridLinesTest$1_EnclosingMethodInfo_,
	_DrawGridLinesTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DrawGridLinesTest"
};

$Object* allocate$DrawGridLinesTest$1($Class* clazz) {
	return $of($alloc(DrawGridLinesTest$1));
}

void DrawGridLinesTest$1::init$() {
	$AbstractTableModel::init$();
}

int32_t DrawGridLinesTest$1::getColumnCount() {
	return 10;
}

int32_t DrawGridLinesTest$1::getRowCount() {
	return 10;
}

$Object* DrawGridLinesTest$1::getValueAt(int32_t row, int32_t col) {
	return $of(" "_s);
}

DrawGridLinesTest$1::DrawGridLinesTest$1() {
}

$Class* DrawGridLinesTest$1::load$($String* name, bool initialize) {
	$loadClass(DrawGridLinesTest$1, name, initialize, &_DrawGridLinesTest$1_ClassInfo_, allocate$DrawGridLinesTest$1);
	return class$;
}

$Class* DrawGridLinesTest$1::class$ = nullptr;