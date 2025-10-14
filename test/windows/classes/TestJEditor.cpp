#include <TestJEditor.h>

#include <TestJEditor$UserEditorKit.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/EditorKit.h>
#include <jcpp.h>

using $TestJEditor$UserEditorKit = ::TestJEditor$UserEditorKit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
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
using $JEditorPane = ::javax::swing::JEditorPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $EditorKit = ::javax::swing::text::EditorKit;

class TestJEditor$$Lambda$testJEditorPane : public $Runnable {
	$class(TestJEditor$$Lambda$testJEditorPane, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJEditor::testJEditorPane();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJEditor$$Lambda$testJEditorPane>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJEditor$$Lambda$testJEditorPane::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJEditor$$Lambda$testJEditorPane::*)()>(&TestJEditor$$Lambda$testJEditorPane::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJEditor$$Lambda$testJEditorPane::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJEditor$$Lambda$testJEditorPane",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJEditor$$Lambda$testJEditorPane::load$($String* name, bool initialize) {
	$loadClass(TestJEditor$$Lambda$testJEditorPane, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJEditor$$Lambda$testJEditorPane::class$ = nullptr;

$MethodInfo _TestJEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJEditor::*)()>(&TestJEditor::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestJEditor::main)), "java.lang.Exception"},
	{"testJEditorPane", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestJEditor::testJEditorPane))},
	{}
};

$InnerClassInfo _TestJEditor_InnerClassesInfo_[] = {
	{"TestJEditor$UserEditorKit", "TestJEditor", "UserEditorKit", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestJEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJEditor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestJEditor_MethodInfo_,
	nullptr,
	nullptr,
	_TestJEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestJEditor$UserEditorKit"
};

$Object* allocate$TestJEditor($Class* clazz) {
	return $of($alloc(TestJEditor));
}

void TestJEditor::init$() {
}

void TestJEditor::main($StringArray* args) {
	$load(TestJEditor);
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJEditor$$Lambda$testJEditorPane)));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJEditor$$Lambda$testJEditorPane)));
}

void TestJEditor::testJEditorPane() {
	try {
		$load($TestJEditor$UserEditorKit);
		$JEditorPane::registerEditorKitForContentType("text/html"_s, $($TestJEditor$UserEditorKit::class$->getName()));
		$var($EditorKit, editorKit, $JEditorPane::createEditorKitForContentType("text/html"_s));
		if (!($instanceOf($TestJEditor$UserEditorKit, editorKit))) {
			$throwNew($RuntimeException, "Editor kit is not UserEditorKit!"_s);
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

TestJEditor::TestJEditor() {
}

$Class* TestJEditor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestJEditor$$Lambda$testJEditorPane::classInfo$.name)) {
			return TestJEditor$$Lambda$testJEditorPane::load$(name, initialize);
		}
	}
	$loadClass(TestJEditor, name, initialize, &_TestJEditor_ClassInfo_, allocate$TestJEditor);
	return class$;
}

$Class* TestJEditor::class$ = nullptr;