#include <javax/swing/event/TreeExpansionListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;

namespace javax {
	namespace swing {
		namespace event {

$MethodInfo _TreeExpansionListener_MethodInfo_[] = {
	{"treeCollapsed", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"treeExpanded", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TreeExpansionListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.TreeExpansionListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_TreeExpansionListener_MethodInfo_
};

$Object* allocate$TreeExpansionListener($Class* clazz) {
	return $of($alloc(TreeExpansionListener));
}

$Class* TreeExpansionListener::load$($String* name, bool initialize) {
	$loadClass(TreeExpansionListener, name, initialize, &_TreeExpansionListener_ClassInfo_, allocate$TreeExpansionListener);
	return class$;
}

$Class* TreeExpansionListener::class$ = nullptr;

		} // event
	} // swing
} // javax