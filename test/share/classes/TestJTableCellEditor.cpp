#include <TestJTableCellEditor.h>

#include <TestJTableCellEditor$1.h>
#include <TestJTableCellEditor$UserEditor.h>
#include <java/awt/Component.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef TEST_VALUE

using $TestJTableCellEditor$1 = ::TestJTableCellEditor$1;
using $TestJTableCellEditor$UserEditor = ::TestJTableCellEditor$UserEditor;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableModel = ::javax::swing::table::TableModel;

class TestJTableCellEditor$$Lambda$testJTableCellEditor : public $Runnable {
	$class(TestJTableCellEditor$$Lambda$testJTableCellEditor, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJTableCellEditor::testJTableCellEditor();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJTableCellEditor$$Lambda$testJTableCellEditor>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJTableCellEditor$$Lambda$testJTableCellEditor::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJTableCellEditor$$Lambda$testJTableCellEditor::*)()>(&TestJTableCellEditor$$Lambda$testJTableCellEditor::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJTableCellEditor$$Lambda$testJTableCellEditor::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJTableCellEditor$$Lambda$testJTableCellEditor",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJTableCellEditor$$Lambda$testJTableCellEditor::load$($String* name, bool initialize) {
	$loadClass(TestJTableCellEditor$$Lambda$testJTableCellEditor, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJTableCellEditor$$Lambda$testJTableCellEditor::class$ = nullptr;

$MethodInfo _TestJTableCellEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJTableCellEditor::*)()>(&TestJTableCellEditor::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestJTableCellEditor::main)), "java.lang.Exception"},
	{"testJTableCellEditor", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestJTableCellEditor::testJTableCellEditor))},
	{}
};

$InnerClassInfo _TestJTableCellEditor_InnerClassesInfo_[] = {
	{"TestJTableCellEditor$UserEditor", "TestJTableCellEditor", "UserEditor", $PUBLIC | $STATIC},
	{"TestJTableCellEditor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJTableCellEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJTableCellEditor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestJTableCellEditor_MethodInfo_,
	nullptr,
	nullptr,
	_TestJTableCellEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestJTableCellEditor$UserEditor,TestJTableCellEditor$1"
};

$Object* allocate$TestJTableCellEditor($Class* clazz) {
	return $of($alloc(TestJTableCellEditor));
}

void TestJTableCellEditor::init$() {
}

void TestJTableCellEditor::main($StringArray* args) {
	$load(TestJTableCellEditor);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJTableCellEditor$$Lambda$testJTableCellEditor)));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJTableCellEditor$$Lambda$testJTableCellEditor)));
}

void TestJTableCellEditor::testJTableCellEditor() {
	$useLocalCurrentObjectStackCache();
	$load($TestJTableCellEditor$UserEditor);
	$Class* cls = $TestJTableCellEditor$UserEditor::class$;
	$var($JTable, table, $new($JTable, $$new($TestJTableCellEditor$1, cls)));
	$var($TableCellEditor, editor, table->getDefaultEditor($Object::class$));
	$init($TestJTableCellEditor$UserEditor);
	$nc(editor)->getTableCellEditorComponent(table, $TestJTableCellEditor$UserEditor::TEST_VALUE, false, 0, 0);
	editor->stopCellEditing();
	$var($Object, obj, editor->getCellEditorValue());
	if (obj == nullptr) {
		$throwNew($RuntimeException, "Editor object is null!"_s);
	}
	if (!$nc($TestJTableCellEditor$UserEditor::TEST_VALUE)->equals($nc(($cast($TestJTableCellEditor$UserEditor, obj)))->value)) {
		$throwNew($RuntimeException, "Value is incorrect!"_s);
	}
}

TestJTableCellEditor::TestJTableCellEditor() {
}

$Class* TestJTableCellEditor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestJTableCellEditor$$Lambda$testJTableCellEditor::classInfo$.name)) {
			return TestJTableCellEditor$$Lambda$testJTableCellEditor::load$(name, initialize);
		}
	}
	$loadClass(TestJTableCellEditor, name, initialize, &_TestJTableCellEditor_ClassInfo_, allocate$TestJTableCellEditor);
	return class$;
}

$Class* TestJTableCellEditor::class$ = nullptr;