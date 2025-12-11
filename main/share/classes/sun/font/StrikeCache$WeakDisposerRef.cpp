#include <sun/font/StrikeCache$WeakDisposerRef.h>

#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
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
using $WeakReference = ::java::lang::ref::WeakReference;
using $FontStrike = ::sun::font::FontStrike;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;
using $StrikeCache = ::sun::font::StrikeCache;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace font {

$FieldInfo _StrikeCache$WeakDisposerRef_FieldInfo_[] = {
	{"disposer", "Lsun/font/FontStrikeDisposer;", nullptr, $PRIVATE, $field(StrikeCache$WeakDisposerRef, disposer)},
	{}
};

$MethodInfo _StrikeCache$WeakDisposerRef_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/font/FontStrike;)V", nullptr, 0, $method(static_cast<void(StrikeCache$WeakDisposerRef::*)($FontStrike*)>(&StrikeCache$WeakDisposerRef::init$))},
	{"getDisposer", "()Lsun/font/FontStrikeDisposer;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StrikeCache$WeakDisposerRef_InnerClassesInfo_[] = {
	{"sun.font.StrikeCache$WeakDisposerRef", "sun.font.StrikeCache", "WeakDisposerRef", $STATIC},
	{"sun.font.StrikeCache$DisposableStrike", "sun.font.StrikeCache", "DisposableStrike", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StrikeCache$WeakDisposerRef_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.StrikeCache$WeakDisposerRef",
	"java.lang.ref.WeakReference",
	"sun.font.StrikeCache$DisposableStrike",
	_StrikeCache$WeakDisposerRef_FieldInfo_,
	_StrikeCache$WeakDisposerRef_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Lsun/font/FontStrike;>;Lsun/font/StrikeCache$DisposableStrike;",
	nullptr,
	_StrikeCache$WeakDisposerRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.StrikeCache"
};

$Object* allocate$StrikeCache$WeakDisposerRef($Class* clazz) {
	return $of($alloc(StrikeCache$WeakDisposerRef));
}

$Object* StrikeCache$WeakDisposerRef::clone() {
	 return this->$WeakReference::clone();
}

int32_t StrikeCache$WeakDisposerRef::hashCode() {
	 return this->$WeakReference::hashCode();
}

bool StrikeCache$WeakDisposerRef::equals(Object$* arg0) {
	 return this->$WeakReference::equals(arg0);
}

$String* StrikeCache$WeakDisposerRef::toString() {
	 return this->$WeakReference::toString();
}

void StrikeCache$WeakDisposerRef::finalize() {
	this->$WeakReference::finalize();
}

$FontStrikeDisposer* StrikeCache$WeakDisposerRef::getDisposer() {
	return this->disposer;
}

void StrikeCache$WeakDisposerRef::init$($FontStrike* strike) {
	$init($StrikeCache);
	$WeakReference::init$(strike, $StrikeCache::refQueue);
	$set(this, disposer, $nc(strike)->disposer);
	$Disposer::addReference(static_cast<$Reference*>(this), this->disposer);
}

StrikeCache$WeakDisposerRef::StrikeCache$WeakDisposerRef() {
}

$Class* StrikeCache$WeakDisposerRef::load$($String* name, bool initialize) {
	$loadClass(StrikeCache$WeakDisposerRef, name, initialize, &_StrikeCache$WeakDisposerRef_ClassInfo_, allocate$StrikeCache$WeakDisposerRef);
	return class$;
}

$Class* StrikeCache$WeakDisposerRef::class$ = nullptr;

	} // font
} // sun