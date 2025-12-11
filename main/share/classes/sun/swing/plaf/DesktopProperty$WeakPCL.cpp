#include <sun/swing/plaf/DesktopProperty$WeakPCL.h>

#include <java/awt/Toolkit.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <sun/swing/plaf/DesktopProperty.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $DesktopProperty = ::sun::swing::plaf::DesktopProperty;

namespace sun {
	namespace swing {
		namespace plaf {

$FieldInfo _DesktopProperty$WeakPCL_FieldInfo_[] = {
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DesktopProperty$WeakPCL, key)},
	{"laf", "Ljavax/swing/LookAndFeel;", nullptr, $PRIVATE, $field(DesktopProperty$WeakPCL, laf)},
	{}
};

$MethodInfo _DesktopProperty$WeakPCL_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/swing/plaf/DesktopProperty;Ljava/lang/String;Ljavax/swing/LookAndFeel;)V", nullptr, 0, $method(static_cast<void(DesktopProperty$WeakPCL::*)($DesktopProperty*,$String*,$LookAndFeel*)>(&DesktopProperty$WeakPCL::init$))},
	{"dispose", "()V", nullptr, 0},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DesktopProperty$WeakPCL_InnerClassesInfo_[] = {
	{"sun.swing.plaf.DesktopProperty$WeakPCL", "sun.swing.plaf.DesktopProperty", "WeakPCL", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DesktopProperty$WeakPCL_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.DesktopProperty$WeakPCL",
	"java.lang.ref.WeakReference",
	"java.beans.PropertyChangeListener",
	_DesktopProperty$WeakPCL_FieldInfo_,
	_DesktopProperty$WeakPCL_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Lsun/swing/plaf/DesktopProperty;>;Ljava/beans/PropertyChangeListener;",
	nullptr,
	_DesktopProperty$WeakPCL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.DesktopProperty"
};

$Object* allocate$DesktopProperty$WeakPCL($Class* clazz) {
	return $of($alloc(DesktopProperty$WeakPCL));
}

$Object* DesktopProperty$WeakPCL::clone() {
	 return this->$WeakReference::clone();
}

int32_t DesktopProperty$WeakPCL::hashCode() {
	 return this->$WeakReference::hashCode();
}

bool DesktopProperty$WeakPCL::equals(Object$* arg0) {
	 return this->$WeakReference::equals(arg0);
}

$String* DesktopProperty$WeakPCL::toString() {
	 return this->$WeakReference::toString();
}

void DesktopProperty$WeakPCL::finalize() {
	this->$WeakReference::finalize();
}

void DesktopProperty$WeakPCL::init$($DesktopProperty* target, $String* key, $LookAndFeel* laf) {
	$init($DesktopProperty);
	$WeakReference::init$(target, $DesktopProperty::queue);
	$set(this, key, key);
	$set(this, laf, laf);
}

void DesktopProperty$WeakPCL::propertyChange($PropertyChangeEvent* pce) {
	$var($DesktopProperty, property, $cast($DesktopProperty, get()));
	if (property == nullptr || this->laf != $UIManager::getLookAndFeel()) {
		dispose();
	} else {
		$nc(property)->invalidate(this->laf);
		property->updateUI();
	}
}

void DesktopProperty$WeakPCL::dispose() {
	$nc($($Toolkit::getDefaultToolkit()))->removePropertyChangeListener(this->key, this);
}

DesktopProperty$WeakPCL::DesktopProperty$WeakPCL() {
}

$Class* DesktopProperty$WeakPCL::load$($String* name, bool initialize) {
	$loadClass(DesktopProperty$WeakPCL, name, initialize, &_DesktopProperty$WeakPCL_ClassInfo_, allocate$DesktopProperty$WeakPCL);
	return class$;
}

$Class* DesktopProperty$WeakPCL::class$ = nullptr;

		} // plaf
	} // swing
} // sun