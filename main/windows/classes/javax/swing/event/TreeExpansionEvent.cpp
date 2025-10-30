#include <javax/swing/event/TreeExpansionEvent.h>

#include <java/util/EventObject.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _TreeExpansionEvent_FieldInfo_[] = {
	{"path", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(TreeExpansionEvent, path)},
	{}
};

$MethodInfo _TreeExpansionEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC, $method(static_cast<void(TreeExpansionEvent::*)(Object$*,$TreePath*)>(&TreeExpansionEvent::init$))},
	{"getPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TreeExpansionEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.TreeExpansionEvent",
	"java.util.EventObject",
	nullptr,
	_TreeExpansionEvent_FieldInfo_,
	_TreeExpansionEvent_MethodInfo_
};

$Object* allocate$TreeExpansionEvent($Class* clazz) {
	return $of($alloc(TreeExpansionEvent));
}

void TreeExpansionEvent::init$(Object$* source, $TreePath* path) {
	$EventObject::init$(source);
	$set(this, path, path);
}

$TreePath* TreeExpansionEvent::getPath() {
	return this->path;
}

TreeExpansionEvent::TreeExpansionEvent() {
}

$Class* TreeExpansionEvent::load$($String* name, bool initialize) {
	$loadClass(TreeExpansionEvent, name, initialize, &_TreeExpansionEvent_ClassInfo_, allocate$TreeExpansionEvent);
	return class$;
}

$Class* TreeExpansionEvent::class$ = nullptr;

		} // event
	} // swing
} // javax