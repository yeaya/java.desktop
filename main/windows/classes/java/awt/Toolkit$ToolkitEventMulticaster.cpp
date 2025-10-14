#include <java/awt/Toolkit$ToolkitEventMulticaster.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/awt/event/ComponentListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $Toolkit = ::java::awt::Toolkit;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;

namespace java {
	namespace awt {

$MethodInfo _Toolkit$ToolkitEventMulticaster_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/event/AWTEventListener;Ljava/awt/event/AWTEventListener;)V", nullptr, 0, $method(static_cast<void(Toolkit$ToolkitEventMulticaster::*)($AWTEventListener*,$AWTEventListener*)>(&Toolkit$ToolkitEventMulticaster::init$))},
	{"add", "(Ljava/awt/event/AWTEventListener;Ljava/awt/event/AWTEventListener;)Ljava/awt/event/AWTEventListener;", nullptr, $STATIC, $method(static_cast<$AWTEventListener*(*)($AWTEventListener*,$AWTEventListener*)>(&Toolkit$ToolkitEventMulticaster::add))},
	{"eventDispatched", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/awt/event/AWTEventListener;Ljava/awt/event/AWTEventListener;)Ljava/awt/event/AWTEventListener;", nullptr, $STATIC, $method(static_cast<$AWTEventListener*(*)($AWTEventListener*,$AWTEventListener*)>(&Toolkit$ToolkitEventMulticaster::remove))},
	{"remove", "(Ljava/util/EventListener;)Ljava/util/EventListener;", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Toolkit$ToolkitEventMulticaster_InnerClassesInfo_[] = {
	{"java.awt.Toolkit$ToolkitEventMulticaster", "java.awt.Toolkit", "ToolkitEventMulticaster", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Toolkit$ToolkitEventMulticaster_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Toolkit$ToolkitEventMulticaster",
	"java.awt.AWTEventMulticaster",
	"java.awt.event.AWTEventListener",
	nullptr,
	_Toolkit$ToolkitEventMulticaster_MethodInfo_,
	nullptr,
	nullptr,
	_Toolkit$ToolkitEventMulticaster_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Toolkit"
};

$Object* allocate$Toolkit$ToolkitEventMulticaster($Class* clazz) {
	return $of($alloc(Toolkit$ToolkitEventMulticaster));
}

int32_t Toolkit$ToolkitEventMulticaster::hashCode() {
	 return this->$AWTEventMulticaster::hashCode();
}

bool Toolkit$ToolkitEventMulticaster::equals(Object$* arg0) {
	 return this->$AWTEventMulticaster::equals(arg0);
}

$Object* Toolkit$ToolkitEventMulticaster::clone() {
	 return this->$AWTEventMulticaster::clone();
}

$String* Toolkit$ToolkitEventMulticaster::toString() {
	 return this->$AWTEventMulticaster::toString();
}

void Toolkit$ToolkitEventMulticaster::finalize() {
	this->$AWTEventMulticaster::finalize();
}

void Toolkit$ToolkitEventMulticaster::init$($AWTEventListener* a, $AWTEventListener* b) {
	$AWTEventMulticaster::init$(a, b);
}

$AWTEventListener* Toolkit$ToolkitEventMulticaster::add($AWTEventListener* a, $AWTEventListener* b) {
	$init(Toolkit$ToolkitEventMulticaster);
	if (a == nullptr) {
		return b;
	}
	if (b == nullptr) {
		return a;
	}
	return $new(Toolkit$ToolkitEventMulticaster, a, b);
}

$AWTEventListener* Toolkit$ToolkitEventMulticaster::remove($AWTEventListener* l, $AWTEventListener* oldl) {
	$init(Toolkit$ToolkitEventMulticaster);
	return $cast($AWTEventListener, removeInternal(l, oldl));
}

$EventListener* Toolkit$ToolkitEventMulticaster::remove($EventListener* oldl) {
	if (oldl == this->a) {
		return this->b;
	}
	if (oldl == this->b) {
		return this->a;
	}
	$var($AWTEventListener, a2, $cast($AWTEventListener, removeInternal(this->a, oldl)));
	$var($AWTEventListener, b2, $cast($AWTEventListener, removeInternal(this->b, oldl)));
	if ($equals(a2, this->a) && $equals(b2, this->b)) {
		return static_cast<$EventListener*>(static_cast<$ComponentListener*>(static_cast<$AWTEventMulticaster*>(this)));
	}
	return add(a2, b2);
}

void Toolkit$ToolkitEventMulticaster::eventDispatched($AWTEvent* event) {
	$nc(($cast($AWTEventListener, this->a)))->eventDispatched(event);
	$nc(($cast($AWTEventListener, this->b)))->eventDispatched(event);
}

Toolkit$ToolkitEventMulticaster::Toolkit$ToolkitEventMulticaster() {
}

$Class* Toolkit$ToolkitEventMulticaster::load$($String* name, bool initialize) {
	$loadClass(Toolkit$ToolkitEventMulticaster, name, initialize, &_Toolkit$ToolkitEventMulticaster_ClassInfo_, allocate$Toolkit$ToolkitEventMulticaster);
	return class$;
}

$Class* Toolkit$ToolkitEventMulticaster::class$ = nullptr;

	} // awt
} // java