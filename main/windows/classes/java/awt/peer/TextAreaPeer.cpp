#include <java/awt/peer/TextAreaPeer.h>

#include <java/awt/Dimension.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $TextComponentPeer = ::java::awt::peer::TextComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _TextAreaPeer_MethodInfo_[] = {
	{"getMinimumSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPreferredSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{"insert", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"replaceRange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TextAreaPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.TextAreaPeer",
	nullptr,
	"java.awt.peer.TextComponentPeer",
	nullptr,
	_TextAreaPeer_MethodInfo_
};

$Object* allocate$TextAreaPeer($Class* clazz) {
	return $of($alloc(TextAreaPeer));
}

$Class* TextAreaPeer::load$($String* name, bool initialize) {
	$loadClass(TextAreaPeer, name, initialize, &_TextAreaPeer_ClassInfo_, allocate$TextAreaPeer);
	return class$;
}

$Class* TextAreaPeer::class$ = nullptr;

		} // peer
	} // awt
} // java