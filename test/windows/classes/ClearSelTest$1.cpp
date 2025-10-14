#include <ClearSelTest$1.h>

#include <ClearSelTest.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $ClearSelTest = ::ClearSelTest;
using $Point = ::java::awt::Point;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;

$FieldInfo _ClearSelTest$1_FieldInfo_[] = {
	{"val$table", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(ClearSelTest$1, val$table)},
	{}
};

$MethodInfo _ClearSelTest$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTable;)V", nullptr, 0, $method(static_cast<void(ClearSelTest$1::*)($JTable*)>(&ClearSelTest$1::init$))},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ClearSelTest$1_EnclosingMethodInfo_ = {
	"ClearSelTest",
	"clearSelTest",
	"()V"
};

$InnerClassInfo _ClearSelTest$1_InnerClassesInfo_[] = {
	{"ClearSelTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClearSelTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ClearSelTest$1",
	"java.awt.event.MouseAdapter",
	nullptr,
	_ClearSelTest$1_FieldInfo_,
	_ClearSelTest$1_MethodInfo_,
	nullptr,
	&_ClearSelTest$1_EnclosingMethodInfo_,
	_ClearSelTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ClearSelTest"
};

$Object* allocate$ClearSelTest$1($Class* clazz) {
	return $of($alloc(ClearSelTest$1));
}

void ClearSelTest$1::init$($JTable* val$table) {
	$set(this, val$table, val$table);
	$MouseAdapter::init$();
}

void ClearSelTest$1::mouseMoved($MouseEvent* pE) {
	int32_t row = $nc(this->val$table)->rowAtPoint($($nc(pE)->getPoint()));
	if (row > -1) {
		$nc(this->val$table)->setRowSelectionInterval(row, row);
	} else {
		$nc(this->val$table)->clearSelection();
	}
}

void ClearSelTest$1::mouseEntered($MouseEvent* pE) {
	int32_t row = $nc(this->val$table)->rowAtPoint($($nc(pE)->getPoint()));
	if (row > -1) {
		$nc(this->val$table)->setRowSelectionInterval(row, row);
	} else {
		$nc(this->val$table)->clearSelection();
	}
}

void ClearSelTest$1::mouseExited($MouseEvent* pE) {
	$nc(this->val$table)->clearSelection();
}

ClearSelTest$1::ClearSelTest$1() {
}

$Class* ClearSelTest$1::load$($String* name, bool initialize) {
	$loadClass(ClearSelTest$1, name, initialize, &_ClearSelTest$1_ClassInfo_, allocate$ClearSelTest$1);
	return class$;
}

$Class* ClearSelTest$1::class$ = nullptr;