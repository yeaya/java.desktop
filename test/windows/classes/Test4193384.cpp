#include <Test4193384.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $MethodInfo = ::java::lang::MethodInfo;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _Test4193384_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4193384::*)()>(&Test4193384::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test4193384::main))},
	{"test", "([Ljava/awt/Color;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ColorArray*)>(&Test4193384::test))},
	{}
};

$ClassInfo _Test4193384_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4193384",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test4193384_MethodInfo_
};

$Object* allocate$Test4193384($Class* clazz) {
	return $of($alloc(Test4193384));
}

void Test4193384::init$() {
}

void Test4193384::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	test($$new($ColorArray, {
		$$new($Color, 11, 12, 13),
		$$new($Color, 204, 0, 204),
		$$new($Color, 0, 51, 51)
	}));
}

void Test4193384::test($ColorArray* colors) {
	$useLocalCurrentObjectStackCache();
	$var($JLabel, label, $new($JLabel, "Preview Panel"_s));
	$var($JColorChooser, chooser, $new($JColorChooser));
	chooser->setPreviewPanel(label);
	$var($floats, hsb, $new($floats, 3));
	for (int32_t i = 0; i < $nc(colors)->length; ++i) {
		$var($Color, color, colors->get(i));
		int32_t var$0 = $nc(color)->getRed();
		int32_t var$1 = color->getGreen();
		$Color::RGBtoHSB(var$0, var$1, color->getBlue(), hsb);
		if (!$nc(color)->equals($($Color::getHSBColor(hsb->get(0), hsb->get(1), hsb->get(2))))) {
			$throwNew($Error, "color conversion is failed"_s);
		}
		if (!$nc(color)->equals($($$new($JColorChooser, color)->getColor()))) {
			$throwNew($Error, "constructor sets incorrect initial color"_s);
		}
		chooser->setColor(color);
		if (!$nc(color)->equals($(label->getForeground()))) {
			$throwNew($Error, "a custom preview panel doesn\'t handle colors"_s);
		}
	}
}

Test4193384::Test4193384() {
}

$Class* Test4193384::load$($String* name, bool initialize) {
	$loadClass(Test4193384, name, initialize, &_Test4193384_ClassInfo_, allocate$Test4193384);
	return class$;
}

$Class* Test4193384::class$ = nullptr;