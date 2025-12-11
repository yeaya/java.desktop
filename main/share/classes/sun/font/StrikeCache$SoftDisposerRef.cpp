#include <sun/font/StrikeCache$SoftDisposerRef.h>

#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <sun/font/FontStrike.h>
#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/StrikeCache.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $SoftReference = ::java::lang::ref::SoftReference;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;
using $StrikeCache = ::sun::font::StrikeCache;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace font {

$FieldInfo _StrikeCache$SoftDisposerRef_FieldInfo_[] = {
	{"disposer", "Lsun/font/FontStrikeDisposer;", nullptr, $PRIVATE, $field(StrikeCache$SoftDisposerRef, disposer)},
	{}
};

$MethodInfo _StrikeCache$SoftDisposerRef_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/font/FontStrike;)V", nullptr, 0, $method(static_cast<void(StrikeCache$SoftDisposerRef::*)($FontStrike*)>(&StrikeCache$SoftDisposerRef::init$))},
	{"getDisposer", "()Lsun/font/FontStrikeDisposer;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StrikeCache$SoftDisposerRef_InnerClassesInfo_[] = {
	{"sun.font.StrikeCache$SoftDisposerRef", "sun.font.StrikeCache", "SoftDisposerRef", $STATIC},
	{"sun.font.StrikeCache$DisposableStrike", "sun.font.StrikeCache", "DisposableStrike", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StrikeCache$SoftDisposerRef_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.StrikeCache$SoftDisposerRef",
	"java.lang.ref.SoftReference",
	"sun.font.StrikeCache$DisposableStrike",
	_StrikeCache$SoftDisposerRef_FieldInfo_,
	_StrikeCache$SoftDisposerRef_MethodInfo_,
	"Ljava/lang/ref/SoftReference<Lsun/font/FontStrike;>;Lsun/font/StrikeCache$DisposableStrike;",
	nullptr,
	_StrikeCache$SoftDisposerRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.StrikeCache"
};

$Object* allocate$StrikeCache$SoftDisposerRef($Class* clazz) {
	return $of($alloc(StrikeCache$SoftDisposerRef));
}

$Object* StrikeCache$SoftDisposerRef::clone() {
	 return this->$SoftReference::clone();
}

int32_t StrikeCache$SoftDisposerRef::hashCode() {
	 return this->$SoftReference::hashCode();
}

bool StrikeCache$SoftDisposerRef::equals(Object$* arg0) {
	 return this->$SoftReference::equals(arg0);
}

$String* StrikeCache$SoftDisposerRef::toString() {
	 return this->$SoftReference::toString();
}

void StrikeCache$SoftDisposerRef::finalize() {
	this->$SoftReference::finalize();
}

$FontStrikeDisposer* StrikeCache$SoftDisposerRef::getDisposer() {
	return this->disposer;
}

void StrikeCache$SoftDisposerRef::init$($FontStrike* strike) {
	$init($StrikeCache);
	$SoftReference::init$(strike, $StrikeCache::refQueue);
	$set(this, disposer, $nc(strike)->disposer);
	$Disposer::addReference(static_cast<$Reference*>(this), this->disposer);
}

StrikeCache$SoftDisposerRef::StrikeCache$SoftDisposerRef() {
}

$Class* StrikeCache$SoftDisposerRef::load$($String* name, bool initialize) {
	$loadClass(StrikeCache$SoftDisposerRef, name, initialize, &_StrikeCache$SoftDisposerRef_ClassInfo_, allocate$StrikeCache$SoftDisposerRef);
	return class$;
}

$Class* StrikeCache$SoftDisposerRef::class$ = nullptr;

	} // font
} // sun