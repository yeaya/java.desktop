#include <bug6889007$MyTableHeaderUI.h>

#include <bug6889007.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <jcpp.h>

#undef E_RESIZE_CURSOR

using $bug6889007 = ::bug6889007;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;
using $JTableHeader = ::javax::swing::table::JTableHeader;

$FieldInfo _bug6889007$MyTableHeaderUI_FieldInfo_[] = {
	{"testValue", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug6889007$MyTableHeaderUI, testValue)},
	{}
};

$MethodInfo _bug6889007$MyTableHeaderUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6889007$MyTableHeaderUI::*)()>(&bug6889007$MyTableHeaderUI::init$))},
	{"getTestValue", "()I", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<int32_t(*)()>(&bug6889007$MyTableHeaderUI::getTestValue))},
	{"increaseTestValue", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)(int32_t)>(&bug6889007$MyTableHeaderUI::increaseTestValue))},
	{"rolloverColumnUpdated", "(II)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _bug6889007$MyTableHeaderUI_InnerClassesInfo_[] = {
	{"bug6889007$MyTableHeaderUI", "bug6889007", "MyTableHeaderUI", $STATIC},
	{}
};

$ClassInfo _bug6889007$MyTableHeaderUI_ClassInfo_ = {
	$ACC_SUPER,
	"bug6889007$MyTableHeaderUI",
	"javax.swing.plaf.basic.BasicTableHeaderUI",
	nullptr,
	_bug6889007$MyTableHeaderUI_FieldInfo_,
	_bug6889007$MyTableHeaderUI_MethodInfo_,
	nullptr,
	nullptr,
	_bug6889007$MyTableHeaderUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6889007"
};

$Object* allocate$bug6889007$MyTableHeaderUI($Class* clazz) {
	return $of($alloc(bug6889007$MyTableHeaderUI));
}

int32_t bug6889007$MyTableHeaderUI::testValue = 0;

void bug6889007$MyTableHeaderUI::init$() {
	$BasicTableHeaderUI::init$();
}

void bug6889007$MyTableHeaderUI::rolloverColumnUpdated(int32_t oldColumn, int32_t newColumn) {
	increaseTestValue(newColumn);
	$var($Cursor, cursor, $Cursor::getPredefinedCursor($Cursor::E_RESIZE_CURSOR));
	if (oldColumn != -1 && newColumn != -1 && $nc(this->header)->getCursor() != cursor) {
		$throwNew($RuntimeException, "Wrong type of cursor!"_s);
	}
}

void bug6889007$MyTableHeaderUI::increaseTestValue(int32_t increment) {
	$load(bug6889007$MyTableHeaderUI);
	$synchronized(class$) {
		$init(bug6889007$MyTableHeaderUI);
		bug6889007$MyTableHeaderUI::testValue += increment;
	}
}

int32_t bug6889007$MyTableHeaderUI::getTestValue() {
	$load(bug6889007$MyTableHeaderUI);
	$synchronized(class$) {
		$init(bug6889007$MyTableHeaderUI);
		return bug6889007$MyTableHeaderUI::testValue;
	}
}

bug6889007$MyTableHeaderUI::bug6889007$MyTableHeaderUI() {
}

$Class* bug6889007$MyTableHeaderUI::load$($String* name, bool initialize) {
	$loadClass(bug6889007$MyTableHeaderUI, name, initialize, &_bug6889007$MyTableHeaderUI_ClassInfo_, allocate$bug6889007$MyTableHeaderUI);
	return class$;
}

$Class* bug6889007$MyTableHeaderUI::class$ = nullptr;