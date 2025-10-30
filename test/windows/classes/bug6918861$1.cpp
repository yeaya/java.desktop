#include <bug6918861$1.h>

#include <bug6918861$HackedSynthSliderUI.h>
#include <bug6918861.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <javax/swing/plaf/synth/SynthSliderUI.h>
#include <jcpp.h>

using $bug6918861 = ::bug6918861;
using $bug6918861$HackedSynthSliderUI = ::bug6918861$HackedSynthSliderUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JSlider = ::javax::swing::JSlider;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $SynthSliderUI = ::javax::swing::plaf::synth::SynthSliderUI;

$MethodInfo _bug6918861$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6918861$1::*)()>(&bug6918861$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6918861$1_EnclosingMethodInfo_ = {
	"bug6918861",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6918861$1_InnerClassesInfo_[] = {
	{"bug6918861$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6918861$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6918861$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6918861$1_MethodInfo_,
	nullptr,
	&_bug6918861$1_EnclosingMethodInfo_,
	_bug6918861$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6918861"
};

$Object* allocate$bug6918861$1($Class* clazz) {
	return $of($alloc(bug6918861$1));
}

void bug6918861$1::init$() {
}

void bug6918861$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JSlider, slider, $new($JSlider));
	$var($bug6918861$HackedSynthSliderUI, ui, $new($bug6918861$HackedSynthSliderUI, slider));
	slider->setUI(static_cast<$SliderUI*>(ui));
	if (ui->counter != 111) {
		$throwNew($RuntimeException, "Some installers of SynthSliderUI weren\'t invoked"_s);
	}
	slider->setUI(($SliderUI*)nullptr);
	if (ui->counter != 0) {
		$throwNew($RuntimeException, "Some uninstallers of SynthSliderUI weren\'t invoked"_s);
	}
}

bug6918861$1::bug6918861$1() {
}

$Class* bug6918861$1::load$($String* name, bool initialize) {
	$loadClass(bug6918861$1, name, initialize, &_bug6918861$1_ClassInfo_, allocate$bug6918861$1);
	return class$;
}

$Class* bug6918861$1::class$ = nullptr;