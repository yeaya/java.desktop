#include <TestCustomStyleFactory.h>

#include <TestCustomStyleFactory$1.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $TestCustomStyleFactory$1 = ::TestCustomStyleFactory$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;

$FieldInfo _TestCustomStyleFactory_FieldInfo_[] = {
	{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestCustomStyleFactory, GTK_LAF_CLASS)},
	{}
};

$MethodInfo _TestCustomStyleFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestCustomStyleFactory::*)()>(&TestCustomStyleFactory::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestCustomStyleFactory::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestCustomStyleFactory_InnerClassesInfo_[] = {
	{"TestCustomStyleFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestCustomStyleFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestCustomStyleFactory",
	"java.lang.Object",
	nullptr,
	_TestCustomStyleFactory_FieldInfo_,
	_TestCustomStyleFactory_MethodInfo_,
	nullptr,
	nullptr,
	_TestCustomStyleFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestCustomStyleFactory$1"
};

$Object* allocate$TestCustomStyleFactory($Class* clazz) {
	return $of($alloc(TestCustomStyleFactory));
}

$String* TestCustomStyleFactory::GTK_LAF_CLASS = nullptr;

void TestCustomStyleFactory::init$() {
}

void TestCustomStyleFactory::main($StringArray* args) {
	$init(TestCustomStyleFactory);
	$useLocalCurrentObjectStackCache();
	if (!$nc($($System::getProperty("os.name"_s)))->startsWith("Linux"_s)) {
		$init($System);
		$nc($System::out)->println("This test is meant for Linux platform only"_s);
		return;
	}
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				if ($nc($($nc(lookAndFeelInfo)->getClassName()))->contains(TestCustomStyleFactory::GTK_LAF_CLASS)) {
					try {
						$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
					} catch ($UnsupportedLookAndFeelException&) {
						$var($UnsupportedLookAndFeelException, ignored, $catch());
						$nc($System::out)->println("GTK L&F could not be set, so this test can not be run in this scenario "_s);
						return;
					}
				}
			}
		}
	}
	$var($SynthStyleFactory, original, $SynthLookAndFeel::getStyleFactory());
	$SynthLookAndFeel::setStyleFactory($$new($TestCustomStyleFactory$1, original));
	$new($JLabel, "test"_s);
}

TestCustomStyleFactory::TestCustomStyleFactory() {
}

void clinit$TestCustomStyleFactory($Class* class$) {
	$assignStatic(TestCustomStyleFactory::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
}

$Class* TestCustomStyleFactory::load$($String* name, bool initialize) {
	$loadClass(TestCustomStyleFactory, name, initialize, &_TestCustomStyleFactory_ClassInfo_, clinit$TestCustomStyleFactory, allocate$TestCustomStyleFactory);
	return class$;
}

$Class* TestCustomStyleFactory::class$ = nullptr;