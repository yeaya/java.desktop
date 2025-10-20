#include <com/sun/media/sound/PortMixer.h>

#include <com/sun/media/sound/AbstractMixer.h>
#include <com/sun/media/sound/PortMixer$PortInfo.h>
#include <com/sun/media/sound/PortMixer$PortMixerPort.h>
#include <com/sun/media/sound/PortMixerProvider$PortMixerInfo.h>
#include <com/sun/media/sound/Printer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/Port$Info.h>
#include <javax/sound/sampled/Port.h>
#include <jcpp.h>

#undef COMPACT_DISC
#undef DST_HEADPHONE
#undef DST_LINE_OUT
#undef DST_MASK
#undef DST_SPEAKER
#undef DST_UNKNOWN
#undef HEADPHONE
#undef LINE_IN
#undef LINE_OUT
#undef MICROPHONE
#undef SPEAKER
#undef SRC_COMPACT_DISC
#undef SRC_LINE_IN
#undef SRC_MASK
#undef SRC_MICROPHONE
#undef SRC_UNKNOWN

using $PortMixer$PortMixerPortArray = $Array<::com::sun::media::sound::PortMixer$PortMixerPort>;
using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $Line$InfoArray = $Array<::javax::sound::sampled::Line$Info>;
using $Port$InfoArray = $Array<::javax::sound::sampled::Port$Info>;
using $AbstractMixer = ::com::sun::media::sound::AbstractMixer;
using $PortMixer$PortInfo = ::com::sun::media::sound::PortMixer$PortInfo;
using $PortMixer$PortMixerPort = ::com::sun::media::sound::PortMixer$PortMixerPort;
using $PortMixerProvider$PortMixerInfo = ::com::sun::media::sound::PortMixerProvider$PortMixerInfo;
using $Printer = ::com::sun::media::sound::Printer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;
using $Port = ::javax::sound::sampled::Port;
using $Port$Info = ::javax::sound::sampled::Port$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _PortMixer_FieldInfo_[] = {
	{"SRC_UNKNOWN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortMixer, SRC_UNKNOWN)},
	{"SRC_MICROPHONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortMixer, SRC_MICROPHONE)},
	{"SRC_LINE_IN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortMixer, SRC_LINE_IN)},
	{"SRC_COMPACT_DISC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortMixer, SRC_COMPACT_DISC)},
	{"SRC_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortMixer, SRC_MASK)},
	{"DST_UNKNOWN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortMixer, DST_UNKNOWN)},
	{"DST_SPEAKER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortMixer, DST_SPEAKER)},
	{"DST_HEADPHONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortMixer, DST_HEADPHONE)},
	{"DST_LINE_OUT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortMixer, DST_LINE_OUT)},
	{"DST_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortMixer, DST_MASK)},
	{"portInfos", "[Ljavax/sound/sampled/Port$Info;", nullptr, $PRIVATE | $FINAL, $field(PortMixer, portInfos)},
	{"ports", "[Lcom/sun/media/sound/PortMixer$PortMixerPort;", nullptr, $PRIVATE, $field(PortMixer, ports)},
	{"id", "J", nullptr, $PRIVATE, $field(PortMixer, id)},
	{}
};

$MethodInfo _PortMixer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/PortMixerProvider$PortMixerInfo;)V", nullptr, 0, $method(static_cast<void(PortMixer::*)($PortMixerProvider$PortMixerInfo*)>(&PortMixer::init$))},
	{"getID", "()J", nullptr, 0, $method(static_cast<int64_t(PortMixer::*)()>(&PortMixer::getID))},
	{"getLine", "(Ljavax/sound/sampled/Line$Info;)Ljavax/sound/sampled/Line;", nullptr, $PUBLIC, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"getMaxLines", "(Ljavax/sound/sampled/Line$Info;)I", nullptr, $PUBLIC},
	{"getMixerIndex", "()I", nullptr, 0, $method(static_cast<int32_t(PortMixer::*)()>(&PortMixer::getMixerIndex))},
	{"getPort", "(I)Ljavax/sound/sampled/Port;", nullptr, 0, $method(static_cast<$Port*(PortMixer::*)(int32_t)>(&PortMixer::getPort))},
	{"getPortInfo", "(II)Ljavax/sound/sampled/Port$Info;", nullptr, $PRIVATE, $method(static_cast<$Port$Info*(PortMixer::*)(int32_t,int32_t)>(&PortMixer::getPortInfo))},
	{"implClose", "()V", nullptr, $PROTECTED},
	{"implOpen", "()V", nullptr, $PROTECTED, nullptr, "javax.sound.sampled.LineUnavailableException"},
	{"implStart", "()V", nullptr, $PROTECTED},
	{"implStop", "()V", nullptr, $PROTECTED},
	{"nClose", "(J)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&PortMixer::nClose))},
	{"nControlGetFloatValue", "(J)F", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<float(*)(int64_t)>(&PortMixer::nControlGetFloatValue))},
	{"nControlGetIntValue", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&PortMixer::nControlGetIntValue))},
	{"nControlSetFloatValue", "(JF)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,float)>(&PortMixer::nControlSetFloatValue))},
	{"nControlSetIntValue", "(JI)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t)>(&PortMixer::nControlSetIntValue))},
	{"nGetControls", "(JILjava/util/Vector;)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,$Vector*)>(&PortMixer::nGetControls))},
	{"nGetPortCount", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&PortMixer::nGetPortCount))},
	{"nGetPortName", "(JI)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)(int64_t,int32_t)>(&PortMixer::nGetPortName))},
	{"nGetPortType", "(JI)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int32_t)>(&PortMixer::nGetPortType))},
	{"nOpen", "(I)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int32_t)>(&PortMixer::nOpen)), "javax.sound.sampled.LineUnavailableException"},
	{}
};

#define _METHOD_INDEX_nClose 11
#define _METHOD_INDEX_nControlGetFloatValue 12
#define _METHOD_INDEX_nControlGetIntValue 13
#define _METHOD_INDEX_nControlSetFloatValue 14
#define _METHOD_INDEX_nControlSetIntValue 15
#define _METHOD_INDEX_nGetControls 16
#define _METHOD_INDEX_nGetPortCount 17
#define _METHOD_INDEX_nGetPortName 18
#define _METHOD_INDEX_nGetPortType 19
#define _METHOD_INDEX_nOpen 20

$InnerClassInfo _PortMixer_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PortMixer$PortInfo", "com.sun.media.sound.PortMixer", "PortInfo", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.PortMixer$FloatCtrl", "com.sun.media.sound.PortMixer", "FloatCtrl", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.PortMixer$CompCtrl", "com.sun.media.sound.PortMixer", "CompCtrl", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.PortMixer$BoolCtrl", "com.sun.media.sound.PortMixer", "BoolCtrl", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.PortMixer$PortMixerPort", "com.sun.media.sound.PortMixer", "PortMixerPort", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PortMixer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.PortMixer",
	"com.sun.media.sound.AbstractMixer",
	nullptr,
	_PortMixer_FieldInfo_,
	_PortMixer_MethodInfo_,
	nullptr,
	nullptr,
	_PortMixer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.PortMixer$PortInfo,com.sun.media.sound.PortMixer$FloatCtrl,com.sun.media.sound.PortMixer$FloatCtrl$FCT,com.sun.media.sound.PortMixer$CompCtrl,com.sun.media.sound.PortMixer$CompCtrl$CCT,com.sun.media.sound.PortMixer$BoolCtrl,com.sun.media.sound.PortMixer$BoolCtrl$BCT,com.sun.media.sound.PortMixer$PortMixerPort"
};

$Object* allocate$PortMixer($Class* clazz) {
	return $of($alloc(PortMixer));
}

void PortMixer::init$($PortMixerProvider$PortMixerInfo* portMixerInfo) {
	$useLocalCurrentObjectStackCache();
	$AbstractMixer::init$(portMixerInfo, nullptr, nullptr, nullptr);
	this->id = 0;
	int32_t count = 0;
	int32_t srcLineCount = 0;
	int32_t dstLineCount = 0;
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				this->id = nOpen(getMixerIndex());
				if (this->id != 0) {
					count = nGetPortCount(this->id);
					if (count < 0) {
						count = 0;
					}
				}
			} catch ($Exception&) {
				$catch();
			}
			$set(this, portInfos, $new($Port$InfoArray, count));
			for (int32_t i = 0; i < count; ++i) {
				int32_t type = nGetPortType(this->id, i);
				srcLineCount += (((int32_t)(type & (uint32_t)PortMixer::SRC_MASK)) != 0) ? 1 : 0;
				dstLineCount += (((int32_t)(type & (uint32_t)PortMixer::DST_MASK)) != 0) ? 1 : 0;
				$nc(this->portInfos)->set(i, $(getPortInfo(i, type)));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (this->id != 0) {
				nClose(this->id);
			}
			this->id = 0;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$set(this, sourceLineInfo, $fcast($Line$InfoArray, $new($Port$InfoArray, srcLineCount)));
	$set(this, targetLineInfo, $fcast($Line$InfoArray, $new($Port$InfoArray, dstLineCount)));
	srcLineCount = 0;
	dstLineCount = 0;
	for (int32_t i = 0; i < count; ++i) {
		if ($nc($nc(this->portInfos)->get(i))->isSource()) {
			$nc(this->sourceLineInfo)->set(srcLineCount++, $nc(this->portInfos)->get(i));
		} else {
			$nc(this->targetLineInfo)->set(dstLineCount++, $nc(this->portInfos)->get(i));
		}
	}
}

$Line* PortMixer::getLine($Line$Info* info) {
	$useLocalCurrentObjectStackCache();
	$var($Line$Info, fullInfo, getLineInfo(info));
	if ((fullInfo != nullptr) && ($instanceOf($Port$Info, fullInfo))) {
		for (int32_t i = 0; i < $nc(this->portInfos)->length; ++i) {
			if ($of(fullInfo)->equals($nc(this->portInfos)->get(i))) {
				return getPort(i);
			}
		}
	}
	$throwNew($IllegalArgumentException, $$str({"Line unsupported: "_s, info}));
}

int32_t PortMixer::getMaxLines($Line$Info* info) {
	$var($Line$Info, fullInfo, getLineInfo(info));
	if (fullInfo == nullptr) {
		return 0;
	}
	if ($instanceOf($Port$Info, fullInfo)) {
		return 1;
	}
	return 0;
}

void PortMixer::implOpen() {
	this->id = nOpen(getMixerIndex());
}

void PortMixer::implClose() {
	int64_t thisID = this->id;
	this->id = 0;
	nClose(thisID);
	if (this->ports != nullptr) {
		for (int32_t i = 0; i < $nc(this->ports)->length; ++i) {
			if ($nc(this->ports)->get(i) != nullptr) {
				$nc($nc(this->ports)->get(i))->disposeControls();
			}
		}
	}
}

void PortMixer::implStart() {
}

void PortMixer::implStop() {
}

$Port$Info* PortMixer::getPortInfo(int32_t portIndex, int32_t type) {
	$useLocalCurrentObjectStackCache();
	switch (type) {
	case PortMixer::SRC_UNKNOWN:
		{
			return $new($PortMixer$PortInfo, $(nGetPortName(getID(), portIndex)), true);
		}
	case PortMixer::SRC_MICROPHONE:
		{
			$init($Port$Info);
			return $Port$Info::MICROPHONE;
		}
	case PortMixer::SRC_LINE_IN:
		{
			$init($Port$Info);
			return $Port$Info::LINE_IN;
		}
	case PortMixer::SRC_COMPACT_DISC:
		{
			$init($Port$Info);
			return $Port$Info::COMPACT_DISC;
		}
	case PortMixer::DST_UNKNOWN:
		{
			return $new($PortMixer$PortInfo, $(nGetPortName(getID(), portIndex)), false);
		}
	case PortMixer::DST_SPEAKER:
		{
			$init($Port$Info);
			return $Port$Info::SPEAKER;
		}
	case PortMixer::DST_HEADPHONE:
		{
			$init($Port$Info);
			return $Port$Info::HEADPHONE;
		}
	case PortMixer::DST_LINE_OUT:
		{
			$init($Port$Info);
			return $Port$Info::LINE_OUT;
		}
	}
	$init($Printer);
	if ($Printer::err$) {
		$Printer::err($$str({"unknown port type: "_s, $$str(type)}));
	}
	return nullptr;
}

int32_t PortMixer::getMixerIndex() {
	return $nc(($cast($PortMixerProvider$PortMixerInfo, $(getMixerInfo()))))->getIndex();
}

$Port* PortMixer::getPort(int32_t index) {
	if (this->ports == nullptr) {
		$set(this, ports, $new($PortMixer$PortMixerPortArray, $nc(this->portInfos)->length));
	}
	if ($nc(this->ports)->get(index) == nullptr) {
		$nc(this->ports)->set(index, $$new($PortMixer$PortMixerPort, $nc(this->portInfos)->get(index), this, index));
		return $nc(this->ports)->get(index);
	}
	return $nc(this->ports)->get(index);
}

int64_t PortMixer::getID() {
	return this->id;
}

int64_t PortMixer::nOpen(int32_t mixerIndex) {
	$init(PortMixer);
	int64_t $ret = 0;
	$prepareNativeStatic(PortMixer, nOpen, int64_t, int32_t mixerIndex);
	$ret = $invokeNativeStatic(PortMixer, nOpen, mixerIndex);
	$finishNativeStatic();
	return $ret;
}

void PortMixer::nClose(int64_t id) {
	$init(PortMixer);
	$prepareNativeStatic(PortMixer, nClose, void, int64_t id);
	$invokeNativeStatic(PortMixer, nClose, id);
	$finishNativeStatic();
}

int32_t PortMixer::nGetPortCount(int64_t id) {
	$init(PortMixer);
	int32_t $ret = 0;
	$prepareNativeStatic(PortMixer, nGetPortCount, int32_t, int64_t id);
	$ret = $invokeNativeStatic(PortMixer, nGetPortCount, id);
	$finishNativeStatic();
	return $ret;
}

int32_t PortMixer::nGetPortType(int64_t id, int32_t portIndex) {
	$init(PortMixer);
	int32_t $ret = 0;
	$prepareNativeStatic(PortMixer, nGetPortType, int32_t, int64_t id, int32_t portIndex);
	$ret = $invokeNativeStatic(PortMixer, nGetPortType, id, portIndex);
	$finishNativeStatic();
	return $ret;
}

$String* PortMixer::nGetPortName(int64_t id, int32_t portIndex) {
	$init(PortMixer);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(PortMixer, nGetPortName, $String*, int64_t id, int32_t portIndex);
	$assign($ret, $invokeNativeStatic(PortMixer, nGetPortName, id, portIndex));
	$finishNativeStatic();
	return $ret;
}

void PortMixer::nGetControls(int64_t id, int32_t portIndex, $Vector* vector) {
	$init(PortMixer);
	$prepareNativeStatic(PortMixer, nGetControls, void, int64_t id, int32_t portIndex, $Vector* vector);
	$invokeNativeStatic(PortMixer, nGetControls, id, portIndex, vector);
	$finishNativeStatic();
}

void PortMixer::nControlSetIntValue(int64_t controlID, int32_t value) {
	$init(PortMixer);
	$prepareNativeStatic(PortMixer, nControlSetIntValue, void, int64_t controlID, int32_t value);
	$invokeNativeStatic(PortMixer, nControlSetIntValue, controlID, value);
	$finishNativeStatic();
}

int32_t PortMixer::nControlGetIntValue(int64_t controlID) {
	$init(PortMixer);
	int32_t $ret = 0;
	$prepareNativeStatic(PortMixer, nControlGetIntValue, int32_t, int64_t controlID);
	$ret = $invokeNativeStatic(PortMixer, nControlGetIntValue, controlID);
	$finishNativeStatic();
	return $ret;
}

void PortMixer::nControlSetFloatValue(int64_t controlID, float value) {
	$init(PortMixer);
	$prepareNativeStatic(PortMixer, nControlSetFloatValue, void, int64_t controlID, float value);
	$invokeNativeStatic(PortMixer, nControlSetFloatValue, controlID, value);
	$finishNativeStatic();
}

float PortMixer::nControlGetFloatValue(int64_t controlID) {
	$init(PortMixer);
	float $ret = 0.0;
	$prepareNativeStatic(PortMixer, nControlGetFloatValue, float, int64_t controlID);
	$ret = $invokeNativeStatic(PortMixer, nControlGetFloatValue, controlID);
	$finishNativeStatic();
	return $ret;
}

PortMixer::PortMixer() {
}

$Class* PortMixer::load$($String* name, bool initialize) {
	$loadClass(PortMixer, name, initialize, &_PortMixer_ClassInfo_, allocate$PortMixer);
	return class$;
}

$Class* PortMixer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com