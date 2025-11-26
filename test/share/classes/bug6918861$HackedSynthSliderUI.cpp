#include <bug6918861$HackedSynthSliderUI.h>

#include <bug6918861.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <javax/swing/plaf/synth/SynthSliderUI.h>
#include <jcpp.h>

using $bug6918861 = ::bug6918861;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSlider = ::javax::swing::JSlider;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $SynthSliderUI = ::javax::swing::plaf::synth::SynthSliderUI;

$FieldInfo _bug6918861$HackedSynthSliderUI_FieldInfo_[] = {
	{"counter", "I", nullptr, $PRIVATE, $field(bug6918861$HackedSynthSliderUI, counter)},
	{}
};

$MethodInfo _bug6918861$HackedSynthSliderUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED, $method(static_cast<void(bug6918861$HackedSynthSliderUI::*)($JSlider*)>(&bug6918861$HackedSynthSliderUI::init$))},
	{"installDefaults", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"installKeyboardActions", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _bug6918861$HackedSynthSliderUI_InnerClassesInfo_[] = {
	{"bug6918861$HackedSynthSliderUI", "bug6918861", "HackedSynthSliderUI", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug6918861$HackedSynthSliderUI_ClassInfo_ = {
	$ACC_SUPER,
	"bug6918861$HackedSynthSliderUI",
	"javax.swing.plaf.synth.SynthSliderUI",
	nullptr,
	_bug6918861$HackedSynthSliderUI_FieldInfo_,
	_bug6918861$HackedSynthSliderUI_MethodInfo_,
	nullptr,
	nullptr,
	_bug6918861$HackedSynthSliderUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6918861"
};

$Object* allocate$bug6918861$HackedSynthSliderUI($Class* clazz) {
	return $of($alloc(bug6918861$HackedSynthSliderUI));
}

void bug6918861$HackedSynthSliderUI::init$($JSlider* c) {
	$SynthSliderUI::init$(c);
}

void bug6918861$HackedSynthSliderUI::installDefaults($JSlider* slider) {
	$SynthSliderUI::installDefaults(slider);
	this->counter += 1;
}

void bug6918861$HackedSynthSliderUI::uninstallDefaults($JSlider* slider) {
	$SynthSliderUI::uninstallDefaults(slider);
	this->counter -= 1;
}

void bug6918861$HackedSynthSliderUI::installListeners($JSlider* slider) {
	$SynthSliderUI::installListeners(slider);
	this->counter += 10;
}

void bug6918861$HackedSynthSliderUI::uninstallListeners($JSlider* slider) {
	$SynthSliderUI::uninstallListeners(slider);
	this->counter -= 10;
}

void bug6918861$HackedSynthSliderUI::installKeyboardActions($JSlider* slider) {
	$SynthSliderUI::installKeyboardActions(slider);
	this->counter += 100;
}

void bug6918861$HackedSynthSliderUI::uninstallKeyboardActions($JSlider* slider) {
	$SynthSliderUI::uninstallKeyboardActions(slider);
	this->counter -= 100;
}

bug6918861$HackedSynthSliderUI::bug6918861$HackedSynthSliderUI() {
}

$Class* bug6918861$HackedSynthSliderUI::load$($String* name, bool initialize) {
	$loadClass(bug6918861$HackedSynthSliderUI, name, initialize, &_bug6918861$HackedSynthSliderUI_ClassInfo_, allocate$bug6918861$HackedSynthSliderUI);
	return class$;
}

$Class* bug6918861$HackedSynthSliderUI::class$ = nullptr;