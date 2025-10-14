#include <java/awt/peer/TextFieldPeer.h>

#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $TextComponentPeer = ::java::awt::peer::TextComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _TextFieldPeer_MethodInfo_[] = {
	{"getMinimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPreferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{"setEchoChar", "(C)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TextFieldPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.TextFieldPeer",
	nullptr,
	"java.awt.peer.TextComponentPeer",
	nullptr,
	_TextFieldPeer_MethodInfo_
};

$Object* allocate$TextFieldPeer($Class* clazz) {
	return $of($alloc(TextFieldPeer));
}

$Class* TextFieldPeer::load$($String* name, bool initialize) {
	$loadClass(TextFieldPeer, name, initialize, &_TextFieldPeer_ClassInfo_, allocate$TextFieldPeer);
	return class$;
}

$Class* TextFieldPeer::class$ = nullptr;

		} // peer
	} // awt
} // java