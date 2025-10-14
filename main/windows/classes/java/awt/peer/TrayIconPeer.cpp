#include <java/awt/peer/TrayIconPeer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _TrayIconPeer_MethodInfo_[] = {
	{"displayMessage", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"setToolTip", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"showPopupMenu", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"updateImage", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TrayIconPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.TrayIconPeer",
	nullptr,
	nullptr,
	nullptr,
	_TrayIconPeer_MethodInfo_
};

$Object* allocate$TrayIconPeer($Class* clazz) {
	return $of($alloc(TrayIconPeer));
}

$Class* TrayIconPeer::load$($String* name, bool initialize) {
	$loadClass(TrayIconPeer, name, initialize, &_TrayIconPeer_ClassInfo_, allocate$TrayIconPeer);
	return class$;
}

$Class* TrayIconPeer::class$ = nullptr;

		} // peer
	} // awt
} // java