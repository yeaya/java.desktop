#include <java/awt/peer/FileDialogPeer.h>

#include <java/io/FilenameFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace peer {

$MethodInfo _FileDialogPeer_MethodInfo_[] = {
	{"setDirectory", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFile", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFilenameFilter", "(Ljava/io/FilenameFilter;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FileDialogPeer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.peer.FileDialogPeer",
	nullptr,
	"java.awt.peer.DialogPeer",
	nullptr,
	_FileDialogPeer_MethodInfo_
};

$Object* allocate$FileDialogPeer($Class* clazz) {
	return $of($alloc(FileDialogPeer));
}

$Class* FileDialogPeer::load$($String* name, bool initialize) {
	$loadClass(FileDialogPeer, name, initialize, &_FileDialogPeer_ClassInfo_, allocate$FileDialogPeer);
	return class$;
}

$Class* FileDialogPeer::class$ = nullptr;

		} // peer
	} // awt
} // java