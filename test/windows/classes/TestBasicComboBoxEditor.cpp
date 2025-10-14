#include <TestBasicComboBoxEditor.h>

#include <TestBasicComboBoxEditor$UserComboBoxEditorType.h>
#include <java/awt/Component.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicComboBoxEditor.h>
#include <jcpp.h>

using $TestBasicComboBoxEditor$UserComboBoxEditorType = ::TestBasicComboBoxEditor$UserComboBoxEditorType;
using $Component = ::java::awt::Component;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicComboBoxEditor = ::javax::swing::plaf::basic::BasicComboBoxEditor;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor : public $Runnable {
	$class(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestBasicComboBoxEditor::testBasicComboBoxEditor();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor::*)()>(&TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor::load$($String* name, bool initialize) {
	$loadClass(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor::class$ = nullptr;

$MethodInfo _TestBasicComboBoxEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestBasicComboBoxEditor::*)()>(&TestBasicComboBoxEditor::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestBasicComboBoxEditor::main)), "java.lang.Exception"},
	{"testBasicComboBoxEditor", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestBasicComboBoxEditor::testBasicComboBoxEditor))},
	{}
};

$InnerClassInfo _TestBasicComboBoxEditor_InnerClassesInfo_[] = {
	{"TestBasicComboBoxEditor$UserComboBoxEditorType", "TestBasicComboBoxEditor", "UserComboBoxEditorType", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestBasicComboBoxEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestBasicComboBoxEditor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestBasicComboBoxEditor_MethodInfo_,
	nullptr,
	nullptr,
	_TestBasicComboBoxEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestBasicComboBoxEditor$UserComboBoxEditorType"
};

$Object* allocate$TestBasicComboBoxEditor($Class* clazz) {
	return $of($alloc(TestBasicComboBoxEditor));
}

void TestBasicComboBoxEditor::init$() {
}

void TestBasicComboBoxEditor::main($StringArray* args) {
	$load(TestBasicComboBoxEditor);
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor)));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor)));
}

void TestBasicComboBoxEditor::testBasicComboBoxEditor() {
	$var($BasicComboBoxEditor, comboBoxEditor, $new($BasicComboBoxEditor));
	comboBoxEditor->setItem($$new($TestBasicComboBoxEditor$UserComboBoxEditorType, "100"_s));
	$var($JTextField, editor, $cast($JTextField, comboBoxEditor->getEditorComponent()));
	$nc(editor)->setText("200"_s);
	$var($TestBasicComboBoxEditor$UserComboBoxEditorType, item, $cast($TestBasicComboBoxEditor$UserComboBoxEditorType, comboBoxEditor->getItem()));
	if (!$nc($nc(item)->str)->equals("200"_s)) {
		$throwNew($RuntimeException, "Wrong itme value!"_s);
	}
}

TestBasicComboBoxEditor::TestBasicComboBoxEditor() {
}

$Class* TestBasicComboBoxEditor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor::classInfo$.name)) {
			return TestBasicComboBoxEditor$$Lambda$testBasicComboBoxEditor::load$(name, initialize);
		}
	}
	$loadClass(TestBasicComboBoxEditor, name, initialize, &_TestBasicComboBoxEditor_ClassInfo_, allocate$TestBasicComboBoxEditor);
	return class$;
}

$Class* TestBasicComboBoxEditor::class$ = nullptr;