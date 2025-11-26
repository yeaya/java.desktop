#include <bug6923305$1$1.h>

#include <bug6923305$1.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthSliderUI.h>
#include <jcpp.h>

using $bug6923305$1 = ::bug6923305$1;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JSlider = ::javax::swing::JSlider;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthSliderUI = ::javax::swing::plaf::synth::SynthSliderUI;

$FieldInfo _bug6923305$1$1_FieldInfo_[] = {
	{"this$0", "Lbug6923305$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6923305$1$1, this$0)},
	{}
};

$MethodInfo _bug6923305$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug6923305$1;Ljavax/swing/JSlider;)V", nullptr, 0, $method(static_cast<void(bug6923305$1$1::*)($bug6923305$1*,$JSlider*)>(&bug6923305$1$1::init$))},
	{"paintTrack", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _bug6923305$1$1_EnclosingMethodInfo_ = {
	"bug6923305$1",
	"run",
	"()V"
};

$InnerClassInfo _bug6923305$1$1_InnerClassesInfo_[] = {
	{"bug6923305$1", nullptr, nullptr, 0},
	{"bug6923305$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6923305$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6923305$1$1",
	"javax.swing.plaf.synth.SynthSliderUI",
	nullptr,
	_bug6923305$1$1_FieldInfo_,
	_bug6923305$1$1_MethodInfo_,
	nullptr,
	&_bug6923305$1$1_EnclosingMethodInfo_,
	_bug6923305$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6923305"
};

$Object* allocate$bug6923305$1$1($Class* clazz) {
	return $of($alloc(bug6923305$1$1));
}

void bug6923305$1$1::init$($bug6923305$1* this$0, $JSlider* arg0) {
	$set(this, this$0, this$0);
	$SynthSliderUI::init$(arg0);
}

void bug6923305$1$1::paintTrack($SynthContext* context, $Graphics* g, $Rectangle* trackBounds) {
	$throwNew($RuntimeException, "Test failed: the SynthSliderUI.paintTrack was invoked"_s);
}

bug6923305$1$1::bug6923305$1$1() {
}

$Class* bug6923305$1$1::load$($String* name, bool initialize) {
	$loadClass(bug6923305$1$1, name, initialize, &_bug6923305$1$1_ClassInfo_, allocate$bug6923305$1$1);
	return class$;
}

$Class* bug6923305$1$1::class$ = nullptr;