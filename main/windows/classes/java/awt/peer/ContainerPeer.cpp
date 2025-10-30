#include <java/awt/peer/ContainerPeer.h>

#include <java/awt/Insets.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _ContainerPeer_MethodInfo_[] = {
	{"beginLayout", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"beginValidate", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"endLayout", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"endValidate", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ContainerPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.ContainerPeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_ContainerPeer_MethodInfo_
};

$Object* allocate$ContainerPeer($Class* clazz) {
	return $of($alloc(ContainerPeer));
}

$Class* ContainerPeer::load$($String* name, bool initialize) {
	$loadClass(ContainerPeer, name, initialize, &_ContainerPeer_ClassInfo_, allocate$ContainerPeer);
	return class$;
}

$Class* ContainerPeer::class$ = nullptr;

		} // peer
	} // awt
} // java