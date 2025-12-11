#include <TitledBorderLabelUITest$TestLookAndFeel.h>

#include <TitledBorderLabelUITest$TestLabelUI.h>
#include <TitledBorderLabelUITest.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $TitledBorderLabelUITest$TestLabelUI = ::TitledBorderLabelUITest$TestLabelUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$MethodInfo _TitledBorderLabelUITest$TestLookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabelUITest$TestLookAndFeel::*)()>(&TitledBorderLabelUITest$TestLookAndFeel::init$))},
	{"initClassDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _TitledBorderLabelUITest$TestLookAndFeel_InnerClassesInfo_[] = {
	{"TitledBorderLabelUITest$TestLookAndFeel", "TitledBorderLabelUITest", "TestLookAndFeel", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TitledBorderLabelUITest$TestLookAndFeel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TitledBorderLabelUITest$TestLookAndFeel",
	"javax.swing.plaf.metal.MetalLookAndFeel",
	nullptr,
	nullptr,
	_TitledBorderLabelUITest$TestLookAndFeel_MethodInfo_,
	nullptr,
	nullptr,
	_TitledBorderLabelUITest$TestLookAndFeel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TitledBorderLabelUITest"
};

$Object* allocate$TitledBorderLabelUITest$TestLookAndFeel($Class* clazz) {
	return $of($alloc(TitledBorderLabelUITest$TestLookAndFeel));
}

void TitledBorderLabelUITest$TestLookAndFeel::init$() {
	$MetalLookAndFeel::init$();
}

void TitledBorderLabelUITest$TestLookAndFeel::initClassDefaults($UIDefaults* table) {
	$MetalLookAndFeel::initClassDefaults(table);
	$load($TitledBorderLabelUITest$TestLabelUI);
	$nc(table)->put("LabelUI"_s, $($TitledBorderLabelUITest$TestLabelUI::class$->getName()));
}

TitledBorderLabelUITest$TestLookAndFeel::TitledBorderLabelUITest$TestLookAndFeel() {
}

$Class* TitledBorderLabelUITest$TestLookAndFeel::load$($String* name, bool initialize) {
	$loadClass(TitledBorderLabelUITest$TestLookAndFeel, name, initialize, &_TitledBorderLabelUITest$TestLookAndFeel_ClassInfo_, allocate$TitledBorderLabelUITest$TestLookAndFeel);
	return class$;
}

$Class* TitledBorderLabelUITest$TestLookAndFeel::class$ = nullptr;