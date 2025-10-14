#include <com/sun/media/sound/SoftChannel$MidiControlObject.h>

#include <com/sun/media/sound/SoftChannel.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SoftChannel = ::com::sun::media::sound::SoftChannel;
using $SoftControl = ::com::sun::media::sound::SoftControl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftChannel$MidiControlObject_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftChannel;", nullptr, $FINAL | $SYNTHETIC, $field(SoftChannel$MidiControlObject, this$0)},
	{"pitch", "[D", nullptr, 0, $field(SoftChannel$MidiControlObject, pitch)},
	{"channel_pressure", "[D", nullptr, 0, $field(SoftChannel$MidiControlObject, channel_pressure)},
	{"poly_pressure", "[D", nullptr, 0, $field(SoftChannel$MidiControlObject, poly_pressure)},
	{}
};

$MethodInfo _SoftChannel$MidiControlObject_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftChannel;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftChannel$MidiControlObject::*)($SoftChannel*)>(&SoftChannel$MidiControlObject::init$))},
	{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftChannel$MidiControlObject_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftChannel$MidiControlObject", "com.sun.media.sound.SoftChannel", "MidiControlObject", $PRIVATE},
	{}
};

$ClassInfo _SoftChannel$MidiControlObject_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftChannel$MidiControlObject",
	"java.lang.Object",
	"com.sun.media.sound.SoftControl",
	_SoftChannel$MidiControlObject_FieldInfo_,
	_SoftChannel$MidiControlObject_MethodInfo_,
	nullptr,
	nullptr,
	_SoftChannel$MidiControlObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftChannel"
};

$Object* allocate$SoftChannel$MidiControlObject($Class* clazz) {
	return $of($alloc(SoftChannel$MidiControlObject));
}

void SoftChannel$MidiControlObject::init$($SoftChannel* this$0) {
	$set(this, this$0, this$0);
	$set(this, pitch, this->this$0->co_midi_pitch);
	$set(this, channel_pressure, this->this$0->co_midi_channel_pressure);
	$set(this, poly_pressure, $new($doubles, 1));
}

$doubles* SoftChannel$MidiControlObject::get(int32_t instance, $String* name) {
	if (name == nullptr) {
		return nullptr;
	}
	if ($nc(name)->equals("pitch"_s)) {
		return this->pitch;
	}
	if ($nc(name)->equals("channel_pressure"_s)) {
		return this->channel_pressure;
	}
	if ($nc(name)->equals("poly_pressure"_s)) {
		return this->poly_pressure;
	}
	return nullptr;
}

SoftChannel$MidiControlObject::SoftChannel$MidiControlObject() {
}

$Class* SoftChannel$MidiControlObject::load$($String* name, bool initialize) {
	$loadClass(SoftChannel$MidiControlObject, name, initialize, &_SoftChannel$MidiControlObject_ClassInfo_, allocate$SoftChannel$MidiControlObject);
	return class$;
}

$Class* SoftChannel$MidiControlObject::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com