#include <sun/font/CreatedFontTracker.h>

#include <java/io/File.h>
#include <java/io/OutputStream.h>
#include <java/util/concurrent/Semaphore.h>
#include <java/util/concurrent/TimeUnit.h>
#include <sun/awt/AppContext.h>
#include <sun/font/CreatedFontTracker$TempFileDeletionHook.h>
#include <jcpp.h>

#undef MAX_FILE_SIZE
#undef MAX_TOTAL_BYTES
#undef SECONDS

using $File = ::java::io::File;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Semaphore = ::java::util::concurrent::Semaphore;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AppContext = ::sun::awt::AppContext;
using $CreatedFontTracker$TempFileDeletionHook = ::sun::font::CreatedFontTracker$TempFileDeletionHook;

namespace sun {
	namespace font {

$FieldInfo _CreatedFontTracker_FieldInfo_[] = {
	{"MAX_FILE_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CreatedFontTracker, MAX_FILE_SIZE)},
	{"MAX_TOTAL_BYTES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CreatedFontTracker, MAX_TOTAL_BYTES)},
	{"tracker", "Lsun/font/CreatedFontTracker;", nullptr, $STATIC, $staticField(CreatedFontTracker, tracker)},
	{"numBytes", "I", nullptr, 0, $field(CreatedFontTracker, numBytes)},
	{}
};

$MethodInfo _CreatedFontTracker_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CreatedFontTracker::*)()>(&CreatedFontTracker::init$))},
	{"acquirePermit", "()Z", nullptr, $PUBLIC, nullptr, "java.lang.InterruptedException"},
	{"add", "(Ljava/io/File;)V", nullptr, $PUBLIC},
	{"addBytes", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getCS", "()Ljava/util/concurrent/Semaphore;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$Semaphore*(*)()>(&CreatedFontTracker::getCS))},
	{"getNumBytes", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getTracker", "()Lsun/font/CreatedFontTracker;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<CreatedFontTracker*(*)()>(&CreatedFontTracker::getTracker))},
	{"releasePermit", "()V", nullptr, $PUBLIC},
	{"remove", "(Ljava/io/File;)V", nullptr, $PUBLIC},
	{"set", "(Ljava/io/File;Ljava/io/OutputStream;)V", nullptr, $PUBLIC},
	{"subBytes", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _CreatedFontTracker_InnerClassesInfo_[] = {
	{"sun.font.CreatedFontTracker$TempFileDeletionHook", "sun.font.CreatedFontTracker", "TempFileDeletionHook", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CreatedFontTracker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.CreatedFontTracker",
	"java.lang.Object",
	nullptr,
	_CreatedFontTracker_FieldInfo_,
	_CreatedFontTracker_MethodInfo_,
	nullptr,
	nullptr,
	_CreatedFontTracker_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.CreatedFontTracker$TempFileDeletionHook"
};

$Object* allocate$CreatedFontTracker($Class* clazz) {
	return $of($alloc(CreatedFontTracker));
}

CreatedFontTracker* CreatedFontTracker::tracker = nullptr;

CreatedFontTracker* CreatedFontTracker::getTracker() {
	$load(CreatedFontTracker);
	$synchronized(class$) {
		$init(CreatedFontTracker);
		if (CreatedFontTracker::tracker == nullptr) {
			$assignStatic(CreatedFontTracker::tracker, $new(CreatedFontTracker));
		}
		return CreatedFontTracker::tracker;
	}
}

void CreatedFontTracker::init$() {
	this->numBytes = 0;
}

int32_t CreatedFontTracker::getNumBytes() {
	$synchronized(this) {
		return this->numBytes;
	}
}

void CreatedFontTracker::addBytes(int32_t sz) {
	$synchronized(this) {
		this->numBytes += sz;
	}
}

void CreatedFontTracker::subBytes(int32_t sz) {
	$synchronized(this) {
		this->numBytes -= sz;
	}
}

$Semaphore* CreatedFontTracker::getCS() {
	$load(CreatedFontTracker);
	$synchronized(class$) {
		$useLocalCurrentObjectStackCache();
		$var($AppContext, appContext, $AppContext::getAppContext());
		$load(CreatedFontTracker);
		$var($Semaphore, cs, $cast($Semaphore, $nc(appContext)->get(CreatedFontTracker::class$)));
		if (cs == nullptr) {
			$assign(cs, $new($Semaphore, 5, true));
			appContext->put(CreatedFontTracker::class$, cs);
		}
		return cs;
	}
}

bool CreatedFontTracker::acquirePermit() {
	$init($TimeUnit);
	return $nc($(getCS()))->tryAcquire(120, $TimeUnit::SECONDS);
}

void CreatedFontTracker::releasePermit() {
	$nc($(getCS()))->release();
}

void CreatedFontTracker::add($File* file) {
	$CreatedFontTracker$TempFileDeletionHook::add(file);
}

void CreatedFontTracker::set($File* file, $OutputStream* os) {
	$CreatedFontTracker$TempFileDeletionHook::set(file, os);
}

void CreatedFontTracker::remove($File* file) {
	$CreatedFontTracker$TempFileDeletionHook::remove(file);
}

CreatedFontTracker::CreatedFontTracker() {
}

$Class* CreatedFontTracker::load$($String* name, bool initialize) {
	$loadClass(CreatedFontTracker, name, initialize, &_CreatedFontTracker_ClassInfo_, allocate$CreatedFontTracker);
	return class$;
}

$Class* CreatedFontTracker::class$ = nullptr;

	} // font
} // sun