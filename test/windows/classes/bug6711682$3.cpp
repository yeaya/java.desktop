#include <bug6711682$3.h>

#include <bug6711682.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JToggleButton.h>
#include <jcpp.h>

#undef TRUE

using $bug6711682 = ::bug6711682;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $JToggleButton = ::javax::swing::JToggleButton;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;

$MethodInfo _bug6711682$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6711682$3::*)()>(&bug6711682$3::init$))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6711682$3_EnclosingMethodInfo_ = {
	"bug6711682",
	"createAndShowGUI",
	"()V"
};

$InnerClassInfo _bug6711682$3_InnerClassesInfo_[] = {
	{"bug6711682$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6711682$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6711682$3",
	"java.lang.Object",
	"javax.swing.table.TableCellRenderer",
	nullptr,
	_bug6711682$3_MethodInfo_,
	nullptr,
	&_bug6711682$3_EnclosingMethodInfo_,
	_bug6711682$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6711682"
};

$Object* allocate$bug6711682$3($Class* clazz) {
	return $of($alloc(bug6711682$3));
}

void bug6711682$3::init$() {
}

$Component* bug6711682$3::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$init($bug6711682);
	$init($Boolean);
	$nc($bug6711682::rendererCb)->setSelected($nc($Boolean::TRUE)->equals(value));
	return $bug6711682::rendererCb;
}

bug6711682$3::bug6711682$3() {
}

$Class* bug6711682$3::load$($String* name, bool initialize) {
	$loadClass(bug6711682$3, name, initialize, &_bug6711682$3_ClassInfo_, allocate$bug6711682$3);
	return class$;
}

$Class* bug6711682$3::class$ = nullptr;