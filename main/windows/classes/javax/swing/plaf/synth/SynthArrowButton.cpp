#include <javax/swing/plaf/synth/SynthArrowButton.h>

#include <java/awt/Component.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/synth/SynthArrowButton$SynthArrowButtonUI.h>
#include <javax/swing/plaf/synth/SynthButtonUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $SynthArrowButton$SynthArrowButtonUI = ::javax::swing::plaf::synth::SynthArrowButton$SynthArrowButtonUI;
using $SynthButtonUI = ::javax::swing::plaf::synth::SynthButtonUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthArrowButton_FieldInfo_[] = {
	{"direction", "I", nullptr, $PRIVATE, $field(SynthArrowButton, direction)},
	{}
};

$MethodInfo _SynthArrowButton_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SynthArrowButton::*)(int32_t)>(&SynthArrowButton::init$))},
	{"getDirection", "()I", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setDirection", "(I)V", nullptr, $PUBLIC},
	{"setFocusable", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthArrowButton_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthArrowButton$SynthArrowButtonUI", "javax.swing.plaf.synth.SynthArrowButton", "SynthArrowButtonUI", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SynthArrowButton_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthArrowButton",
	"javax.swing.JButton",
	"javax.swing.plaf.UIResource",
	_SynthArrowButton_FieldInfo_,
	_SynthArrowButton_MethodInfo_,
	nullptr,
	nullptr,
	_SynthArrowButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthArrowButton$SynthArrowButtonUI"
};

$Object* allocate$SynthArrowButton($Class* clazz) {
	return $of($alloc(SynthArrowButton));
}

$String* SynthArrowButton::toString() {
	 return this->$JButton::toString();
}

int32_t SynthArrowButton::hashCode() {
	 return this->$JButton::hashCode();
}

bool SynthArrowButton::equals(Object$* arg0) {
	 return this->$JButton::equals(arg0);
}

$Object* SynthArrowButton::clone() {
	 return this->$JButton::clone();
}

void SynthArrowButton::finalize() {
	this->$JButton::finalize();
}

void SynthArrowButton::init$(int32_t direction) {
	$JButton::init$();
	$JButton::setFocusable(false);
	setDirection(direction);
	setDefaultCapable(false);
}

$String* SynthArrowButton::getUIClassID() {
	return "ArrowButtonUI"_s;
}

void SynthArrowButton::updateUI() {
	setUI(static_cast<$ButtonUI*>($$new($SynthArrowButton$SynthArrowButtonUI)));
}

void SynthArrowButton::setDirection(int32_t dir) {
	this->direction = dir;
	putClientProperty("__arrow_direction__"_s, $($Integer::valueOf(dir)));
	repaint();
}

int32_t SynthArrowButton::getDirection() {
	return this->direction;
}

void SynthArrowButton::setFocusable(bool focusable) {
}

SynthArrowButton::SynthArrowButton() {
}

$Class* SynthArrowButton::load$($String* name, bool initialize) {
	$loadClass(SynthArrowButton, name, initialize, &_SynthArrowButton_ClassInfo_, allocate$SynthArrowButton);
	return class$;
}

$Class* SynthArrowButton::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax