#include <KeyBoardNavigation$2.h>

#include <KeyBoardNavigation.h>
#include <java/awt/Color.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <jcpp.h>

using $KeyBoardNavigation = ::KeyBoardNavigation;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $JLabel = ::javax::swing::JLabel;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;

$MethodInfo _KeyBoardNavigation$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeyBoardNavigation$2::*)()>(&KeyBoardNavigation$2::init$))},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeyBoardNavigation$2_EnclosingMethodInfo_ = {
	"KeyBoardNavigation",
	"initTest",
	"(Ljava/awt/Container;)V"
};

$InnerClassInfo _KeyBoardNavigation$2_InnerClassesInfo_[] = {
	{"KeyBoardNavigation$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyBoardNavigation$2_ClassInfo_ = {
	$ACC_SUPER,
	"KeyBoardNavigation$2",
	"javax.swing.table.DefaultTableCellRenderer",
	nullptr,
	nullptr,
	_KeyBoardNavigation$2_MethodInfo_,
	nullptr,
	&_KeyBoardNavigation$2_EnclosingMethodInfo_,
	_KeyBoardNavigation$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"KeyBoardNavigation"
};

$Object* allocate$KeyBoardNavigation$2($Class* clazz) {
	return $of($alloc(KeyBoardNavigation$2));
}

void KeyBoardNavigation$2::init$() {
	$DefaultTableCellRenderer::init$();
}

void KeyBoardNavigation$2::setValue(Object$* value) {
	int32_t cellValue = ($instanceOf($Number, value)) ? $nc(($cast($Number, value)))->intValue() : 0;
	$init($Color);
	setForeground((cellValue > 30) ? $Color::black : $Color::red);
	setText((value == nullptr) ? ""_s : $($nc($of(value))->toString()));
}

KeyBoardNavigation$2::KeyBoardNavigation$2() {
}

$Class* KeyBoardNavigation$2::load$($String* name, bool initialize) {
	$loadClass(KeyBoardNavigation$2, name, initialize, &_KeyBoardNavigation$2_ClassInfo_, allocate$KeyBoardNavigation$2);
	return class$;
}

$Class* KeyBoardNavigation$2::class$ = nullptr;