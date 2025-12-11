#include <java/awt/peer/DialogPeer.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _DialogPeer_MethodInfo_[] = {
	{"blockWindows", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/awt/Window;>;)V", $PUBLIC | $ABSTRACT},
	{"setResizable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DialogPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.DialogPeer",
	nullptr,
	"java.awt.peer.WindowPeer",
	nullptr,
	_DialogPeer_MethodInfo_
};

$Object* allocate$DialogPeer($Class* clazz) {
	return $of($alloc(DialogPeer));
}

$Class* DialogPeer::load$($String* name, bool initialize) {
	$loadClass(DialogPeer, name, initialize, &_DialogPeer_ClassInfo_, allocate$DialogPeer);
	return class$;
}

$Class* DialogPeer::class$ = nullptr;

		} // peer
	} // awt
} // java