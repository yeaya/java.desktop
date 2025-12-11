#include <com/sun/media/sound/SoftVoice$1.h>

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

$FieldInfo _SoftVoice$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftVoice;", nullptr, $FINAL | $SYNTHETIC, $field(SoftVoice$1, this$0)},
	{"keynumber", "[D", nullptr, 0, $field(SoftVoice$1, keynumber)},
	{"velocity", "[D", nullptr, 0, $field(SoftVoice$1, velocity)},
	{"on", "[D", nullptr, 0, $field(SoftVoice$1, on)},
	{}
};

$MethodInfo _SoftVoice$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftVoice;)V", nullptr, 0, $method(static_cast<void(SoftVoice$1::*)($SoftVoice*)>(&SoftVoice$1::init$))},
	{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftVoice$1_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftVoice",
	nullptr,
	nullptr
};

$InnerClassInfo _SoftVoice$1_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftVoice$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftVoice$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftVoice$1",
	"java.lang.Object",
	"com.sun.media.sound.SoftControl",
	_SoftVoice$1_FieldInfo_,
	_SoftVoice$1_MethodInfo_,
	nullptr,
	&_SoftVoice$1_EnclosingMethodInfo_,
	_SoftVoice$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftVoice"
};

$Object* allocate$SoftVoice$1($Class* clazz) {
	return $of($alloc(SoftVoice$1));
}

void SoftVoice$1::init$($SoftVoice* this$0) {
	$set(this, this$0, this$0);
	$set(this, keynumber, this->this$0->co_noteon_keynumber);
	$set(this, velocity, this->this$0->co_noteon_velocity);
	$set(this, on, this->this$0->co_noteon_on);
}

$doubles* SoftVoice$1::get(int32_t instance, $String* name) {
	if (name == nullptr) {
		return nullptr;
	}
	if ($nc(name)->equals("keynumber"_s)) {
		return this->keynumber;
	}
	if ($nc(name)->equals("velocity"_s)) {
		return this->velocity;
	}
	if ($nc(name)->equals("on"_s)) {
		return this->on;
	}
	return nullptr;
}

SoftVoice$1::SoftVoice$1() {
}

$Class* SoftVoice$1::load$($String* name, bool initialize) {
	$loadClass(SoftVoice$1, name, initialize, &_SoftVoice$1_ClassInfo_, allocate$SoftVoice$1);
	return class$;
}

$Class* SoftVoice$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com