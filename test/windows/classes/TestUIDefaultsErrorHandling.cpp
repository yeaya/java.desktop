#include <TestUIDefaultsErrorHandling.h>

#include <TestUIDefaultsErrorHandling$1.h>
#include <TestUIDefaultsErrorHandling$BrokenUI.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $TestUIDefaultsErrorHandling$1 = ::TestUIDefaultsErrorHandling$1;
using $TestUIDefaultsErrorHandling$BrokenUI = ::TestUIDefaultsErrorHandling$BrokenUI;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

$FieldInfo _TestUIDefaultsErrorHandling_FieldInfo_[] = {
	{"erroutput", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestUIDefaultsErrorHandling, erroutput)},
	{}
};

$MethodInfo _TestUIDefaultsErrorHandling_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestUIDefaultsErrorHandling::*)()>(&TestUIDefaultsErrorHandling::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestUIDefaultsErrorHandling::main))},
	{}
};

$InnerClassInfo _TestUIDefaultsErrorHandling_InnerClassesInfo_[] = {
	{"TestUIDefaultsErrorHandling$BrokenUI", "TestUIDefaultsErrorHandling", "BrokenUI", $PUBLIC | $STATIC},
	{"TestUIDefaultsErrorHandling$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestUIDefaultsErrorHandling_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestUIDefaultsErrorHandling",
	"java.lang.Object",
	nullptr,
	_TestUIDefaultsErrorHandling_FieldInfo_,
	_TestUIDefaultsErrorHandling_MethodInfo_,
	nullptr,
	nullptr,
	_TestUIDefaultsErrorHandling_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestUIDefaultsErrorHandling$BrokenUI,TestUIDefaultsErrorHandling$1"
};

$Object* allocate$TestUIDefaultsErrorHandling($Class* clazz) {
	return $of($alloc(TestUIDefaultsErrorHandling));
}

$String* TestUIDefaultsErrorHandling::erroutput = nullptr;

void TestUIDefaultsErrorHandling::init$() {
}

void TestUIDefaultsErrorHandling::main($StringArray* args) {
	$init(TestUIDefaultsErrorHandling);
	$useLocalCurrentObjectStackCache();
	$init($System);
	$var($PrintStream, err, $System::err);
	$var($ByteArrayOutputStream, bytes, $new($ByteArrayOutputStream));
	$System::setErr($$new($PrintStream, static_cast<$OutputStream*>(bytes)));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($UIDefaults, defaults, $UIManager::getDefaults());
			$load($TestUIDefaultsErrorHandling$BrokenUI);
			$nc(defaults)->put("BrokenUI"_s, $($TestUIDefaultsErrorHandling$BrokenUI::class$->getName()));
			defaults->getUI($$new($TestUIDefaultsErrorHandling$1));
			if (!($nc($(bytes->toString()))->contains(TestUIDefaultsErrorHandling::erroutput))) {
				$throwNew($RuntimeException, "UIDefauls swallows exception trace"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$System::setErr(err);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

TestUIDefaultsErrorHandling::TestUIDefaultsErrorHandling() {
}

void clinit$TestUIDefaultsErrorHandling($Class* class$) {
	$assignStatic(TestUIDefaultsErrorHandling::erroutput, "oops, complex problem with diagnostics"_s);
}

$Class* TestUIDefaultsErrorHandling::load$($String* name, bool initialize) {
	$loadClass(TestUIDefaultsErrorHandling, name, initialize, &_TestUIDefaultsErrorHandling_ClassInfo_, clinit$TestUIDefaultsErrorHandling, allocate$TestUIDefaultsErrorHandling);
	return class$;
}

$Class* TestUIDefaultsErrorHandling::class$ = nullptr;