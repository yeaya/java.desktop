#include <TestJTableCellEditor$UserEditor.h>

#include <TestJTableCellEditor.h>
#include <jcpp.h>

#undef TEST_VALUE

using $TestJTableCellEditor = ::TestJTableCellEditor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestJTableCellEditor$UserEditor_FieldInfo_[] = {
	{"TEST_VALUE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJTableCellEditor$UserEditor, TEST_VALUE)},
	{"value", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TestJTableCellEditor$UserEditor, value)},
	{}
};

$MethodInfo _TestJTableCellEditor$UserEditor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TestJTableCellEditor$UserEditor::*)($String*)>(&TestJTableCellEditor$UserEditor::init$))},
	{}
};

$InnerClassInfo _TestJTableCellEditor$UserEditor_InnerClassesInfo_[] = {
	{"TestJTableCellEditor$UserEditor", "TestJTableCellEditor", "UserEditor", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestJTableCellEditor$UserEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJTableCellEditor$UserEditor",
	"java.lang.Object",
	nullptr,
	_TestJTableCellEditor$UserEditor_FieldInfo_,
	_TestJTableCellEditor$UserEditor_MethodInfo_,
	nullptr,
	nullptr,
	_TestJTableCellEditor$UserEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestJTableCellEditor"
};

$Object* allocate$TestJTableCellEditor$UserEditor($Class* clazz) {
	return $of($alloc(TestJTableCellEditor$UserEditor));
}

$String* TestJTableCellEditor$UserEditor::TEST_VALUE = nullptr;

void TestJTableCellEditor$UserEditor::init$($String* value) {
	$set(this, value, value);
}

TestJTableCellEditor$UserEditor::TestJTableCellEditor$UserEditor() {
}

void clinit$TestJTableCellEditor$UserEditor($Class* class$) {
	$assignStatic(TestJTableCellEditor$UserEditor::TEST_VALUE, "Test Value"_s);
}

$Class* TestJTableCellEditor$UserEditor::load$($String* name, bool initialize) {
	$loadClass(TestJTableCellEditor$UserEditor, name, initialize, &_TestJTableCellEditor$UserEditor_ClassInfo_, clinit$TestJTableCellEditor$UserEditor, allocate$TestJTableCellEditor$UserEditor);
	return class$;
}

$Class* TestJTableCellEditor$UserEditor::class$ = nullptr;