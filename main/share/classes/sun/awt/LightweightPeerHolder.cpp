#include <sun/awt/LightweightPeerHolder.h>

#include <java/awt/peer/LightweightPeer.h>
#include <sun/awt/NullComponentPeer.h>
#include <jcpp.h>

using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullComponentPeer = ::sun::awt::NullComponentPeer;

namespace sun {
	namespace awt {

$FieldInfo _LightweightPeerHolder_FieldInfo_[] = {
	{"lightweightMarker", "Ljava/awt/peer/LightweightPeer;", nullptr, $STATIC | $FINAL, $staticField(LightweightPeerHolder, lightweightMarker)},
	{}
};

$MethodInfo _LightweightPeerHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LightweightPeerHolder::*)()>(&LightweightPeerHolder::init$))},
	{}
};

$ClassInfo _LightweightPeerHolder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.LightweightPeerHolder",
	"java.lang.Object",
	nullptr,
	_LightweightPeerHolder_FieldInfo_,
	_LightweightPeerHolder_MethodInfo_
};

$Object* allocate$LightweightPeerHolder($Class* clazz) {
	return $of($alloc(LightweightPeerHolder));
}

$LightweightPeer* LightweightPeerHolder::lightweightMarker = nullptr;

void LightweightPeerHolder::init$() {
}

void clinit$LightweightPeerHolder($Class* class$) {
	$assignStatic(LightweightPeerHolder::lightweightMarker, $new($NullComponentPeer));
}

LightweightPeerHolder::LightweightPeerHolder() {
}

$Class* LightweightPeerHolder::load$($String* name, bool initialize) {
	$loadClass(LightweightPeerHolder, name, initialize, &_LightweightPeerHolder_ClassInfo_, clinit$LightweightPeerHolder, allocate$LightweightPeerHolder);
	return class$;
}

$Class* LightweightPeerHolder::class$ = nullptr;

	} // awt
} // sun