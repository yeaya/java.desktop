#include <Test7048204.h>

#include <Test7048204$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $Test7048204$1 = ::Test7048204$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$MethodInfo _Test7048204_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test7048204::*)()>(&Test7048204::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test7048204::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Test7048204_InnerClassesInfo_[] = {
	{"Test7048204$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test7048204_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test7048204",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test7048204_MethodInfo_,
	nullptr,
	nullptr,
	_Test7048204_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test7048204$1"
};

$Object* allocate$Test7048204($Class* clazz) {
	return $of($alloc(Test7048204));
}

void Test7048204::init$() {
}

void Test7048204::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($NimbusLookAndFeel)));
	$SwingUtilities::invokeAndWait($$new($Test7048204$1));
}

Test7048204::Test7048204() {
}

$Class* Test7048204::load$($String* name, bool initialize) {
	$loadClass(Test7048204, name, initialize, &_Test7048204_ClassInfo_, allocate$Test7048204);
	return class$;
}

$Class* Test7048204::class$ = nullptr;