#include <java/awt/peer/MenuComponentPeer.h>

#include <java/awt/Font.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _MenuComponentPeer_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MenuComponentPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.MenuComponentPeer",
	nullptr,
	nullptr,
	nullptr,
	_MenuComponentPeer_MethodInfo_
};

$Object* allocate$MenuComponentPeer($Class* clazz) {
	return $of($alloc(MenuComponentPeer));
}

$Class* MenuComponentPeer::load$($String* name, bool initialize) {
	$loadClass(MenuComponentPeer, name, initialize, &_MenuComponentPeer_ClassInfo_, allocate$MenuComponentPeer);
	return class$;
}

$Class* MenuComponentPeer::class$ = nullptr;

		} // peer
	} // awt
} // java