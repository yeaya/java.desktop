#include <javax/sound/sampled/DataLine.h>

#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace sampled {

$MethodInfo _DataLine_MethodInfo_[] = {
	{"available", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"drain", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getBufferSize", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFramePosition", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLevel", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getLongFramePosition", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isRunning", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"start", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DataLine_InnerClassesInfo_[] = {
	{"javax.sound.sampled.DataLine$Info", "javax.sound.sampled.DataLine", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DataLine_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.sampled.DataLine",
	nullptr,
	"javax.sound.sampled.Line",
	nullptr,
	_DataLine_MethodInfo_,
	nullptr,
	nullptr,
	_DataLine_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.sampled.DataLine$Info"
};

$Object* allocate$DataLine($Class* clazz) {
	return $of($alloc(DataLine));
}

$Class* DataLine::load$($String* name, bool initialize) {
	$loadClass(DataLine, name, initialize, &_DataLine_ClassInfo_, allocate$DataLine);
	return class$;
}

$Class* DataLine::class$ = nullptr;

		} // sampled
	} // sound
} // javax