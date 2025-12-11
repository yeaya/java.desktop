#include <com/sun/media/sound/SoftVoice$4.h>

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

$FieldInfo _SoftVoice$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftVoice;", nullptr, $FINAL | $SYNTHETIC, $field(SoftVoice$4, this$0)},
	{"freq", "[D", nullptr, $FINAL, $field(SoftVoice$4, freq)},
	{"ftype", "[D", nullptr, $FINAL, $field(SoftVoice$4, ftype)},
	{"q", "[D", nullptr, $FINAL, $field(SoftVoice$4, q)},
	{}
};

$MethodInfo _SoftVoice$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftVoice;)V", nullptr, 0, $method(static_cast<void(SoftVoice$4::*)($SoftVoice*)>(&SoftVoice$4::init$))},
	{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftVoice$4_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftVoice",
	nullptr,
	nullptr
};

$InnerClassInfo _SoftVoice$4_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftVoice$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftVoice$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftVoice$4",
	"java.lang.Object",
	"com.sun.media.sound.SoftControl",
	_SoftVoice$4_FieldInfo_,
	_SoftVoice$4_MethodInfo_,
	nullptr,
	&_SoftVoice$4_EnclosingMethodInfo_,
	_SoftVoice$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftVoice"
};

$Object* allocate$SoftVoice$4($Class* clazz) {
	return $of($alloc(SoftVoice$4));
}

void SoftVoice$4::init$($SoftVoice* this$0) {
	$set(this, this$0, this$0);
	$set(this, freq, this->this$0->co_filter_freq);
	$set(this, ftype, this->this$0->co_filter_type);
	$set(this, q, this->this$0->co_filter_q);
}

$doubles* SoftVoice$4::get(int32_t instance, $String* name) {
	if (name == nullptr) {
		return nullptr;
	}
	if ($nc(name)->equals("freq"_s)) {
		return this->freq;
	}
	if ($nc(name)->equals("type"_s)) {
		return this->ftype;
	}
	if ($nc(name)->equals("q"_s)) {
		return this->q;
	}
	return nullptr;
}

SoftVoice$4::SoftVoice$4() {
}

$Class* SoftVoice$4::load$($String* name, bool initialize) {
	$loadClass(SoftVoice$4, name, initialize, &_SoftVoice$4_ClassInfo_, allocate$SoftVoice$4);
	return class$;
}

$Class* SoftVoice$4::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com