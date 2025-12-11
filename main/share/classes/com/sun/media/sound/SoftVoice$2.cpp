#include <com/sun/media/sound/SoftVoice$2.h>

#include <com/sun/media/sound/SoftVoice.h>
#include <jcpp.h>

using $SoftVoice = ::com::sun::media::sound::SoftVoice;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftVoice$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftVoice;", nullptr, $FINAL | $SYNTHETIC, $field(SoftVoice$2, this$0)},
	{"active", "[D", nullptr, $FINAL, $field(SoftVoice$2, active)},
	{"gain", "[D", nullptr, $FINAL, $field(SoftVoice$2, gain)},
	{"pan", "[D", nullptr, $FINAL, $field(SoftVoice$2, pan)},
	{"balance", "[D", nullptr, $FINAL, $field(SoftVoice$2, balance)},
	{"reverb", "[D", nullptr, $FINAL, $field(SoftVoice$2, reverb)},
	{"chorus", "[D", nullptr, $FINAL, $field(SoftVoice$2, chorus)},
	{}
};

$MethodInfo _SoftVoice$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftVoice;)V", nullptr, 0, $method(static_cast<void(SoftVoice$2::*)($SoftVoice*)>(&SoftVoice$2::init$))},
	{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftVoice$2_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftVoice",
	nullptr,
	nullptr
};

$InnerClassInfo _SoftVoice$2_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftVoice$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftVoice$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftVoice$2",
	"java.lang.Object",
	"com.sun.media.sound.SoftControl",
	_SoftVoice$2_FieldInfo_,
	_SoftVoice$2_MethodInfo_,
	nullptr,
	&_SoftVoice$2_EnclosingMethodInfo_,
	_SoftVoice$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftVoice"
};

$Object* allocate$SoftVoice$2($Class* clazz) {
	return $of($alloc(SoftVoice$2));
}

void SoftVoice$2::init$($SoftVoice* this$0) {
	$set(this, this$0, this$0);
	$set(this, active, this->this$0->co_mixer_active);
	$set(this, gain, this->this$0->co_mixer_gain);
	$set(this, pan, this->this$0->co_mixer_pan);
	$set(this, balance, this->this$0->co_mixer_balance);
	$set(this, reverb, this->this$0->co_mixer_reverb);
	$set(this, chorus, this->this$0->co_mixer_chorus);
}

$doubles* SoftVoice$2::get(int32_t instance, $String* name) {
	if (name == nullptr) {
		return nullptr;
	}
	if ($nc(name)->equals("active"_s)) {
		return this->active;
	}
	if ($nc(name)->equals("gain"_s)) {
		return this->gain;
	}
	if ($nc(name)->equals("pan"_s)) {
		return this->pan;
	}
	if ($nc(name)->equals("balance"_s)) {
		return this->balance;
	}
	if ($nc(name)->equals("reverb"_s)) {
		return this->reverb;
	}
	if ($nc(name)->equals("chorus"_s)) {
		return this->chorus;
	}
	return nullptr;
}

SoftVoice$2::SoftVoice$2() {
}

$Class* SoftVoice$2::load$($String* name, bool initialize) {
	$loadClass(SoftVoice$2, name, initialize, &_SoftVoice$2_ClassInfo_, allocate$SoftVoice$2);
	return class$;
}

$Class* SoftVoice$2::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com