#include <javax/sound/sampled/Clip.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

#undef LOOP_CONTINUOUSLY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $DataLine = ::javax::sound::sampled::DataLine;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _Clip_FieldInfo_[] = {
	{"LOOP_CONTINUOUSLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Clip, LOOP_CONTINUOUSLY)},
	{}
};

$MethodInfo _Clip_MethodInfo_[] = {
	{"getFrameLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMicrosecondLength", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"loop", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"open", "(Ljavax/sound/sampled/AudioFormat;[BII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"open", "(Ljavax/sound/sampled/AudioInputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.sampled.LineUnavailableException,java.io.IOException"},
	{"setFramePosition", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLoopPoints", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMicrosecondPosition", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Clip_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.sampled.Clip",
	nullptr,
	"javax.sound.sampled.DataLine",
	_Clip_FieldInfo_,
	_Clip_MethodInfo_
};

$Object* allocate$Clip($Class* clazz) {
	return $of($alloc(Clip));
}

$Class* Clip::load$($String* name, bool initialize) {
	$loadClass(Clip, name, initialize, &_Clip_ClassInfo_, allocate$Clip);
	return class$;
}

$Class* Clip::class$ = nullptr;

		} // sampled
	} // sound
} // javax