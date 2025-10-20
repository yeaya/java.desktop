#include <javax/swing/plaf/basic/BasicScrollBarUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
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
#include <javax/swing/JScrollBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$ModelListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <jcpp.h>

#undef WHEN_FOCUSED

using $Component = ::java::awt::Component;
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
using $JScrollBar = ::javax::swing::JScrollBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $BasicScrollBarUI$ModelListener = ::javax::swing::plaf::basic::BasicScrollBarUI$ModelListener;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicScrollBarUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicScrollBarUI$Handler, this$0)},
	{}
};

$MethodInfo _BasicScrollBarUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicScrollBarUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollBarUI$Handler::*)($BasicScrollBarUI*)>(&BasicScrollBarUI$Handler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicScrollBarUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollBarUI$Handler", "javax.swing.plaf.basic.BasicScrollBarUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicScrollBarUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollBarUI$Handler",
	"java.lang.Object",
	"java.awt.event.FocusListener,java.beans.PropertyChangeListener",
	_BasicScrollBarUI$Handler_FieldInfo_,
	_BasicScrollBarUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollBarUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollBarUI"
};

$Object* allocate$BasicScrollBarUI$Handler($Class* clazz) {
	return $of($alloc(BasicScrollBarUI$Handler));
}

int32_t BasicScrollBarUI$Handler::hashCode() {
	 return this->$FocusListener::hashCode();
}

bool BasicScrollBarUI$Handler::equals(Object$* arg0) {
	 return this->$FocusListener::equals(arg0);
}

$Object* BasicScrollBarUI$Handler::clone() {
	 return this->$FocusListener::clone();
}

$String* BasicScrollBarUI$Handler::toString() {
	 return this->$FocusListener::toString();
}

void BasicScrollBarUI$Handler::finalize() {
	this->$FocusListener::finalize();
}

void BasicScrollBarUI$Handler::init$($BasicScrollBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicScrollBarUI$Handler::focusGained($FocusEvent* e) {
	$nc(this->this$0->scrollbar)->repaint();
}

void BasicScrollBarUI$Handler::focusLost($FocusEvent* e) {
	$nc(this->this$0->scrollbar)->repaint();
}

void BasicScrollBarUI$Handler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if ("model"_s == propertyName) {
		$var($BoundedRangeModel, oldModel, $cast($BoundedRangeModel, e->getOldValue()));
		$var($BoundedRangeModel, newModel, $cast($BoundedRangeModel, e->getNewValue()));
		$nc(oldModel)->removeChangeListener(this->this$0->modelListener);
		$nc(newModel)->addChangeListener(this->this$0->modelListener);
		this->this$0->scrollBarValue = $nc(this->this$0->scrollbar)->getValue();
		$nc(this->this$0->scrollbar)->repaint();
		$nc(this->this$0->scrollbar)->revalidate();
	} else if ("orientation"_s == propertyName) {
		this->this$0->updateButtonDirections();
	} else if ("componentOrientation"_s == propertyName) {
		this->this$0->updateButtonDirections();
		$var($InputMap, inputMap, this->this$0->getInputMap($JComponent::WHEN_FOCUSED));
		$SwingUtilities::replaceUIInputMap(this->this$0->scrollbar, $JComponent::WHEN_FOCUSED, inputMap);
	}
}

BasicScrollBarUI$Handler::BasicScrollBarUI$Handler() {
}

$Class* BasicScrollBarUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicScrollBarUI$Handler, name, initialize, &_BasicScrollBarUI$Handler_ClassInfo_, allocate$BasicScrollBarUI$Handler);
	return class$;
}

$Class* BasicScrollBarUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax