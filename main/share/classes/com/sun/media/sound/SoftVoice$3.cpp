#include <com/sun/media/sound/SoftVoice$3.h>

#include <com/sun/media/sound/SoftVoice.h>
#include <jcpp.h>

using $SoftControl = ::com::sun::media::sound::SoftControl;
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

$FieldInfo _SoftVoice$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftVoice;", nullptr, $FINAL | $SYNTHETIC, $field(SoftVoice$3, this$0)},
	{"pitch", "[D", nullptr, $FINAL, $field(SoftVoice$3, pitch)},
	{}
};

$MethodInfo _SoftVoice$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftVoice;)V", nullptr, 0, $method(static_cast<void(SoftVoice$3::*)($SoftVoice*)>(&SoftVoice$3::init$))},
	{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftVoice$3_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftVoice",
	nullptr,
	nullptr
};

$InnerClassInfo _SoftVoice$3_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftVoice$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftVoice$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftVoice$3",
	"java.lang.Object",
	"com.sun.media.sound.SoftControl",
	_SoftVoice$3_FieldInfo_,
	_SoftVoice$3_MethodInfo_,
	nullptr,
	&_SoftVoice$3_EnclosingMethodInfo_,
	_SoftVoice$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftVoice"
};

$Object* allocate$SoftVoice$3($Class* clazz) {
	return $of($alloc(SoftVoice$3));
}

void SoftVoice$3::init$($SoftVoice* this$0) {
	$set(this, this$0, this$0);
	$set(this, pitch, this->this$0->co_osc_pitch);
}

$doubles* SoftVoice$3::get(int32_t instance, $String* name) {
	if (name == nullptr) {
		return nullptr;
	}
	if ($nc(name)->equals("pitch"_s)) {
		return this->pitch;
	}
	return nullptr;
}

SoftVoice$3::SoftVoice$3() {
}

$Class* SoftVoice$3::load$($String* name, bool initialize) {
	$loadClass(SoftVoice$3, name, initialize, &_SoftVoice$3_ClassInfo_, allocate$SoftVoice$3);
	return class$;
}

$Class* SoftVoice$3::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com