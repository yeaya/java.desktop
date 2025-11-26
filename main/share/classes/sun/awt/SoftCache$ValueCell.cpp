#include <sun/awt/SoftCache$ValueCell.h>

#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <sun/awt/SoftCache.h>
#include <jcpp.h>

#undef INVALID_KEY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;
using $SoftCache = ::sun::awt::SoftCache;

namespace sun {
	namespace awt {

$FieldInfo _SoftCache$ValueCell_FieldInfo_[] = {
	{"INVALID_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(SoftCache$ValueCell, INVALID_KEY)},
	{"dropped", "I", nullptr, $PRIVATE | $STATIC, $staticField(SoftCache$ValueCell, dropped)},
	{"key", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(SoftCache$ValueCell, key)},
	{}
};

$MethodInfo _SoftCache$ValueCell_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;)V", $PRIVATE, $method(static_cast<void(SoftCache$ValueCell::*)(Object$*,Object$*,$ReferenceQueue*)>(&SoftCache$ValueCell::init$))},
	{"create", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)Lsun/awt/SoftCache$ValueCell;", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;)Lsun/awt/SoftCache$ValueCell;", $PRIVATE | $STATIC, $method(static_cast<SoftCache$ValueCell*(*)(Object$*,Object$*,$ReferenceQueue*)>(&SoftCache$ValueCell::create))},
	{"drop", "()V", nullptr, $PRIVATE, $method(static_cast<void(SoftCache$ValueCell::*)()>(&SoftCache$ValueCell::drop))},
	{"isValid", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(SoftCache$ValueCell::*)()>(&SoftCache$ValueCell::isValid))},
	{"strip", "(Ljava/lang/Object;Z)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)(Object$*,bool)>(&SoftCache$ValueCell::strip))},
	{}
};

$InnerClassInfo _SoftCache$ValueCell_InnerClassesInfo_[] = {
	{"sun.awt.SoftCache$ValueCell", "sun.awt.SoftCache", "ValueCell", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SoftCache$ValueCell_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.SoftCache$ValueCell",
	"java.lang.ref.SoftReference",
	nullptr,
	_SoftCache$ValueCell_FieldInfo_,
	_SoftCache$ValueCell_MethodInfo_,
	"Ljava/lang/ref/SoftReference<Ljava/lang/Object;>;",
	nullptr,
	_SoftCache$ValueCell_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SoftCache"
};

$Object* allocate$SoftCache$ValueCell($Class* clazz) {
	return $of($alloc(SoftCache$ValueCell));
}

$Object* SoftCache$ValueCell::INVALID_KEY = nullptr;
int32_t SoftCache$ValueCell::dropped = 0;

void SoftCache$ValueCell::init$(Object$* key, Object$* value, $ReferenceQueue* queue) {
	$SoftReference::init$(value, queue);
	$set(this, key, key);
}

SoftCache$ValueCell* SoftCache$ValueCell::create(Object$* key, Object$* value, $ReferenceQueue* queue) {
	$init(SoftCache$ValueCell);
	if (value == nullptr) {
		return nullptr;
	}
	return $new(SoftCache$ValueCell, key, value, queue);
}

$Object* SoftCache$ValueCell::strip(Object$* val, bool drop) {
	$init(SoftCache$ValueCell);
	$useLocalCurrentObjectStackCache();
	if (val == nullptr) {
		return $of(nullptr);
	}
	$var(SoftCache$ValueCell, vc, $cast(SoftCache$ValueCell, val));
	$var($Object, o, $nc(vc)->get());
	if (drop) {
		vc->drop();
	}
	return $of(o);
}

bool SoftCache$ValueCell::isValid() {
	return (!$equals(this->key, SoftCache$ValueCell::INVALID_KEY));
}

void SoftCache$ValueCell::drop() {
	$SoftReference::clear();
	$set(this, key, SoftCache$ValueCell::INVALID_KEY);
	++SoftCache$ValueCell::dropped;
}

void clinit$SoftCache$ValueCell($Class* class$) {
	$assignStatic(SoftCache$ValueCell::INVALID_KEY, $new($Object));
	SoftCache$ValueCell::dropped = 0;
}

SoftCache$ValueCell::SoftCache$ValueCell() {
}

$Class* SoftCache$ValueCell::load$($String* name, bool initialize) {
	$loadClass(SoftCache$ValueCell, name, initialize, &_SoftCache$ValueCell_ClassInfo_, clinit$SoftCache$ValueCell, allocate$SoftCache$ValueCell);
	return class$;
}

$Class* SoftCache$ValueCell::class$ = nullptr;

	} // awt
} // sun