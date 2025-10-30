#include <javax/swing/colorchooser/SlidingSpinner.h>

#include <java/awt/Component.h>
#include <java/lang/Comparable.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/colorchooser/ColorPanel.h>
#include <javax/swing/colorchooser/ValueFormatter.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JSlider = ::javax::swing::JSlider;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $ColorPanel = ::javax::swing::colorchooser::ColorPanel;
using $ValueFormatter = ::javax::swing::colorchooser::ValueFormatter;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _SlidingSpinner_FieldInfo_[] = {
	{"panel", "Ljavax/swing/colorchooser/ColorPanel;", nullptr, $PRIVATE | $FINAL, $field(SlidingSpinner, panel)},
	{"label", "Ljavax/swing/JComponent;", nullptr, $PRIVATE | $FINAL, $field(SlidingSpinner, label)},
	{"model", "Ljavax/swing/SpinnerNumberModel;", nullptr, $PRIVATE | $FINAL, $field(SlidingSpinner, model)},
	{"slider", "Ljavax/swing/JSlider;", nullptr, $PRIVATE | $FINAL, $field(SlidingSpinner, slider)},
	{"spinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE | $FINAL, $field(SlidingSpinner, spinner)},
	{"value", "F", nullptr, $PRIVATE, $field(SlidingSpinner, value)},
	{"internal", "Z", nullptr, $PRIVATE, $field(SlidingSpinner, internal)},
	{}
};

$MethodInfo _SlidingSpinner_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/colorchooser/ColorPanel;Ljavax/swing/JComponent;)V", nullptr, 0, $method(static_cast<void(SlidingSpinner::*)($ColorPanel*,$JComponent*)>(&SlidingSpinner::init$))},
	{"getLabel", "()Ljavax/swing/JComponent;", nullptr, 0, $method(static_cast<$JComponent*(SlidingSpinner::*)()>(&SlidingSpinner::getLabel))},
	{"getSlider", "()Ljavax/swing/JSlider;", nullptr, 0, $method(static_cast<$JSlider*(SlidingSpinner::*)()>(&SlidingSpinner::getSlider))},
	{"getSpinner", "()Ljavax/swing/JSpinner;", nullptr, 0, $method(static_cast<$JSpinner*(SlidingSpinner::*)()>(&SlidingSpinner::getSpinner))},
	{"getValue", "()F", nullptr, 0, $method(static_cast<float(SlidingSpinner::*)()>(&SlidingSpinner::getValue))},
	{"isVisible", "()Z", nullptr, 0, $method(static_cast<bool(SlidingSpinner::*)()>(&SlidingSpinner::isVisible))},
	{"setRange", "(II)V", nullptr, 0, $method(static_cast<void(SlidingSpinner::*)(int32_t,int32_t)>(&SlidingSpinner::setRange))},
	{"setValue", "(F)V", nullptr, 0, $method(static_cast<void(SlidingSpinner::*)(float)>(&SlidingSpinner::setValue))},
	{"setVisible", "(Z)V", nullptr, 0, $method(static_cast<void(SlidingSpinner::*)(bool)>(&SlidingSpinner::setVisible))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SlidingSpinner_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.colorchooser.SlidingSpinner",
	"java.lang.Object",
	"javax.swing.event.ChangeListener",
	_SlidingSpinner_FieldInfo_,
	_SlidingSpinner_MethodInfo_
};

$Object* allocate$SlidingSpinner($Class* clazz) {
	return $of($alloc(SlidingSpinner));
}

void SlidingSpinner::init$($ColorPanel* panel, $JComponent* label) {
	$useLocalCurrentObjectStackCache();
	$set(this, model, $new($SpinnerNumberModel));
	$set(this, slider, $new($JSlider));
	$set(this, spinner, $new($JSpinner, this->model));
	$set(this, panel, panel);
	$set(this, label, label);
	$nc(this->slider)->addChangeListener(this);
	$nc(this->spinner)->addChangeListener(this);
	$var($JSpinner$DefaultEditor, editor, $cast($JSpinner$DefaultEditor, $nc(this->spinner)->getEditor()));
	$ValueFormatter::init(3, false, $($nc(editor)->getTextField()));
	$nc(editor)->setFocusable(false);
	$nc(this->spinner)->setFocusable(false);
}

$JComponent* SlidingSpinner::getLabel() {
	return this->label;
}

$JSlider* SlidingSpinner::getSlider() {
	return this->slider;
}

$JSpinner* SlidingSpinner::getSpinner() {
	return this->spinner;
}

float SlidingSpinner::getValue() {
	return this->value;
}

void SlidingSpinner::setValue(float value) {
	int32_t min = $nc(this->slider)->getMinimum();
	int32_t max = $nc(this->slider)->getMaximum();
	this->internal = true;
	$nc(this->slider)->setValue(min + $cast(int32_t, (value * (float)(max - min))));
	$nc(this->spinner)->setValue($($Integer::valueOf($nc(this->slider)->getValue())));
	this->internal = false;
	this->value = value;
}

void SlidingSpinner::setRange(int32_t min, int32_t max) {
	$useLocalCurrentObjectStackCache();
	this->internal = true;
	$nc(this->slider)->setMinimum(min);
	$nc(this->slider)->setMaximum(max);
	$nc(this->model)->setMinimum($($Integer::valueOf(min)));
	$nc(this->model)->setMaximum($($Integer::valueOf(max)));
	this->internal = false;
}

void SlidingSpinner::setVisible(bool visible) {
	$nc(this->label)->setVisible(visible);
	$nc(this->slider)->setVisible(visible);
	$nc(this->spinner)->setVisible(visible);
}

bool SlidingSpinner::isVisible() {
	return $nc(this->slider)->isVisible();
}

void SlidingSpinner::stateChanged($ChangeEvent* event) {
	$useLocalCurrentObjectStackCache();
	if (!this->internal) {
		if ($equals(this->spinner, $nc(event)->getSource())) {
			$var($Object, value, $nc(this->spinner)->getValue());
			if ($instanceOf($Integer, value)) {
				this->internal = true;
				$nc(this->slider)->setValue($nc(($cast($Integer, value)))->intValue());
				this->internal = false;
			}
		}
		int32_t value = $nc(this->slider)->getValue();
		this->internal = true;
		$nc(this->spinner)->setValue($($Integer::valueOf(value)));
		this->internal = false;
		int32_t min = $nc(this->slider)->getMinimum();
		int32_t max = $nc(this->slider)->getMaximum();
		this->value = (float)(value - min) / (float)(max - min);
		$nc(this->panel)->colorChanged();
	}
}

SlidingSpinner::SlidingSpinner() {
}

$Class* SlidingSpinner::load$($String* name, bool initialize) {
	$loadClass(SlidingSpinner, name, initialize, &_SlidingSpinner_ClassInfo_, allocate$SlidingSpinner);
	return class$;
}

$Class* SlidingSpinner::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax