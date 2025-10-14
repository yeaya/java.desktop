#include <java/awt/peer/TextComponentPeer.h>

#include <java/awt/im/InputMethodRequests.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _TextComponentPeer_MethodInfo_[] = {
	{"getCaretPosition", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectionStart", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"select", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setCaretPosition", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setEditable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TextComponentPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.TextComponentPeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_TextComponentPeer_MethodInfo_
};

$Object* allocate$TextComponentPeer($Class* clazz) {
	return $of($alloc(TextComponentPeer));
}

$Class* TextComponentPeer::load$($String* name, bool initialize) {
	$loadClass(TextComponentPeer, name, initialize, &_TextComponentPeer_ClassInfo_, allocate$TextComponentPeer);
	return class$;
}

$Class* TextComponentPeer::class$ = nullptr;

		} // peer
	} // awt
} // java