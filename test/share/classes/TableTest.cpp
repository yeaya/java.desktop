#include <TableTest.h>

#include <java/awt/KeyboardFocusManager.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/TableCellEditor.h>
#include <jcpp.h>

using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $JTable = ::javax::swing::JTable;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;

$MethodInfo _TableTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TableTest::*)()>(&TableTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TableTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TableTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TableTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TableTest_MethodInfo_
};

$Object* allocate$TableTest($Class* clazz) {
	return $of($alloc(TableTest));
}

void TableTest::init$() {
}

void TableTest::main($StringArray* args) {
	$load(TableTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$KeyboardFocusManager::getCurrentKeyboardFocusManager();
	$System::setSecurityManager($$new($SecurityManager));
	$var($JTable, table, $new($JTable));
	$load($Double);
	$var($TableCellEditor, de, table->getDefaultEditor($Double::class$));
	if (de == nullptr) {
		$throwNew($RuntimeException, "Table default editor is null"_s);
	}
}

TableTest::TableTest() {
}

$Class* TableTest::load$($String* name, bool initialize) {
	$loadClass(TableTest, name, initialize, &_TableTest_ClassInfo_, allocate$TableTest);
	return class$;
}

$Class* TableTest::class$ = nullptr;