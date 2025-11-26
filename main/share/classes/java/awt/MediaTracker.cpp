#include <java/awt/MediaTracker.h>

#include <java/awt/Component.h>
#include <java/awt/Image.h>
#include <java/awt/ImageMediaEntry.h>
#include <java/awt/MediaEntry.h>
#include <sun/awt/image/MultiResolutionToolkitImage.h>
#include <jcpp.h>

#undef ABORTED
#undef COMPLETE
#undef DONE
#undef ERRORED
#undef LOADING

using $Component = ::java::awt::Component;
using $Image = ::java::awt::Image;
using $ImageMediaEntry = ::java::awt::ImageMediaEntry;
using $MediaEntry = ::java::awt::MediaEntry;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MultiResolutionToolkitImage = ::sun::awt::image::MultiResolutionToolkitImage;

namespace java {
	namespace awt {

$FieldInfo _MediaTracker_FieldInfo_[] = {
	{"target", "Ljava/awt/Component;", nullptr, 0, $field(MediaTracker, target)},
	{"head", "Ljava/awt/MediaEntry;", nullptr, 0, $field(MediaTracker, head)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MediaTracker, serialVersionUID)},
	{"LOADING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MediaTracker, LOADING)},
	{"ABORTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MediaTracker, ABORTED)},
	{"ERRORED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MediaTracker, ERRORED)},
	{"COMPLETE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MediaTracker, COMPLETE)},
	{"DONE", "I", nullptr, $STATIC | $FINAL, $constField(MediaTracker, DONE)},
	{}
};

$MethodInfo _MediaTracker_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(MediaTracker::*)($Component*)>(&MediaTracker::init$))},
	{"addImage", "(Ljava/awt/Image;I)V", nullptr, $PUBLIC},
	{"addImage", "(Ljava/awt/Image;III)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addImageImpl", "(Ljava/awt/Image;III)V", nullptr, $PRIVATE, $method(static_cast<void(MediaTracker::*)($Image*,int32_t,int32_t,int32_t)>(&MediaTracker::addImageImpl))},
	{"checkAll", "()Z", nullptr, $PUBLIC},
	{"checkAll", "(Z)Z", nullptr, $PUBLIC},
	{"checkAll", "(ZZ)Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(MediaTracker::*)(bool,bool)>(&MediaTracker::checkAll))},
	{"checkID", "(I)Z", nullptr, $PUBLIC},
	{"checkID", "(IZ)Z", nullptr, $PUBLIC},
	{"checkID", "(IZZ)Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(MediaTracker::*)(int32_t,bool,bool)>(&MediaTracker::checkID))},
	{"getErrorsAny", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getErrorsID", "(I)[Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getResolutionVariant", "(Ljava/awt/Image;)Ljava/awt/Image;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Image*(*)($Image*)>(&MediaTracker::getResolutionVariant))},
	{"isErrorAny", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isErrorID", "(I)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeImage", "(Ljava/awt/Image;I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeImage", "(Ljava/awt/Image;III)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeImageImpl", "(Ljava/awt/Image;)V", nullptr, $PRIVATE, $method(static_cast<void(MediaTracker::*)($Image*)>(&MediaTracker::removeImageImpl))},
	{"removeImageImpl", "(Ljava/awt/Image;I)V", nullptr, $PRIVATE, $method(static_cast<void(MediaTracker::*)($Image*,int32_t)>(&MediaTracker::removeImageImpl))},
	{"removeImageImpl", "(Ljava/awt/Image;III)V", nullptr, $PRIVATE, $method(static_cast<void(MediaTracker::*)($Image*,int32_t,int32_t,int32_t)>(&MediaTracker::removeImageImpl))},
	{"setDone", "()V", nullptr, $SYNCHRONIZED},
	{"statusAll", "(Z)I", nullptr, $PUBLIC},
	{"statusAll", "(ZZ)I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<int32_t(MediaTracker::*)(bool,bool)>(&MediaTracker::statusAll))},
	{"statusID", "(IZ)I", nullptr, $PUBLIC},
	{"statusID", "(IZZ)I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<int32_t(MediaTracker::*)(int32_t,bool,bool)>(&MediaTracker::statusID))},
	{"waitForAll", "()V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"waitForAll", "(J)Z", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.InterruptedException"},
	{"waitForID", "(I)V", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"waitForID", "(IJ)Z", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.InterruptedException"},
	{}
};

$ClassInfo _MediaTracker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.MediaTracker",
	"java.lang.Object",
	"java.io.Serializable",
	_MediaTracker_FieldInfo_,
	_MediaTracker_MethodInfo_
};

$Object* allocate$MediaTracker($Class* clazz) {
	return $of($alloc(MediaTracker));
}

void MediaTracker::init$($Component* comp) {
	$set(this, target, comp);
}

void MediaTracker::addImage($Image* image, int32_t id) {
	addImage(image, id, -1, -1);
}

void MediaTracker::addImage($Image* image, int32_t id, int32_t w, int32_t h) {
	$synchronized(this) {
		addImageImpl(image, id, w, h);
		$var($Image, rvImage, getResolutionVariant(image));
		if (rvImage != nullptr) {
			addImageImpl(rvImage, id, w == -1 ? -1 : 2 * w, h == -1 ? -1 : 2 * h);
		}
	}
}

void MediaTracker::addImageImpl($Image* image, int32_t id, int32_t w, int32_t h) {
	$set(this, head, $MediaEntry::insert(this->head, $$new($ImageMediaEntry, this, image, id, w, h)));
}

bool MediaTracker::checkAll() {
	return checkAll(false, true);
}

bool MediaTracker::checkAll(bool load) {
	return checkAll(load, true);
}

bool MediaTracker::checkAll(bool load, bool verify) {
	$synchronized(this) {
		$var($MediaEntry, cur, this->head);
		bool done = true;
		while (cur != nullptr) {
			if (((int32_t)(cur->getStatus(load, verify) & (uint32_t)MediaTracker::DONE)) == 0) {
				done = false;
			}
			$assign(cur, cur->next);
		}
		return done;
	}
}

bool MediaTracker::isErrorAny() {
	$synchronized(this) {
		$var($MediaEntry, cur, this->head);
		while (cur != nullptr) {
			if (((int32_t)(cur->getStatus(false, true) & (uint32_t)MediaTracker::ERRORED)) != 0) {
				return true;
			}
			$assign(cur, cur->next);
		}
		return false;
	}
}

$ObjectArray* MediaTracker::getErrorsAny() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($MediaEntry, cur, this->head);
		int32_t numerrors = 0;
		while (cur != nullptr) {
			if (((int32_t)(cur->getStatus(false, true) & (uint32_t)MediaTracker::ERRORED)) != 0) {
				++numerrors;
			}
			$assign(cur, cur->next);
		}
		if (numerrors == 0) {
			return nullptr;
		}
		$var($ObjectArray, errors, $new($ObjectArray, numerrors));
		$assign(cur, this->head);
		numerrors = 0;
		while (cur != nullptr) {
			if (((int32_t)(cur->getStatus(false, false) & (uint32_t)MediaTracker::ERRORED)) != 0) {
				errors->set(numerrors++, $(cur->getMedia()));
			}
			$assign(cur, cur->next);
		}
		return errors;
	}
}

void MediaTracker::waitForAll() {
	waitForAll(0);
}

bool MediaTracker::waitForAll(int64_t ms) {
	$synchronized(this) {
		int64_t end = $System::currentTimeMillis() + ms;
		bool first = true;
		while (true) {
			int32_t status = statusAll(first, first);
			if (((int32_t)(status & (uint32_t)MediaTracker::LOADING)) == 0) {
				return (status == MediaTracker::COMPLETE);
			}
			first = false;
			int64_t timeout = 0;
			if (ms == 0) {
				timeout = 0;
			} else {
				timeout = end - $System::currentTimeMillis();
				if (timeout <= 0) {
					return false;
				}
			}
			$of(this)->wait(timeout);
		}
	}
}

int32_t MediaTracker::statusAll(bool load) {
	return statusAll(load, true);
}

int32_t MediaTracker::statusAll(bool load, bool verify) {
	$synchronized(this) {
		$var($MediaEntry, cur, this->head);
		int32_t status = 0;
		while (cur != nullptr) {
			status = status | cur->getStatus(load, verify);
			$assign(cur, cur->next);
		}
		return status;
	}
}

bool MediaTracker::checkID(int32_t id) {
	return checkID(id, false, true);
}

bool MediaTracker::checkID(int32_t id, bool load) {
	return checkID(id, load, true);
}

bool MediaTracker::checkID(int32_t id, bool load, bool verify) {
	$synchronized(this) {
		$var($MediaEntry, cur, this->head);
		bool done = true;
		while (cur != nullptr) {
			bool var$0 = cur->getID() == id;
			if (var$0 && ((int32_t)(cur->getStatus(load, verify) & (uint32_t)MediaTracker::DONE)) == 0) {
				done = false;
			}
			$assign(cur, cur->next);
		}
		return done;
	}
}

bool MediaTracker::isErrorID(int32_t id) {
	$synchronized(this) {
		$var($MediaEntry, cur, this->head);
		while (cur != nullptr) {
			bool var$0 = cur->getID() == id;
			if (var$0 && ((int32_t)(cur->getStatus(false, true) & (uint32_t)MediaTracker::ERRORED)) != 0) {
				return true;
			}
			$assign(cur, cur->next);
		}
		return false;
	}
}

$ObjectArray* MediaTracker::getErrorsID(int32_t id) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($MediaEntry, cur, this->head);
		int32_t numerrors = 0;
		while (cur != nullptr) {
			bool var$0 = cur->getID() == id;
			if (var$0 && ((int32_t)(cur->getStatus(false, true) & (uint32_t)MediaTracker::ERRORED)) != 0) {
				++numerrors;
			}
			$assign(cur, cur->next);
		}
		if (numerrors == 0) {
			return nullptr;
		}
		$var($ObjectArray, errors, $new($ObjectArray, numerrors));
		$assign(cur, this->head);
		numerrors = 0;
		while (cur != nullptr) {
			bool var$1 = cur->getID() == id;
			if (var$1 && ((int32_t)(cur->getStatus(false, false) & (uint32_t)MediaTracker::ERRORED)) != 0) {
				errors->set(numerrors++, $(cur->getMedia()));
			}
			$assign(cur, cur->next);
		}
		return errors;
	}
}

void MediaTracker::waitForID(int32_t id) {
	waitForID(id, 0);
}

bool MediaTracker::waitForID(int32_t id, int64_t ms) {
	$synchronized(this) {
		int64_t end = $System::currentTimeMillis() + ms;
		bool first = true;
		while (true) {
			int32_t status = statusID(id, first, first);
			if (((int32_t)(status & (uint32_t)MediaTracker::LOADING)) == 0) {
				return (status == MediaTracker::COMPLETE);
			}
			first = false;
			int64_t timeout = 0;
			if (ms == 0) {
				timeout = 0;
			} else {
				timeout = end - $System::currentTimeMillis();
				if (timeout <= 0) {
					return false;
				}
			}
			$of(this)->wait(timeout);
		}
	}
}

int32_t MediaTracker::statusID(int32_t id, bool load) {
	return statusID(id, load, true);
}

int32_t MediaTracker::statusID(int32_t id, bool load, bool verify) {
	$synchronized(this) {
		$var($MediaEntry, cur, this->head);
		int32_t status = 0;
		while (cur != nullptr) {
			if (cur->getID() == id) {
				status = status | cur->getStatus(load, verify);
			}
			$assign(cur, cur->next);
		}
		return status;
	}
}

void MediaTracker::removeImage($Image* image) {
	$synchronized(this) {
		removeImageImpl(image);
		$var($Image, rvImage, getResolutionVariant(image));
		if (rvImage != nullptr) {
			removeImageImpl(rvImage);
		}
		$of(this)->notifyAll();
	}
}

void MediaTracker::removeImageImpl($Image* image) {
	$useLocalCurrentObjectStackCache();
	$var($MediaEntry, cur, this->head);
	$var($MediaEntry, prev, nullptr);
	while (cur != nullptr) {
		$var($MediaEntry, next, cur->next);
		if ($equals(cur->getMedia(), image)) {
			if (prev == nullptr) {
				$set(this, head, next);
			} else {
				$set($nc(prev), next, next);
			}
			cur->cancel();
		} else {
			$assign(prev, cur);
		}
		$assign(cur, next);
	}
}

void MediaTracker::removeImage($Image* image, int32_t id) {
	$synchronized(this) {
		removeImageImpl(image, id);
		$var($Image, rvImage, getResolutionVariant(image));
		if (rvImage != nullptr) {
			removeImageImpl(rvImage, id);
		}
		$of(this)->notifyAll();
	}
}

void MediaTracker::removeImageImpl($Image* image, int32_t id) {
	$useLocalCurrentObjectStackCache();
	$var($MediaEntry, cur, this->head);
	$var($MediaEntry, prev, nullptr);
	while (cur != nullptr) {
		$var($MediaEntry, next, cur->next);
		bool var$0 = cur->getID() == id;
		if (var$0 && $equals(cur->getMedia(), image)) {
			if (prev == nullptr) {
				$set(this, head, next);
			} else {
				$set($nc(prev), next, next);
			}
			cur->cancel();
		} else {
			$assign(prev, cur);
		}
		$assign(cur, next);
	}
}

void MediaTracker::removeImage($Image* image, int32_t id, int32_t width, int32_t height) {
	$synchronized(this) {
		removeImageImpl(image, id, width, height);
		$var($Image, rvImage, getResolutionVariant(image));
		if (rvImage != nullptr) {
			removeImageImpl(rvImage, id, width == -1 ? -1 : 2 * width, height == -1 ? -1 : 2 * height);
		}
		$of(this)->notifyAll();
	}
}

void MediaTracker::removeImageImpl($Image* image, int32_t id, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($MediaEntry, cur, this->head);
	$var($MediaEntry, prev, nullptr);
	while (cur != nullptr) {
		$var($MediaEntry, next, cur->next);
		bool var$0 = cur->getID() == id && $instanceOf($ImageMediaEntry, cur);
		if (var$0 && $nc(($cast($ImageMediaEntry, cur)))->matches(image, width, height)) {
			if (prev == nullptr) {
				$set(this, head, next);
			} else {
				$set($nc(prev), next, next);
			}
			cur->cancel();
		} else {
			$assign(prev, cur);
		}
		$assign(cur, next);
	}
}

void MediaTracker::setDone() {
	$synchronized(this) {
		$of(this)->notifyAll();
	}
}

$Image* MediaTracker::getResolutionVariant($Image* image) {
	$init(MediaTracker);
	if ($instanceOf($MultiResolutionToolkitImage, image)) {
		return $nc(($cast($MultiResolutionToolkitImage, image)))->getResolutionVariant();
	}
	return nullptr;
}

MediaTracker::MediaTracker() {
}

$Class* MediaTracker::load$($String* name, bool initialize) {
	$loadClass(MediaTracker, name, initialize, &_MediaTracker_ClassInfo_, allocate$MediaTracker);
	return class$;
}

$Class* MediaTracker::class$ = nullptr;

	} // awt
} // java