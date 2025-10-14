#include <java/awt/peer/FontPeer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace awt {
		namespace peer {

$ClassInfo _FontPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.FontPeer"
};

$Object* allocate$FontPeer($Class* clazz) {
	return $of($alloc(FontPeer));
}

$Class* FontPeer::load$($String* name, bool initialize) {
	$loadClass(FontPeer, name, initialize, &_FontPeer_ClassInfo_, allocate$FontPeer);
	return class$;
}

$Class* FontPeer::class$ = nullptr;

		} // peer
	} // awt
} // java