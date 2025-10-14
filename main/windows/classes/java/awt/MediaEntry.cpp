#include <java/awt/MediaEntry.h>

#include <java/awt/MediaTracker.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ABORTED
#undef COMPLETE
#undef DONE
#undef ERRORED
#undef ID
#undef LOADING
#undef LOADSTARTED

using $MediaTracker = ::java::awt::MediaTracker;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _MediaEntry_FieldInfo_[] = {
	{"tracker", "Ljava/awt/MediaTracker;", nullptr, 0, $field(MediaEntry, tracker)},
	{"ID", "I", nullptr, 0, $field(MediaEntry, ID)},
	{"next", "Ljava/awt/MediaEntry;", nullptr, 0, $field(MediaEntry, next)},
	{"status", "I", nullptr, 0, $field(MediaEntry, status)},
	{"cancelled", "Z", nullptr, 0, $field(MediaEntry, cancelled)},
	{"LOADING", "I", nullptr, $STATIC | $FINAL, $constField(MediaEntry, LOADING)},
	{"ABORTED", "I", nullptr, $STATIC | $FINAL, $constField(MediaEntry, ABORTED)},
	{"ERRORED", "I", nullptr, $STATIC | $FINAL, $constField(MediaEntry, ERRORED)},
	{"COMPLETE", "I", nullptr, $STATIC | $FINAL, $constField(MediaEntry, COMPLETE)},
	{"LOADSTARTED", "I", nullptr, $STATIC | $FINAL, $constField(MediaEntry, LOADSTARTED)},
	{"DONE", "I", nullptr, $STATIC | $FINAL, $constField(MediaEntry, DONE)},
	{}
};

$MethodInfo _MediaEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/MediaTracker;I)V", nullptr, 0, $method(static_cast<void(MediaEntry::*)($MediaTracker*,int32_t)>(&MediaEntry::init$))},
	{"cancel", "()V", nullptr, 0},
	{"getID", "()I", nullptr, 0},
	{"getMedia", "()Ljava/lang/Object;", nullptr, $ABSTRACT},
	{"getStatus", "(ZZ)I", nullptr, $SYNCHRONIZED},
	{"insert", "(Ljava/awt/MediaEntry;Ljava/awt/MediaEntry;)Ljava/awt/MediaEntry;", nullptr, $STATIC, $method(static_cast<MediaEntry*(*)(MediaEntry*,MediaEntry*)>(&MediaEntry::insert))},
	{"setStatus", "(I)V", nullptr, 0},
	{"startLoad", "()V", nullptr, $ABSTRACT},
	{}
};

$ClassInfo _MediaEntry_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.awt.MediaEntry",
	"java.lang.Object",
	nullptr,
	_MediaEntry_FieldInfo_,
	_MediaEntry_MethodInfo_
};

$Object* allocate$MediaEntry($Class* clazz) {
	return $of($alloc(MediaEntry));
}

void MediaEntry::init$($MediaTracker* mt, int32_t id) {
	$set(this, tracker, mt);
	this->ID = id;
}

MediaEntry* MediaEntry::insert(MediaEntry* head$renamed, MediaEntry* me) {
	$var(MediaEntry, head, head$renamed);
	$var(MediaEntry, cur, head);
	$var(MediaEntry, prev, nullptr);
	while (cur != nullptr) {
		if (cur->ID > $nc(me)->ID) {
			break;
		}
		$assign(prev, cur);
		$assign(cur, cur->next);
	}
	$set($nc(me), next, cur);
	if (prev == nullptr) {
		$assign(head, me);
	} else {
		$set($nc(prev), next, me);
	}
	return head;
}

int32_t MediaEntry::getID() {
	return this->ID;
}

void MediaEntry::cancel() {
	this->cancelled = true;
}

int32_t MediaEntry::getStatus(bool doLoad, bool doVerify) {
	$synchronized(this) {
		if (doLoad && (((int32_t)(this->status & (uint32_t)MediaEntry::LOADSTARTED)) == 0)) {
			this->status = ((int32_t)(this->status & (uint32_t)~MediaEntry::ABORTED)) | MediaEntry::LOADING;
			startLoad();
		}
		return this->status;
	}
}

void MediaEntry::setStatus(int32_t flag) {
	$synchronized(this) {
		this->status = flag;
	}
	$nc(this->tracker)->setDone();
}

MediaEntry::MediaEntry() {
}

$Class* MediaEntry::load$($String* name, bool initialize) {
	$loadClass(MediaEntry, name, initialize, &_MediaEntry_ClassInfo_, allocate$MediaEntry);
	return class$;
}

$Class* MediaEntry::class$ = nullptr;

	} // awt
} // java