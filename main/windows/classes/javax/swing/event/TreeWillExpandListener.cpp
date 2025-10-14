#include <javax/swing/event/TreeWillExpandListener.h>

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

$MethodInfo _TreeWillExpandListener_MethodInfo_[] = {
	{"treeWillCollapse", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.tree.ExpandVetoException"},
	{"treeWillExpand", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.swing.tree.ExpandVetoException"},
	{}
};

$ClassInfo _TreeWillExpandListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.event.TreeWillExpandListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_TreeWillExpandListener_MethodInfo_
};

$Object* allocate$TreeWillExpandListener($Class* clazz) {
	return $of($alloc(TreeWillExpandListener));
}

$Class* TreeWillExpandListener::load$($String* name, bool initialize) {
	$loadClass(TreeWillExpandListener, name, initialize, &_TreeWillExpandListener_ClassInfo_, allocate$TreeWillExpandListener);
	return class$;
}

$Class* TreeWillExpandListener::class$ = nullptr;

		} // event
	} // swing
} // javax