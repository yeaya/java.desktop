#include <java/awt/peer/ButtonPeer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _ButtonPeer_MethodInfo_[] = {
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ButtonPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.ButtonPeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_ButtonPeer_MethodInfo_
};

$Object* allocate$ButtonPeer($Class* clazz) {
	return $of($alloc(ButtonPeer));
}

$Class* ButtonPeer::load$($String* name, bool initialize) {
	$loadClass(ButtonPeer, name, initialize, &_ButtonPeer_ClassInfo_, allocate$ButtonPeer);
	return class$;
}

$Class* ButtonPeer::class$ = nullptr;

		} // peer
	} // awt
} // java