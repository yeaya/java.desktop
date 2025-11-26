#include <Test4887836.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef LIGHT_GRAY

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;

$MethodInfo _Test4887836_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4887836::*)()>(&Test4887836::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test4887836_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4887836",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_Test4887836_MethodInfo_
};

$Object* allocate$Test4887836($Class* clazz) {
	return $of($alloc(Test4887836));
}

void Test4887836::init$() {
	$JApplet::init$();
}

void Test4887836::init() {
	$useLocalCurrentObjectStackCache();
	$UIManager::put("Label.font"_s, $$new($Font, "Perpetua"_s, 0, 36));
	$init($Color);
	add(static_cast<$Component*>($$new($JColorChooser, $Color::LIGHT_GRAY)));
}

Test4887836::Test4887836() {
}

$Class* Test4887836::load$($String* name, bool initialize) {
	$loadClass(Test4887836, name, initialize, &_Test4887836_ClassInfo_, allocate$Test4887836);
	return class$;
}

$Class* Test4887836::class$ = nullptr;