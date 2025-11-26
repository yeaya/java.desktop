#include <bug6794836.h>

#include <java/lang/reflect/Method.h>
#include <java/util/Dictionary.h>
#include <java/util/Hashtable.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $Dictionary = ::java::util::Dictionary;
using $Hashtable = ::java::util::Hashtable;
using $JLabel = ::javax::swing::JLabel;
using $JSlider = ::javax::swing::JSlider;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;

$MethodInfo _bug6794836_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6794836::*)()>(&bug6794836::init$))},
	{"fail", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&bug6794836::fail))},
	{"invokeMethod", "(Ljava/lang/String;Ljavax/swing/plaf/basic/BasicSliderUI;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($String*,$BasicSliderUI*)>(&bug6794836::invokeMethod)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6794836::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _bug6794836_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6794836",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6794836_MethodInfo_
};

$Object* allocate$bug6794836($Class* clazz) {
	return $of($alloc(bug6794836));
}

void bug6794836::init$() {
}

void bug6794836::main($StringArray* args) {
	$$new(bug6794836)->run();
}

void bug6794836::run() {
	$useLocalCurrentObjectStackCache();
	$var($JSlider, slider, $new($JSlider, 0, $Integer::MAX_VALUE));
	slider->setPaintLabels(true);
	$var($JLabel, minLabel, $new($JLabel, "Min"_s));
	$var($JLabel, maxLabel, $new($JLabel, "Max"_s));
	$var($Hashtable, labelTable, $new($Hashtable));
	labelTable->put($($Integer::valueOf($Integer::MIN_VALUE)), minLabel);
	labelTable->put($($Integer::valueOf($Integer::MAX_VALUE)), maxLabel);
	slider->setLabelTable(labelTable);
	$var($BasicSliderUI, ui, $cast($BasicSliderUI, $cast($SliderUI, slider->getUI())));
	if (!$equals(invokeMethod("getHighestValueLabel"_s, ui), maxLabel)) {
		fail("invalid getHighestValueLabel result"_s);
	}
	if (!$equals(invokeMethod("getLowestValueLabel"_s, ui), minLabel)) {
		fail("invalid getLowestValueLabel result"_s);
	}
	$nc($System::out)->println("The bug6794836 test passed"_s);
}

$Object* bug6794836::invokeMethod($String* name, $BasicSliderUI* ui) {
	$load(bug6794836);
	$beforeCallerSensitive();
	$load($BasicSliderUI);
	$var($Method, method, $BasicSliderUI::class$->getDeclaredMethod(name, nullptr));
	$nc(method)->setAccessible(true);
	return $of(method->invoke(ui, nullptr));
}

void bug6794836::fail($String* s) {
	$throwNew($RuntimeException, $$str({"Test failed: "_s, s}));
}

bug6794836::bug6794836() {
}

$Class* bug6794836::load$($String* name, bool initialize) {
	$loadClass(bug6794836, name, initialize, &_bug6794836_ClassInfo_, allocate$bug6794836);
	return class$;
}

$Class* bug6794836::class$ = nullptr;