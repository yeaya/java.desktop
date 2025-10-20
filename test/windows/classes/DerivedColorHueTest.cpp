#include <DerivedColorHueTest.h>

#include <java/awt/Color.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Float.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

$MethodInfo _DerivedColorHueTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DerivedColorHueTest::*)()>(&DerivedColorHueTest::init$))},
	{"hsb", "(Ljava/awt/Color;)[F", nullptr, $PRIVATE | $STATIC, $method(static_cast<$floats*(*)($Color*)>(&DerivedColorHueTest::hsb))},
	{"hsbString", "(Ljava/awt/Color;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Color*)>(&DerivedColorHueTest::hsbString))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DerivedColorHueTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _DerivedColorHueTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DerivedColorHueTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DerivedColorHueTest_MethodInfo_
};

$Object* allocate$DerivedColorHueTest($Class* clazz) {
	return $of($alloc(DerivedColorHueTest));
}

void DerivedColorHueTest::init$() {
}

void DerivedColorHueTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	$var($Color, base, $UIManager::getColor("nimbusBlueGrey"_s));
	$var($floats, hsbBase, hsb(base));
	float hueShift = 0.5f - 10;
	$var($Color, derived, $nc(($cast($NimbusLookAndFeel, $($UIManager::getLookAndFeel()))))->getDerivedColor("nimbusBlueGrey"_s, hueShift, (float)0, (float)0, 0, false));
	$var($Color, derivedCorrect, $new($Color, $Color::HSBtoRGB($nc(hsbBase)->get(0) + hueShift, hsbBase->get(1), hsbBase->get(2))));
	float hueDerived = $nc($(hsb(derived)))->get(0);
	float hueCorrect = $nc($(hsb(derivedCorrect)))->get(0);
	if (hueCorrect < 0.01f || hueCorrect > 0.99f) {
		$throwNew($RuntimeException, "Test indeterminate! (Hue too close to red)"_s);
	}
	$init($System);
	$nc($System::out)->println($$str({" base: "_s, $(hsbString(base))}));
	$nc($System::out)->println($$str({" derived: "_s, $(hsbString(derived))}));
	$nc($System::out)->println($$str({"derivedCorrect: "_s, $(hsbString(derivedCorrect))}));
	if ($Math::abs(hueDerived - hueCorrect) < 0.001f) {
		$nc($System::out)->println("[PASS]"_s);
	} else {
		$throwNew($RuntimeException, "Nimbus derived hue color is not correct"_s);
	}
}

$floats* DerivedColorHueTest::hsb($Color* c) {
	int32_t var$0 = $nc(c)->getRed();
	int32_t var$1 = c->getGreen();
	return $Color::RGBtoHSB(var$0, var$1, c->getBlue(), nullptr);
}

$String* DerivedColorHueTest::hsbString($Color* c) {
	$useLocalCurrentObjectStackCache();
	$var($floats, hsb, DerivedColorHueTest::hsb(c));
	return $String::format("H=%.2f, S=%.2f, B=%.2f"_s, $$new($ObjectArray, {
		$($of($Float::valueOf($nc(hsb)->get(0)))),
		$($of($Float::valueOf($nc(hsb)->get(1)))),
		$($of($Float::valueOf($nc(hsb)->get(2))))
	}));
}

DerivedColorHueTest::DerivedColorHueTest() {
}

$Class* DerivedColorHueTest::load$($String* name, bool initialize) {
	$loadClass(DerivedColorHueTest, name, initialize, &_DerivedColorHueTest_ClassInfo_, allocate$DerivedColorHueTest);
	return class$;
}

$Class* DerivedColorHueTest::class$ = nullptr;