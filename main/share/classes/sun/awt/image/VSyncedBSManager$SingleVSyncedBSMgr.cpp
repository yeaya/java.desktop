#include <sun/awt/image/VSyncedBSManager$SingleVSyncedBSMgr.h>

#include <java/awt/image/BufferStrategy.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/image/VSyncedBSManager.h>
#include <jcpp.h>

using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $VSyncedBSManager = ::sun::awt::image::VSyncedBSManager;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _VSyncedBSManager$SingleVSyncedBSMgr_FieldInfo_[] = {
	{"strategy", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/awt/image/BufferStrategy;>;", $PRIVATE, $field(VSyncedBSManager$SingleVSyncedBSMgr, strategy)},
	{}
};

$MethodInfo _VSyncedBSManager$SingleVSyncedBSMgr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(VSyncedBSManager$SingleVSyncedBSMgr::*)()>(&VSyncedBSManager$SingleVSyncedBSMgr::init$))},
	{"checkAllowed", "(Ljava/awt/image/BufferStrategy;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"relinquishVsync", "(Ljava/awt/image/BufferStrategy;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _VSyncedBSManager$SingleVSyncedBSMgr_InnerClassesInfo_[] = {
	{"sun.awt.image.VSyncedBSManager$SingleVSyncedBSMgr", "sun.awt.image.VSyncedBSManager", "SingleVSyncedBSMgr", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _VSyncedBSManager$SingleVSyncedBSMgr_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.image.VSyncedBSManager$SingleVSyncedBSMgr",
	"sun.awt.image.VSyncedBSManager",
	nullptr,
	_VSyncedBSManager$SingleVSyncedBSMgr_FieldInfo_,
	_VSyncedBSManager$SingleVSyncedBSMgr_MethodInfo_,
	nullptr,
	nullptr,
	_VSyncedBSManager$SingleVSyncedBSMgr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.VSyncedBSManager"
};

$Object* allocate$VSyncedBSManager$SingleVSyncedBSMgr($Class* clazz) {
	return $of($alloc(VSyncedBSManager$SingleVSyncedBSMgr));
}

void VSyncedBSManager$SingleVSyncedBSMgr::init$() {
	$VSyncedBSManager::init$();
}

bool VSyncedBSManager$SingleVSyncedBSMgr::checkAllowed($BufferStrategy* bs) {
	$synchronized(this) {
		if (this->strategy != nullptr) {
			$var($BufferStrategy, current, $cast($BufferStrategy, $nc(this->strategy)->get()));
			if (current != nullptr) {
				return (current == bs);
			}
		}
		$set(this, strategy, $new($WeakReference, bs));
		return true;
	}
}

void VSyncedBSManager$SingleVSyncedBSMgr::relinquishVsync($BufferStrategy* bs) {
	$synchronized(this) {
		if (this->strategy != nullptr) {
			$var($BufferStrategy, b, $cast($BufferStrategy, $nc(this->strategy)->get()));
			if (b == bs) {
				$nc(this->strategy)->clear();
				$set(this, strategy, nullptr);
			}
		}
	}
}

VSyncedBSManager$SingleVSyncedBSMgr::VSyncedBSManager$SingleVSyncedBSMgr() {
}

$Class* VSyncedBSManager$SingleVSyncedBSMgr::load$($String* name, bool initialize) {
	$loadClass(VSyncedBSManager$SingleVSyncedBSMgr, name, initialize, &_VSyncedBSManager$SingleVSyncedBSMgr_ClassInfo_, allocate$VSyncedBSManager$SingleVSyncedBSMgr);
	return class$;
}

$Class* VSyncedBSManager$SingleVSyncedBSMgr::class$ = nullptr;

		} // image
	} // awt
} // sun