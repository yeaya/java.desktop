#include <java/awt/peer/ChoicePeer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _ChoicePeer_MethodInfo_[] = {
	{"add", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAll", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"select", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ChoicePeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.ChoicePeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_ChoicePeer_MethodInfo_
};

$Object* allocate$ChoicePeer($Class* clazz) {
	return $of($alloc(ChoicePeer));
}

$Class* ChoicePeer::load$($String* name, bool initialize) {
	$loadClass(ChoicePeer, name, initialize, &_ChoicePeer_ClassInfo_, allocate$ChoicePeer);
	return class$;
}

$Class* ChoicePeer::class$ = nullptr;

		} // peer
	} // awt
} // java