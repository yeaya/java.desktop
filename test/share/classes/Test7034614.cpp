#include <Test7034614.h>

#include <Test7034614$BrokenBorder.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

using $Test7034614$BrokenBorder = ::Test7034614$BrokenBorder;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$MethodInfo _Test7034614_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test7034614::*)()>(&Test7034614::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test7034614::main))},
	{}
};

$InnerClassInfo _Test7034614_InnerClassesInfo_[] = {
	{"Test7034614$BrokenBorder", "Test7034614", "BrokenBorder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Test7034614_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test7034614",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test7034614_MethodInfo_,
	nullptr,
	nullptr,
	_Test7034614_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test7034614$BrokenBorder"
};

$Object* allocate$Test7034614($Class* clazz) {
	return $of($alloc(Test7034614));
}

void Test7034614::init$() {
}

void Test7034614::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, $$new($BufferedImage, 9, 9, 9)->getGraphics());
	$var($Test7034614$BrokenBorder, broken, $new($Test7034614$BrokenBorder));
	$var($TitledBorder, titled, $new($TitledBorder, broken, $($of(broken)->getClass()->getName())));
	$var($Insets, insets, $cast($Insets, $nc($(broken->getBorderInsets(broken)))->clone()));
	titled->getBorderInsets(broken);
	broken->validate(insets);
	for (int32_t i = 0; i < 10; ++i) {
		titled->paintBorder(broken, g, 0, 0, i, i);
		broken->validate(insets);
		titled->getBaseline(broken, i, i);
		broken->validate(insets);
	}
}

Test7034614::Test7034614() {
}

$Class* Test7034614::load$($String* name, bool initialize) {
	$loadClass(Test7034614, name, initialize, &_Test7034614_ClassInfo_, allocate$Test7034614);
	return class$;
}

$Class* Test7034614::class$ = nullptr;