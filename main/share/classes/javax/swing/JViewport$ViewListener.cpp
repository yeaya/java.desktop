#include <javax/swing/JViewport$ViewListener.h>

#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <javax/swing/JViewport.h>
#include <jcpp.h>

using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JViewport = ::javax::swing::JViewport;

namespace javax {
	namespace swing {

$FieldInfo _JViewport$ViewListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JViewport;", nullptr, $FINAL | $SYNTHETIC, $field(JViewport$ViewListener, this$0)},
	{}
};

$MethodInfo _JViewport$ViewListener_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JViewport;)V", nullptr, $PROTECTED, $method(static_cast<void(JViewport$ViewListener::*)($JViewport*)>(&JViewport$ViewListener::init$))},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JViewport$ViewListener_InnerClassesInfo_[] = {
	{"javax.swing.JViewport$ViewListener", "javax.swing.JViewport", "ViewListener", $PROTECTED},
	{}
};

$ClassInfo _JViewport$ViewListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JViewport$ViewListener",
	"java.awt.event.ComponentAdapter",
	"java.io.Serializable",
	_JViewport$ViewListener_FieldInfo_,
	_JViewport$ViewListener_MethodInfo_,
	nullptr,
	nullptr,
	_JViewport$ViewListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JViewport"
};

$Object* allocate$JViewport$ViewListener($Class* clazz) {
	return $of($alloc(JViewport$ViewListener));
}

int32_t JViewport$ViewListener::hashCode() {
	 return this->$ComponentAdapter::hashCode();
}

bool JViewport$ViewListener::equals(Object$* arg0) {
	 return this->$ComponentAdapter::equals(arg0);
}

$Object* JViewport$ViewListener::clone() {
	 return this->$ComponentAdapter::clone();
}

$String* JViewport$ViewListener::toString() {
	 return this->$ComponentAdapter::toString();
}

void JViewport$ViewListener::finalize() {
	this->$ComponentAdapter::finalize();
}

void JViewport$ViewListener::init$($JViewport* this$0) {
	$set(this, this$0, this$0);
	$ComponentAdapter::init$();
}

void JViewport$ViewListener::componentResized($ComponentEvent* e) {
	this->this$0->fireStateChanged();
	this->this$0->revalidate();
}

JViewport$ViewListener::JViewport$ViewListener() {
}

$Class* JViewport$ViewListener::load$($String* name, bool initialize) {
	$loadClass(JViewport$ViewListener, name, initialize, &_JViewport$ViewListener_ClassInfo_, allocate$JViewport$ViewListener);
	return class$;
}

$Class* JViewport$ViewListener::class$ = nullptr;

	} // swing
} // javax