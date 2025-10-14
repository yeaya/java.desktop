#include <sun/font/SunLayoutEngine$FaceRef.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/Font2D.h>
#include <sun/font/SunLayoutEngine.h>
#include <sun/java2d/Disposer.h>
#include <sun/java2d/DisposerRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Font2D = ::sun::font::Font2D;
using $SunLayoutEngine = ::sun::font::SunLayoutEngine;
using $Disposer = ::sun::java2d::Disposer;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace font {

$FieldInfo _SunLayoutEngine$FaceRef_FieldInfo_[] = {
	{"font", "Lsun/font/Font2D;", nullptr, $PRIVATE, $field(SunLayoutEngine$FaceRef, font)},
	{"facePtr", "Ljava/lang/Long;", nullptr, $PRIVATE, $field(SunLayoutEngine$FaceRef, facePtr)},
	{}
};

$MethodInfo _SunLayoutEngine$FaceRef_MethodInfo_[] = {
	{"<init>", "(Lsun/font/Font2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SunLayoutEngine$FaceRef::*)($Font2D*)>(&SunLayoutEngine$FaceRef::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getNativePtr", "()J", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<int64_t(SunLayoutEngine$FaceRef::*)()>(&SunLayoutEngine$FaceRef::getNativePtr))},
	{}
};

$InnerClassInfo _SunLayoutEngine$FaceRef_InnerClassesInfo_[] = {
	{"sun.font.SunLayoutEngine$FaceRef", "sun.font.SunLayoutEngine", "FaceRef", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SunLayoutEngine$FaceRef_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.SunLayoutEngine$FaceRef",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_SunLayoutEngine$FaceRef_FieldInfo_,
	_SunLayoutEngine$FaceRef_MethodInfo_,
	nullptr,
	nullptr,
	_SunLayoutEngine$FaceRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.SunLayoutEngine"
};

$Object* allocate$SunLayoutEngine$FaceRef($Class* clazz) {
	return $of($alloc(SunLayoutEngine$FaceRef));
}

void SunLayoutEngine$FaceRef::init$($Font2D* font) {
	$set(this, font, font);
}

int64_t SunLayoutEngine$FaceRef::getNativePtr() {
	$synchronized(this) {
		if (this->facePtr == nullptr) {
			$set(this, facePtr, $Long::valueOf($SunLayoutEngine::createFace(this->font, $nc(this->font)->getPlatformNativeFontPtr())));
			if ($nc(this->facePtr)->longValue() != 0) {
				$Disposer::addObjectRecord(this->font, this);
			}
			$set(this, font, nullptr);
		}
		return $nc(this->facePtr)->longValue();
	}
}

void SunLayoutEngine$FaceRef::dispose() {
	$SunLayoutEngine::disposeFace($nc(this->facePtr)->longValue());
}

SunLayoutEngine$FaceRef::SunLayoutEngine$FaceRef() {
}

$Class* SunLayoutEngine$FaceRef::load$($String* name, bool initialize) {
	$loadClass(SunLayoutEngine$FaceRef, name, initialize, &_SunLayoutEngine$FaceRef_ClassInfo_, allocate$SunLayoutEngine$FaceRef);
	return class$;
}

$Class* SunLayoutEngine$FaceRef::class$ = nullptr;

	} // font
} // sun