#include <com/sun/media/sound/SoftPerformer$1.h>

#include <com/sun/media/sound/SoftPerformer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ModelTransform = ::com::sun::media::sound::ModelTransform;
using $SoftPerformer = ::com::sun::media::sound::SoftPerformer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftPerformer$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SoftPerformer$1::*)()>(&SoftPerformer$1::init$))},
	{"transform", "(D)D", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftPerformer$1_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftPerformer",
	nullptr,
	nullptr
};

$InnerClassInfo _SoftPerformer$1_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftPerformer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftPerformer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftPerformer$1",
	"java.lang.Object",
	"com.sun.media.sound.ModelTransform",
	nullptr,
	_SoftPerformer$1_MethodInfo_,
	nullptr,
	&_SoftPerformer$1_EnclosingMethodInfo_,
	_SoftPerformer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftPerformer"
};

$Object* allocate$SoftPerformer$1($Class* clazz) {
	return $of($alloc(SoftPerformer$1));
}

void SoftPerformer$1::init$() {
}

double SoftPerformer$1::transform(double value) {
	int32_t v = $cast(int32_t, (value * 16384.0));
	int32_t msb = v >> 7;
	int32_t lsb = (int32_t)(v & (uint32_t)127);
	return (double)(msb * 100 + lsb);
}

SoftPerformer$1::SoftPerformer$1() {
}

$Class* SoftPerformer$1::load$($String* name, bool initialize) {
	$loadClass(SoftPerformer$1, name, initialize, &_SoftPerformer$1_ClassInfo_, allocate$SoftPerformer$1);
	return class$;
}

$Class* SoftPerformer$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com