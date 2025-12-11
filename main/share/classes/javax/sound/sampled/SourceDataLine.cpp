#include <javax/sound/sampled/SourceDataLine.h>

#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace sampled {

$MethodInfo _SourceDataLine_MethodInfo_[] = {
	{"open", "(Ljavax/sound/sampled/AudioFormat;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"open", "(Ljavax/sound/sampled/AudioFormat;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"write", "([BII)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SourceDataLine_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.sampled.SourceDataLine",
	nullptr,
	"javax.sound.sampled.DataLine",
	nullptr,
	_SourceDataLine_MethodInfo_
};

$Object* allocate$SourceDataLine($Class* clazz) {
	return $of($alloc(SourceDataLine));
}

$Class* SourceDataLine::load$($String* name, bool initialize) {
	$loadClass(SourceDataLine, name, initialize, &_SourceDataLine_ClassInfo_, allocate$SourceDataLine);
	return class$;
}

$Class* SourceDataLine::class$ = nullptr;

		} // sampled
	} // sound
} // javax