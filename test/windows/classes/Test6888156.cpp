#include <Test6888156.h>

#include <Test6888156$1.h>
#include <Test6888156$2.h>
#include <Test6888156$3.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef ICON

using $Test6888156$1 = ::Test6888156$1;
using $Test6888156$2 = ::Test6888156$2;
using $Test6888156$3 = ::Test6888156$3;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Icon = ::javax::swing::Icon;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $TableModel = ::javax::swing::table::TableModel;

$FieldInfo _Test6888156_FieldInfo_[] = {
	{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE, $field(Test6888156, table)},
	{"ICON", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(Test6888156, ICON)},
	{}
};

$MethodInfo _Test6888156_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6888156::*)()>(&Test6888156::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6888156::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _Test6888156_InnerClassesInfo_[] = {
	{"Test6888156$3", nullptr, nullptr, 0},
	{"Test6888156$2", nullptr, nullptr, 0},
	{"Test6888156$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6888156_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6888156",
	"java.lang.Object",
	nullptr,
	_Test6888156_FieldInfo_,
	_Test6888156_MethodInfo_,
	nullptr,
	nullptr,
	_Test6888156_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test6888156$3,Test6888156$2,Test6888156$1"
};

$Object* allocate$Test6888156($Class* clazz) {
	return $of($alloc(Test6888156));
}

void Test6888156::init$() {
	$set(this, ICON, $new($Test6888156$1, this));
	$var($TableModel, model, $new($Test6888156$2, this));
	$set(this, table, $new($JTable, model));
}

void Test6888156::test($String* laf) {
	$SwingUtilities::invokeAndWait($$new($Test6888156$3, this, laf));
}

void Test6888156::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var(Test6888156, t, $new(Test6888156));
	t->test("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	t->test("com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				t->test($($nc(laf)->getClassName()));
			}
		}
	}
}

Test6888156::Test6888156() {
}

$Class* Test6888156::load$($String* name, bool initialize) {
	$loadClass(Test6888156, name, initialize, &_Test6888156_ClassInfo_, allocate$Test6888156);
	return class$;
}

$Class* Test6888156::class$ = nullptr;