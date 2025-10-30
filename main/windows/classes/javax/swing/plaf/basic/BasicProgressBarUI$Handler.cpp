#include <javax/swing/plaf/basic/BasicProgressBarUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/event/HierarchyEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JProgressBar.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/basic/BasicProgressBarUI.h>
#include <jcpp.h>

#undef DISPLAYABILITY_CHANGED

using $Component = ::java::awt::Component;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $HierarchyListener = ::java::awt::event::HierarchyListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JProgressBar = ::javax::swing::JProgressBar;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicProgressBarUI = ::javax::swing::plaf::basic::BasicProgressBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicProgressBarUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicProgressBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicProgressBarUI$Handler, this$0)},
	{}
};

$MethodInfo _BasicProgressBarUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicProgressBarUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicProgressBarUI$Handler::*)($BasicProgressBarUI*)>(&BasicProgressBarUI$Handler::init$))},
	{"hierarchyChanged", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicProgressBarUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicProgressBarUI$Handler", "javax.swing.plaf.basic.BasicProgressBarUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicProgressBarUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicProgressBarUI$Handler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.beans.PropertyChangeListener,java.awt.event.HierarchyListener",
	_BasicProgressBarUI$Handler_FieldInfo_,
	_BasicProgressBarUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicProgressBarUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicProgressBarUI"
};

$Object* allocate$BasicProgressBarUI$Handler($Class* clazz) {
	return $of($alloc(BasicProgressBarUI$Handler));
}

int32_t BasicProgressBarUI$Handler::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool BasicProgressBarUI$Handler::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* BasicProgressBarUI$Handler::clone() {
	 return this->$ChangeListener::clone();
}

$String* BasicProgressBarUI$Handler::toString() {
	 return this->$ChangeListener::toString();
}

void BasicProgressBarUI$Handler::finalize() {
	this->$ChangeListener::finalize();
}

void BasicProgressBarUI$Handler::init$($BasicProgressBarUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicProgressBarUI$Handler::stateChanged($ChangeEvent* e) {
	$var($BoundedRangeModel, model, $nc(this->this$0->progressBar)->getModel());
	int32_t var$0 = $nc(model)->getMaximum();
	int32_t newRange = var$0 - model->getMinimum();
	int32_t newPercent = 0;
	int32_t oldPercent = this->this$0->getCachedPercent();
	if (newRange > 0) {
		newPercent = (int32_t)($div((100 * (int64_t)model->getValue()), newRange));
	} else {
		newPercent = 0;
	}
	if (newPercent != oldPercent) {
		this->this$0->setCachedPercent(newPercent);
		$nc(this->this$0->progressBar)->repaint();
	}
}

void BasicProgressBarUI$Handler::propertyChange($PropertyChangeEvent* e) {
	$var($String, prop, $nc(e)->getPropertyName());
	if ("indeterminate"_s == prop) {
		if ($nc(this->this$0->progressBar)->isIndeterminate()) {
			this->this$0->initIndeterminateValues();
		} else {
			this->this$0->cleanUpIndeterminateValues();
		}
		$nc(this->this$0->progressBar)->repaint();
	}
}

void BasicProgressBarUI$Handler::hierarchyChanged($HierarchyEvent* he) {
	if (((int64_t)($nc(he)->getChangeFlags() & (uint64_t)(int64_t)$HierarchyEvent::DISPLAYABILITY_CHANGED)) != 0) {
		if ($nc(this->this$0->progressBar)->isIndeterminate()) {
			if ($nc(this->this$0->progressBar)->isDisplayable()) {
				this->this$0->startAnimationTimer();
			} else {
				this->this$0->stopAnimationTimer();
			}
		}
	}
}

BasicProgressBarUI$Handler::BasicProgressBarUI$Handler() {
}

$Class* BasicProgressBarUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicProgressBarUI$Handler, name, initialize, &_BasicProgressBarUI$Handler_ClassInfo_, allocate$BasicProgressBarUI$Handler);
	return class$;
}

$Class* BasicProgressBarUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax