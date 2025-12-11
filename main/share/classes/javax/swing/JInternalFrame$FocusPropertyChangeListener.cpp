#include <javax/swing/JInternalFrame$FocusPropertyChangeListener.h>

#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;

namespace javax {
	namespace swing {

$MethodInfo _JInternalFrame$FocusPropertyChangeListener_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JInternalFrame$FocusPropertyChangeListener::*)()>(&JInternalFrame$FocusPropertyChangeListener::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JInternalFrame$FocusPropertyChangeListener_InnerClassesInfo_[] = {
	{"javax.swing.JInternalFrame$FocusPropertyChangeListener", "javax.swing.JInternalFrame", "FocusPropertyChangeListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JInternalFrame$FocusPropertyChangeListener_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JInternalFrame$FocusPropertyChangeListener",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	_JInternalFrame$FocusPropertyChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_JInternalFrame$FocusPropertyChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JInternalFrame"
};

$Object* allocate$JInternalFrame$FocusPropertyChangeListener($Class* clazz) {
	return $of($alloc(JInternalFrame$FocusPropertyChangeListener));
}

void JInternalFrame$FocusPropertyChangeListener::init$() {
}

void JInternalFrame$FocusPropertyChangeListener::propertyChange($PropertyChangeEvent* e) {
	if ($nc(e)->getPropertyName() == "permanentFocusOwner"_s) {
		$JInternalFrame::updateLastFocusOwner($cast($Component, $(e->getNewValue())));
	}
}

JInternalFrame$FocusPropertyChangeListener::JInternalFrame$FocusPropertyChangeListener() {
}

$Class* JInternalFrame$FocusPropertyChangeListener::load$($String* name, bool initialize) {
	$loadClass(JInternalFrame$FocusPropertyChangeListener, name, initialize, &_JInternalFrame$FocusPropertyChangeListener_ClassInfo_, allocate$JInternalFrame$FocusPropertyChangeListener);
	return class$;
}

$Class* JInternalFrame$FocusPropertyChangeListener::class$ = nullptr;

	} // swing
} // javax