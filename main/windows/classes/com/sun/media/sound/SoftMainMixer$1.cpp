#include <com/sun/media/sound/SoftMainMixer$1.h>

#include <com/sun/media/sound/SoftMainMixer.h>
#include <java/lang/Array.h>
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

using $SoftControl = ::com::sun::media::sound::SoftControl;
using $SoftMainMixer = ::com::sun::media::sound::SoftMainMixer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMainMixer$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMainMixer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMainMixer$1, this$0)},
	{"balance", "[D", nullptr, 0, $field(SoftMainMixer$1, balance)},
	{"volume", "[D", nullptr, 0, $field(SoftMainMixer$1, volume)},
	{"coarse_tuning", "[D", nullptr, 0, $field(SoftMainMixer$1, coarse_tuning)},
	{"fine_tuning", "[D", nullptr, 0, $field(SoftMainMixer$1, fine_tuning)},
	{}
};

$MethodInfo _SoftMainMixer$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMainMixer;)V", nullptr, 0, $method(static_cast<void(SoftMainMixer$1::*)($SoftMainMixer*)>(&SoftMainMixer$1::init$))},
	{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftMainMixer$1_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftMainMixer",
	nullptr,
	nullptr
};

$InnerClassInfo _SoftMainMixer$1_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMainMixer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftMainMixer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftMainMixer$1",
	"java.lang.Object",
	"com.sun.media.sound.SoftControl",
	_SoftMainMixer$1_FieldInfo_,
	_SoftMainMixer$1_MethodInfo_,
	nullptr,
	&_SoftMainMixer$1_EnclosingMethodInfo_,
	_SoftMainMixer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMainMixer"
};

$Object* allocate$SoftMainMixer$1($Class* clazz) {
	return $of($alloc(SoftMainMixer$1));
}

void SoftMainMixer$1::init$($SoftMainMixer* this$0) {
	$set(this, this$0, this$0);
	$set(this, balance, this->this$0->co_master_balance);
	$set(this, volume, this->this$0->co_master_volume);
	$set(this, coarse_tuning, this->this$0->co_master_coarse_tuning);
	$set(this, fine_tuning, this->this$0->co_master_fine_tuning);
}

$doubles* SoftMainMixer$1::get(int32_t instance, $String* name) {
	if (name == nullptr) {
		return nullptr;
	}
	if ($nc(name)->equals("balance"_s)) {
		return this->balance;
	}
	if ($nc(name)->equals("volume"_s)) {
		return this->volume;
	}
	if ($nc(name)->equals("coarse_tuning"_s)) {
		return this->coarse_tuning;
	}
	if ($nc(name)->equals("fine_tuning"_s)) {
		return this->fine_tuning;
	}
	return nullptr;
}

SoftMainMixer$1::SoftMainMixer$1() {
}

$Class* SoftMainMixer$1::load$($String* name, bool initialize) {
	$loadClass(SoftMainMixer$1, name, initialize, &_SoftMainMixer$1_ClassInfo_, allocate$SoftMainMixer$1);
	return class$;
}

$Class* SoftMainMixer$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com