#include <java/awt/peer/CanvasPeer.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _CanvasPeer_MethodInfo_[] = {
	{"getAppropriateGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CanvasPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.CanvasPeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_CanvasPeer_MethodInfo_
};

$Object* allocate$CanvasPeer($Class* clazz) {
	return $of($alloc(CanvasPeer));
}

$Class* CanvasPeer::load$($String* name, bool initialize) {
	$loadClass(CanvasPeer, name, initialize, &_CanvasPeer_ClassInfo_, allocate$CanvasPeer);
	return class$;
}

$Class* CanvasPeer::class$ = nullptr;

		} // peer
	} // awt
} // java