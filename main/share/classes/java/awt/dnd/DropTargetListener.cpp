#include <java/awt/dnd/DropTargetListener.h>

#include <java/awt/dnd/DropTargetDragEvent.h>
#include <java/awt/dnd/DropTargetDropEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$MethodInfo _DropTargetListener_MethodInfo_[] = {
	{"dragEnter", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"dragExit", "(Ljava/awt/dnd/DropTargetEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"dragOver", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"drop", "(Ljava/awt/dnd/DropTargetDropEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"dropActionChanged", "(Ljava/awt/dnd/DropTargetDragEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DropTargetListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.dnd.DropTargetListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_DropTargetListener_MethodInfo_
};

$Object* allocate$DropTargetListener($Class* clazz) {
	return $of($alloc(DropTargetListener));
}

$Class* DropTargetListener::load$($String* name, bool initialize) {
	$loadClass(DropTargetListener, name, initialize, &_DropTargetListener_ClassInfo_, allocate$DropTargetListener);
	return class$;
}

$Class* DropTargetListener::class$ = nullptr;

		} // dnd
	} // awt
} // java