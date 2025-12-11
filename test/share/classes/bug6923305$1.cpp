#include <bug6923305$1.h>

#include <bug6923305$1$1.h>
#include <bug6923305.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <javax/swing/plaf/synth/SynthSliderUI.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $bug6923305$1$1 = ::bug6923305$1$1;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSlider = ::javax::swing::JSlider;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $SynthSliderUI = ::javax::swing::plaf::synth::SynthSliderUI;

$MethodInfo _bug6923305$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6923305$1::*)()>(&bug6923305$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6923305$1_EnclosingMethodInfo_ = {
	"bug6923305",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6923305$1_InnerClassesInfo_[] = {
	{"bug6923305$1", nullptr, nullptr, 0},
	{"bug6923305$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6923305$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6923305$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6923305$1_MethodInfo_,
	nullptr,
	&_bug6923305$1_EnclosingMethodInfo_,
	_bug6923305$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6923305"
};

$Object* allocate$bug6923305$1($Class* clazz) {
	return $of($alloc(bug6923305$1));
}

void bug6923305$1::init$() {
}

void bug6923305$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JSlider, slider, $new($JSlider));
	slider->setUI(static_cast<$SliderUI*>($$new($bug6923305$1$1, this, slider)));
	slider->setPaintTrack(false);
	slider->setSize($(slider->getPreferredSize()));
	int32_t var$0 = slider->getWidth();
	$var($BufferedImage, bufferedImage, $new($BufferedImage, var$0, slider->getHeight(), $BufferedImage::TYPE_INT_ARGB));
	slider->paint($(bufferedImage->getGraphics()));
}

bug6923305$1::bug6923305$1() {
}

$Class* bug6923305$1::load$($String* name, bool initialize) {
	$loadClass(bug6923305$1, name, initialize, &_bug6923305$1_ClassInfo_, allocate$bug6923305$1);
	return class$;
}

$Class* bug6923305$1::class$ = nullptr;