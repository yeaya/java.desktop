#include <java/awt/dnd/DropTargetAdapter.h>

#include <java/awt/dnd/DropTargetDragEvent.h>
#include <java/awt/dnd/DropTargetEvent.h>
#include <jcpp.h>

using $DropTargetDragEvent = ::java::awt::dnd::DropTargetDragEvent;
using $DropTargetEvent = ::java::awt::dnd::DropTargetEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$MethodInfo _DropTargetAdapter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DropTargetAdapter::*)()>(&DropTargetAdapter::init$))},
	{"dragEnter", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC},
	{"dragExit", "(Ljava/awt/dnd/DropTargetEvent;)V", nullptr, $PUBLIC},
	{"dragOver", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC},
	{"dropActionChanged", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DropTargetAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.dnd.DropTargetAdapter",
	"java.lang.Object",
	"java.awt.dnd.DropTargetListener",
	nullptr,
	_DropTargetAdapter_MethodInfo_
};

$Object* allocate$DropTargetAdapter($Class* clazz) {
	return $of($alloc(DropTargetAdapter));
}

void DropTargetAdapter::init$() {
}

void DropTargetAdapter::dragEnter($DropTargetDragEvent* dtde) {
}

void DropTargetAdapter::dragOver($DropTargetDragEvent* dtde) {
}

void DropTargetAdapter::dropActionChanged($DropTargetDragEvent* dtde) {
}

void DropTargetAdapter::dragExit($DropTargetEvent* dte) {
}

DropTargetAdapter::DropTargetAdapter() {
}

$Class* DropTargetAdapter::load$($String* name, bool initialize) {
	$loadClass(DropTargetAdapter, name, initialize, &_DropTargetAdapter_ClassInfo_, allocate$DropTargetAdapter);
	return class$;
}

$Class* DropTargetAdapter::class$ = nullptr;

		} // dnd
	} // awt
} // java