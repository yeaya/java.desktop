#include <javax/sound/sampled/TargetDataLine.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $DataLine = ::javax::sound::sampled::DataLine;

namespace javax {
	namespace sound {
		namespace sampled {

$MethodInfo _TargetDataLine_MethodInfo_[] = {
	{"open", "(Ljavax/sound/sampled/AudioFormat;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"open", "(Ljavax/sound/sampled/AudioFormat;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"read", "([BII)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TargetDataLine_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.sampled.TargetDataLine",
	nullptr,
	"javax.sound.sampled.DataLine",
	nullptr,
	_TargetDataLine_MethodInfo_
};

$Object* allocate$TargetDataLine($Class* clazz) {
	return $of($alloc(TargetDataLine));
}

$Class* TargetDataLine::load$($String* name, bool initialize) {
	$loadClass(TargetDataLine, name, initialize, &_TargetDataLine_ClassInfo_, allocate$TargetDataLine);
	return class$;
}

$Class* TargetDataLine::class$ = nullptr;

		} // sampled
	} // sound
} // javax