#include <javax/swing/plaf/basic/BasicSliderUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef WHEN_FOCUSED

using $Component = ::java::awt::Component;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JSlider = ::javax::swing::JSlider;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSliderUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$Handler, this$0)},
	{}
};

$MethodInfo _BasicSliderUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSliderUI$Handler::*)($BasicSliderUI*)>(&BasicSliderUI$Handler::init$))},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSliderUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSliderUI$Handler", "javax.swing.plaf.basic.BasicSliderUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicSliderUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicSliderUI$Handler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.awt.event.ComponentListener,java.awt.event.FocusListener,java.beans.PropertyChangeListener",
	_BasicSliderUI$Handler_FieldInfo_,
	_BasicSliderUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSliderUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSliderUI"
};

$Object* allocate$BasicSliderUI$Handler($Class* clazz) {
	return $of($alloc(BasicSliderUI$Handler));
}

int32_t BasicSliderUI$Handler::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool BasicSliderUI$Handler::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* BasicSliderUI$Handler::clone() {
	 return this->$ChangeListener::clone();
}

$String* BasicSliderUI$Handler::toString() {
	 return this->$ChangeListener::toString();
}

void BasicSliderUI$Handler::finalize() {
	this->$ChangeListener::finalize();
}

void BasicSliderUI$Handler::init$($BasicSliderUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicSliderUI$Handler::stateChanged($ChangeEvent* e) {
	if (!this->this$0->isDragging$) {
		this->this$0->calculateThumbLocation();
		$nc(this->this$0->slider)->repaint();
	}
	this->this$0->lastValue = $nc(this->this$0->slider)->getValue();
}

void BasicSliderUI$Handler::componentHidden($ComponentEvent* e) {
}

void BasicSliderUI$Handler::componentMoved($ComponentEvent* e) {
}

void BasicSliderUI$Handler::componentResized($ComponentEvent* e) {
	this->this$0->calculateGeometry();
	$nc(this->this$0->slider)->repaint();
}

void BasicSliderUI$Handler::componentShown($ComponentEvent* e) {
}

void BasicSliderUI$Handler::focusGained($FocusEvent* e) {
	$nc(this->this$0->slider)->repaint();
}

void BasicSliderUI$Handler::focusLost($FocusEvent* e) {
	$nc(this->this$0->slider)->repaint();
}

void BasicSliderUI$Handler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if (propertyName == "orientation"_s || propertyName == "inverted"_s || propertyName == "labelTable"_s || propertyName == "majorTickSpacing"_s || propertyName == "minorTickSpacing"_s || propertyName == "paintTicks"_s || propertyName == "paintTrack"_s || propertyName == "font"_s || $SwingUtilities2::isScaleChanged(e) || propertyName == "paintLabels"_s || propertyName == "Slider.paintThumbArrowShape"_s) {
		this->this$0->checkedLabelBaselines = false;
		this->this$0->calculateGeometry();
		$nc(this->this$0->slider)->repaint();
	} else if (propertyName == "componentOrientation"_s) {
		this->this$0->calculateGeometry();
		$nc(this->this$0->slider)->repaint();
		$var($InputMap, km, this->this$0->getInputMap($JComponent::WHEN_FOCUSED, this->this$0->slider));
		$SwingUtilities::replaceUIInputMap(this->this$0->slider, $JComponent::WHEN_FOCUSED, km);
	} else if (propertyName == "model"_s) {
		$nc(($cast($BoundedRangeModel, $(e->getOldValue()))))->removeChangeListener(this->this$0->changeListener);
		$nc(($cast($BoundedRangeModel, $(e->getNewValue()))))->addChangeListener(this->this$0->changeListener);
		this->this$0->calculateThumbLocation();
		$nc(this->this$0->slider)->repaint();
	}
}

BasicSliderUI$Handler::BasicSliderUI$Handler() {
}

$Class* BasicSliderUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicSliderUI$Handler, name, initialize, &_BasicSliderUI$Handler_ClassInfo_, allocate$BasicSliderUI$Handler);
	return class$;
}

$Class* BasicSliderUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax