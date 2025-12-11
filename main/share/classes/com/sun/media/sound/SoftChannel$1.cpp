#include <com/sun/media/sound/SoftChannel$1.h>

#include <com/sun/media/sound/SoftChannel.h>
#include <jcpp.h>

using $SoftChannel = ::com::sun::media::sound::SoftChannel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftChannel$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftChannel;", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$1, this$0)},
	{"cc", "[[D", nullptr, 0, $field(SoftChannel$1, cc)},
	{}
};

$MethodInfo _SoftChannel$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftChannel;)V", nullptr, 0, $method(static_cast<void(SoftChannel$1::*)($SoftChannel*)>(&SoftChannel$1::init$))},
	{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftChannel$1_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftChannel",
	nullptr,
	nullptr
};

$InnerClassInfo _SoftChannel$1_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftChannel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SoftChannel$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftChannel$1",
	"java.lang.Object",
	"com.sun.media.sound.SoftControl",
	_SoftChannel$1_FieldInfo_,
	_SoftChannel$1_MethodInfo_,
	nullptr,
	&_SoftChannel$1_EnclosingMethodInfo_,
	_SoftChannel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftChannel"
};

$Object* allocate$SoftChannel$1($Class* clazz) {
	return $of($alloc(SoftChannel$1));
}

void SoftChannel$1::init$($SoftChannel* this$0) {
	$set(this, this$0, this$0);
	$set(this, cc, this->this$0->co_midi_cc_cc);
}

$doubles* SoftChannel$1::get(int32_t instance, $String* name) {
	if (name == nullptr) {
		return nullptr;
	}
	return $nc(this->cc)->get($Integer::parseInt(name));
}

SoftChannel$1::SoftChannel$1() {
}

$Class* SoftChannel$1::load$($String* name, bool initialize) {
	$loadClass(SoftChannel$1, name, initialize, &_SoftChannel$1_ClassInfo_, allocate$SoftChannel$1);
	return class$;
}

$Class* SoftChannel$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com