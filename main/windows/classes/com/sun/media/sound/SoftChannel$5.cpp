#include <com/sun/media/sound/SoftChannel$5.h>

#include <com/sun/media/sound/SoftChannel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ModelTransform = ::com::sun::media::sound::ModelTransform;
using $SoftChannel = ::com::sun::media::sound::SoftChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftChannel$5_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftChannel;", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$5, this$0)},
	{"val$scale", "D", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$5, val$scale)},
	{"s", "D", nullptr, 0, $field(SoftChannel$5, s)},
	{}
};

$MethodInfo _SoftChannel$5_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftChannel;D)V", "()V", 0, $method(static_cast<void(SoftChannel$5::*)($SoftChannel*,double)>(&SoftChannel$5::init$))},
	{"transform", "(D)D", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftChannel$5_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftChannel",
	"createModelConnections",
	"(Lcom/sun/media/sound/ModelIdentifier;[I[I)[Lcom/sun/media/sound/ModelConnectionBlock;"
};

$InnerClassInfo _SoftChannel$5_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftChannel$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftChannel$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftChannel$5",
	"java.lang.Object",
	"com.sun.media.sound.ModelTransform",
	_SoftChannel$5_FieldInfo_,
	_SoftChannel$5_MethodInfo_,
	nullptr,
	&_SoftChannel$5_EnclosingMethodInfo_,
	_SoftChannel$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftChannel"
};

$Object* allocate$SoftChannel$5($Class* clazz) {
	return $of($alloc(SoftChannel$5));
}

void SoftChannel$5::init$($SoftChannel* this$0, double val$scale) {
	$set(this, this$0, this$0);
	this->val$scale = val$scale;
	this->s = this->val$scale;
}

double SoftChannel$5::transform(double value) {
	double var$0 = -((5.0 / 12.0) / $Math::log((double)10));
	return var$0 * $Math::log(1 - value * this->s);
}

SoftChannel$5::SoftChannel$5() {
}

$Class* SoftChannel$5::load$($String* name, bool initialize) {
	$loadClass(SoftChannel$5, name, initialize, &_SoftChannel$5_ClassInfo_, allocate$SoftChannel$5);
	return class$;
}

$Class* SoftChannel$5::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com