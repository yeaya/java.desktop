#include <java/awt/dnd/peer/DragSourceContextPeer.h>

#include <java/awt/Cursor.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Cursor = ::java::awt::Cursor;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {

$MethodInfo _DragSourceContextPeer_MethodInfo_[] = {
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC | $ABSTRACT},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"startDrag", "(Ljava/awt/dnd/DragSourceContext;Ljava/awt/Cursor;Ljava/awt/Image;Ljava/awt/Point;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"transferablesFlavorsChanged", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DragSourceContextPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.dnd.peer.DragSourceContextPeer",
	nullptr,
	nullptr,
	nullptr,
	_DragSourceContextPeer_MethodInfo_
};

$Object* allocate$DragSourceContextPeer($Class* clazz) {
	return $of($alloc(DragSourceContextPeer));
}

$Class* DragSourceContextPeer::load$($String* name, bool initialize) {
	$loadClass(DragSourceContextPeer, name, initialize, &_DragSourceContextPeer_ClassInfo_, allocate$DragSourceContextPeer);
	return class$;
}

$Class* DragSourceContextPeer::class$ = nullptr;

			} // peer
		} // dnd
	} // awt
} // java