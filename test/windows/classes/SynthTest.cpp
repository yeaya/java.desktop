#include <SynthTest.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/io/InputStream.h>
#include <javax/swing/JButton.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

#undef RED

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$MethodInfo _SynthTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthTest::*)()>(&SynthTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SynthTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SynthTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SynthTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SynthTest_MethodInfo_
};

$Object* allocate$SynthTest($Class* clazz) {
	return $of($alloc(SynthTest));
}

void SynthTest::init$() {
}

void SynthTest::main($StringArray* args) {
	$load(SynthTest);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($SynthLookAndFeel, laf, $new($SynthLookAndFeel));
	$var($InputStream, in, SynthTest::class$->getResourceAsStream("synthconfig.xml"_s));
	laf->load(in, SynthTest::class$);
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>(laf));
	$init($Color);
	if (!$nc($Color::RED)->equals($($$new($JButton)->getForeground()))) {
		$throwNew($RuntimeException, "The wrong foreground color!"_s);
	}
}

SynthTest::SynthTest() {
}

$Class* SynthTest::load$($String* name, bool initialize) {
	$loadClass(SynthTest, name, initialize, &_SynthTest_ClassInfo_, allocate$SynthTest);
	return class$;
}

$Class* SynthTest::class$ = nullptr;