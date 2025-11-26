#include <java/awt/peer/ListPeer.h>

#include <java/awt/Dimension.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _ListPeer_MethodInfo_[] = {
	{"add", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"delItems", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"deselect", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getMinimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPreferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectedIndexes", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"makeVisible", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAll", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"select", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMultipleMode", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ListPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.ListPeer",
	nullptr,
	"java.awt.peer.ComponentPeer",
	nullptr,
	_ListPeer_MethodInfo_
};

$Object* allocate$ListPeer($Class* clazz) {
	return $of($alloc(ListPeer));
}

$Class* ListPeer::load$($String* name, bool initialize) {
	$loadClass(ListPeer, name, initialize, &_ListPeer_ClassInfo_, allocate$ListPeer);
	return class$;
}

$Class* ListPeer::class$ = nullptr;

		} // peer
	} // awt
} // java