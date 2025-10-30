#include <Test8043627.h>

#include <java/lang/SecurityManager.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/SynthButtonUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $SynthButtonUI = ::javax::swing::plaf::synth::SynthButtonUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;

$MethodInfo _Test8043627_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8043627::*)()>(&Test8043627::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8043627::main))},
	{}
};

$ClassInfo _Test8043627_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8043627",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test8043627_MethodInfo_
};

$Object* allocate$Test8043627($Class* clazz) {
	return $of($alloc(Test8043627));
}

void Test8043627::init$() {
}

void Test8043627::main($StringArray* args) {
	$load(Test8043627);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$System::setSecurityManager($$new($SecurityManager));
	$$new($SynthButtonUI)->getContext($$new($JButton));
}

Test8043627::Test8043627() {
}

$Class* Test8043627::load$($String* name, bool initialize) {
	$loadClass(Test8043627, name, initialize, &_Test8043627_ClassInfo_, allocate$Test8043627);
	return class$;
}

$Class* Test8043627::class$ = nullptr;