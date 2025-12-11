#include <TAB$2.h>

#include <TAB.h>
#include <java/awt/Color.h>
#include <java/lang/Number.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;

$MethodInfo _TAB$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TAB$2::*)()>(&TAB$2::init$))},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TAB$2_EnclosingMethodInfo_ = {
	"TAB",
	"initTest",
	"(Ljava/awt/Container;)V"
};

$InnerClassInfo _TAB$2_InnerClassesInfo_[] = {
	{"TAB$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TAB$2_ClassInfo_ = {
	$ACC_SUPER,
	"TAB$2",
	"javax.swing.table.DefaultTableCellRenderer",
	nullptr,
	nullptr,
	_TAB$2_MethodInfo_,
	nullptr,
	&_TAB$2_EnclosingMethodInfo_,
	_TAB$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TAB"
};

$Object* allocate$TAB$2($Class* clazz) {
	return $of($alloc(TAB$2));
}

void TAB$2::init$() {
	$DefaultTableCellRenderer::init$();
}

void TAB$2::setValue(Object$* value) {
	int32_t cellValue = ($instanceOf($Number, value)) ? $nc(($cast($Number, value)))->intValue() : 0;
	$init($Color);
	setForeground((cellValue > 30) ? $Color::black : $Color::red);
	setText((value == nullptr) ? ""_s : $($nc($of(value))->toString()));
}

TAB$2::TAB$2() {
}

$Class* TAB$2::load$($String* name, bool initialize) {
	$loadClass(TAB$2, name, initialize, &_TAB$2_ClassInfo_, allocate$TAB$2);
	return class$;
}

$Class* TAB$2::class$ = nullptr;