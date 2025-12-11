#include <java/awt/peer/LabelPeer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _LabelPeer_MethodInfo_[] = {
	{"setAlignment", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LabelPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.LabelPeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_LabelPeer_MethodInfo_
};

$Object* allocate$LabelPeer($Class* clazz) {
	return $of($alloc(LabelPeer));
}

$Class* LabelPeer::load$($String* name, bool initialize) {
	$loadClass(LabelPeer, name, initialize, &_LabelPeer_ClassInfo_, allocate$LabelPeer);
	return class$;
}

$Class* LabelPeer::class$ = nullptr;

		} // peer
	} // awt
} // java