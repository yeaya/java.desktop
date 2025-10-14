#include <javax/swing/event/SwingPropertyChangeSupport$1.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/SwingPropertyChangeSupport.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingPropertyChangeSupport = ::javax::swing::event::SwingPropertyChangeSupport;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _SwingPropertyChangeSupport$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/event/SwingPropertyChangeSupport;", nullptr, $FINAL | $SYNTHETIC, $field(SwingPropertyChangeSupport$1, this$0)},
	{"val$evt", "Ljava/beans/PropertyChangeEvent;", nullptr, $FINAL | $SYNTHETIC, $field(SwingPropertyChangeSupport$1, val$evt)},
	{}
};

$MethodInfo _SwingPropertyChangeSupport$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/event/SwingPropertyChangeSupport;Ljava/beans/PropertyChangeEvent;)V", "()V", 0, $method(static_cast<void(SwingPropertyChangeSupport$1::*)($SwingPropertyChangeSupport*,$PropertyChangeEvent*)>(&SwingPropertyChangeSupport$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SwingPropertyChangeSupport$1_EnclosingMethodInfo_ = {
	"javax.swing.event.SwingPropertyChangeSupport",
	"firePropertyChange",
	"(Ljava/beans/PropertyChangeEvent;)V"
};

$InnerClassInfo _SwingPropertyChangeSupport$1_InnerClassesInfo_[] = {
	{"javax.swing.event.SwingPropertyChangeSupport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingPropertyChangeSupport$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.event.SwingPropertyChangeSupport$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_SwingPropertyChangeSupport$1_FieldInfo_,
	_SwingPropertyChangeSupport$1_MethodInfo_,
	nullptr,
	&_SwingPropertyChangeSupport$1_EnclosingMethodInfo_,
	_SwingPropertyChangeSupport$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.event.SwingPropertyChangeSupport"
};

$Object* allocate$SwingPropertyChangeSupport$1($Class* clazz) {
	return $of($alloc(SwingPropertyChangeSupport$1));
}

void SwingPropertyChangeSupport$1::init$($SwingPropertyChangeSupport* this$0, $PropertyChangeEvent* val$evt) {
	$set(this, this$0, this$0);
	$set(this, val$evt, val$evt);
}

void SwingPropertyChangeSupport$1::run() {
	this->this$0->firePropertyChange(this->val$evt);
}

SwingPropertyChangeSupport$1::SwingPropertyChangeSupport$1() {
}

$Class* SwingPropertyChangeSupport$1::load$($String* name, bool initialize) {
	$loadClass(SwingPropertyChangeSupport$1, name, initialize, &_SwingPropertyChangeSupport$1_ClassInfo_, allocate$SwingPropertyChangeSupport$1);
	return class$;
}

$Class* SwingPropertyChangeSupport$1::class$ = nullptr;

		} // event
	} // swing
} // javax