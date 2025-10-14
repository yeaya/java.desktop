#include <java/awt/dnd/DragSourceAdapter.h>

#include <java/awt/dnd/DragSourceDragEvent.h>
#include <java/awt/dnd/DragSourceDropEvent.h>
#include <java/awt/dnd/DragSourceEvent.h>
#include <java/awt/dnd/DragSourceListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DragSourceDragEvent = ::java::awt::dnd::DragSourceDragEvent;
using $DragSourceDropEvent = ::java::awt::dnd::DragSourceDropEvent;
using $DragSourceEvent = ::java::awt::dnd::DragSourceEvent;
using $DragSourceListener = ::java::awt::dnd::DragSourceListener;
using $DragSourceMotionListener = ::java::awt::dnd::DragSourceMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$MethodInfo _DragSourceAdapter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DragSourceAdapter::*)()>(&DragSourceAdapter::init$))},
	{"dragDropEnd", "(Ljava/awt/dnd/DragSourceDropEvent;)V", nullptr, $PUBLIC},
	{"dragEnter", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"dragExit", "(Ljava/awt/dnd/DragSourceEvent;)V", nullptr, $PUBLIC},
	{"dragMouseMoved", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"dragOver", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"dropActionChanged", "(Ljava/awt/dnd/DragSourceDragEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DragSourceAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.dnd.DragSourceAdapter",
	"java.lang.Object",
	"java.awt.dnd.DragSourceListener,java.awt.dnd.DragSourceMotionListener",
	nullptr,
	_DragSourceAdapter_MethodInfo_
};

$Object* allocate$DragSourceAdapter($Class* clazz) {
	return $of($alloc(DragSourceAdapter));
}

int32_t DragSourceAdapter::hashCode() {
	 return this->$DragSourceListener::hashCode();
}

bool DragSourceAdapter::equals(Object$* arg0) {
	 return this->$DragSourceListener::equals(arg0);
}

$Object* DragSourceAdapter::clone() {
	 return this->$DragSourceListener::clone();
}

$String* DragSourceAdapter::toString() {
	 return this->$DragSourceListener::toString();
}

void DragSourceAdapter::finalize() {
	this->$DragSourceListener::finalize();
}

void DragSourceAdapter::init$() {
}

void DragSourceAdapter::dragEnter($DragSourceDragEvent* dsde) {
}

void DragSourceAdapter::dragOver($DragSourceDragEvent* dsde) {
}

void DragSourceAdapter::dragMouseMoved($DragSourceDragEvent* dsde) {
}

void DragSourceAdapter::dropActionChanged($DragSourceDragEvent* dsde) {
}

void DragSourceAdapter::dragExit($DragSourceEvent* dse) {
}

void DragSourceAdapter::dragDropEnd($DragSourceDropEvent* dsde) {
}

DragSourceAdapter::DragSourceAdapter() {
}

$Class* DragSourceAdapter::load$($String* name, bool initialize) {
	$loadClass(DragSourceAdapter, name, initialize, &_DragSourceAdapter_ClassInfo_, allocate$DragSourceAdapter);
	return class$;
}

$Class* DragSourceAdapter::class$ = nullptr;

		} // dnd
	} // awt
} // java