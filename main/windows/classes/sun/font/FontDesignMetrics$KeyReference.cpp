#include <sun/font/FontDesignMetrics$KeyReference.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/font/FontDesignMetrics.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $FontDesignMetrics = ::sun::font::FontDesignMetrics;
using $Disposer = ::sun::java2d::Disposer;
using $Disposer$PollDisposable = ::sun::java2d::Disposer$PollDisposable;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace font {

$FieldInfo _FontDesignMetrics$KeyReference_FieldInfo_[] = {
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;", $STATIC, $staticField(FontDesignMetrics$KeyReference, queue)},
	{"key", "Ljava/lang/Object;", nullptr, 0, $field(FontDesignMetrics$KeyReference, key)},
	{}
};

$MethodInfo _FontDesignMetrics$KeyReference_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(FontDesignMetrics$KeyReference::*)(Object$*,Object$*)>(&FontDesignMetrics$KeyReference::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FontDesignMetrics$KeyReference_InnerClassesInfo_[] = {
	{"sun.font.FontDesignMetrics$KeyReference", "sun.font.FontDesignMetrics", "KeyReference", $PRIVATE | $STATIC},
	{"sun.java2d.Disposer$PollDisposable", "sun.java2d.Disposer", "PollDisposable", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FontDesignMetrics$KeyReference_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.FontDesignMetrics$KeyReference",
	"java.lang.ref.SoftReference",
	"sun.java2d.DisposerRecord,sun.java2d.Disposer$PollDisposable",
	_FontDesignMetrics$KeyReference_FieldInfo_,
	_FontDesignMetrics$KeyReference_MethodInfo_,
	"Ljava/lang/ref/SoftReference<Ljava/lang/Object;>;Lsun/java2d/DisposerRecord;Lsun/java2d/Disposer$PollDisposable;",
	nullptr,
	_FontDesignMetrics$KeyReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.FontDesignMetrics"
};

$Object* allocate$FontDesignMetrics$KeyReference($Class* clazz) {
	return $of($alloc(FontDesignMetrics$KeyReference));
}

$Object* FontDesignMetrics$KeyReference::clone() {
	 return this->$SoftReference::clone();
}

int32_t FontDesignMetrics$KeyReference::hashCode() {
	 return this->$SoftReference::hashCode();
}

bool FontDesignMetrics$KeyReference::equals(Object$* arg0) {
	 return this->$SoftReference::equals(arg0);
}

$String* FontDesignMetrics$KeyReference::toString() {
	 return this->$SoftReference::toString();
}

void FontDesignMetrics$KeyReference::finalize() {
	this->$SoftReference::finalize();
}

$ReferenceQueue* FontDesignMetrics$KeyReference::queue = nullptr;

void FontDesignMetrics$KeyReference::init$(Object$* key, Object$* value) {
	$SoftReference::init$(value, FontDesignMetrics$KeyReference::queue);
	$set(this, key, key);
	$Disposer::addReference(this, this);
}

void FontDesignMetrics$KeyReference::dispose() {
	$init($FontDesignMetrics);
	if ($equals($nc($FontDesignMetrics::metricsCache)->get(this->key), this)) {
		$nc($FontDesignMetrics::metricsCache)->remove(this->key);
	}
}

void clinit$FontDesignMetrics$KeyReference($Class* class$) {
	$assignStatic(FontDesignMetrics$KeyReference::queue, $Disposer::getQueue());
}

FontDesignMetrics$KeyReference::FontDesignMetrics$KeyReference() {
}

$Class* FontDesignMetrics$KeyReference::load$($String* name, bool initialize) {
	$loadClass(FontDesignMetrics$KeyReference, name, initialize, &_FontDesignMetrics$KeyReference_ClassInfo_, clinit$FontDesignMetrics$KeyReference, allocate$FontDesignMetrics$KeyReference);
	return class$;
}

$Class* FontDesignMetrics$KeyReference::class$ = nullptr;

	} // font
} // sun