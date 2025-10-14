#include <javax/swing/event/TreeModelListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _TreeModelListener_MethodInfo_[] = {
	{"treeNodesChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"treeNodesInserted", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"treeNodesRemoved", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"treeStructureChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TreeModelListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.TreeModelListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_TreeModelListener_MethodInfo_
};

$Object* allocate$TreeModelListener($Class* clazz) {
	return $of($alloc(TreeModelListener));
}

$Class* TreeModelListener::load$($String* name, bool initialize) {
	$loadClass(TreeModelListener, name, initialize, &_TreeModelListener_ClassInfo_, allocate$TreeModelListener);
	return class$;
}

$Class* TreeModelListener::class$ = nullptr;

		} // event
	} // swing
} // javax