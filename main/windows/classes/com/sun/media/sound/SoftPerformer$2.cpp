#include <com/sun/media/sound/SoftPerformer$2.h>

#include <com/sun/media/sound/SoftPerformer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ModelTransform = ::com::sun::media::sound::ModelTransform;
using $SoftPerformer = ::com::sun::media::sound::SoftPerformer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftPerformer$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftPerformer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftPerformer$2, this$0)},
	{"val$scale", "D", nullptr, $FINAL | $SYNTHETIC, $field(SoftPerformer$2, val$scale)},
	{"s", "D", nullptr, 0, $field(SoftPerformer$2, s)},
	{}
};

$MethodInfo _SoftPerformer$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftPerformer;D)V", "()V", 0, $method(static_cast<void(SoftPerformer$2::*)($SoftPerformer*,double)>(&SoftPerformer$2::init$))},
	{"transform", "(D)D", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftPerformer$2_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftPerformer",
	"<init>",
	"(Lcom/sun/media/sound/ModelPerformer;)V"
};

$InnerClassInfo _SoftPerformer$2_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftPerformer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftPerformer$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftPerformer$2",
	"java.lang.Object",
	"com.sun.media.sound.ModelTransform",
	_SoftPerformer$2_FieldInfo_,
	_SoftPerformer$2_MethodInfo_,
	nullptr,
	&_SoftPerformer$2_EnclosingMethodInfo_,
	_SoftPerformer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftPerformer"
};

$Object* allocate$SoftPerformer$2($Class* clazz) {
	return $of($alloc(SoftPerformer$2));
}

void SoftPerformer$2::init$($SoftPerformer* this$0, double val$scale) {
	$set(this, this$0, this$0);
	this->val$scale = val$scale;
	this->s = this->val$scale;
}

double SoftPerformer$2::transform(double value) {
	value = value * 2 - 1;
	value *= 600;
	if (this->s == 0) {
		return value;
	} else if (this->s > 0) {
		if (value < -this->s) {
			value = -this->s;
		}
		return value;
	} else {
		if (value < this->s) {
			value = -this->s;
		}
		return -value;
	}
}

SoftPerformer$2::SoftPerformer$2() {
}

$Class* SoftPerformer$2::load$($String* name, bool initialize) {
	$loadClass(SoftPerformer$2, name, initialize, &_SoftPerformer$2_ClassInfo_, allocate$SoftPerformer$2);
	return class$;
}

$Class* SoftPerformer$2::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com