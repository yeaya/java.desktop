#include <javax/sound/sampled/DataLine$Info.h>

#include <java/util/Arrays.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/DataLine.h>
#include <javax/sound/sampled/Line$Info.h>
#include <jcpp.h>

#undef NOT_SPECIFIED

using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $DataLine = ::javax::sound::sampled::DataLine;
using $Line$Info = ::javax::sound::sampled::Line$Info;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _DataLine$Info_FieldInfo_[] = {
	{"formats", "[Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE | $FINAL, $field(DataLine$Info, formats)},
	{"minBufferSize", "I", nullptr, $PRIVATE | $FINAL, $field(DataLine$Info, minBufferSize)},
	{"maxBufferSize", "I", nullptr, $PRIVATE | $FINAL, $field(DataLine$Info, maxBufferSize)},
	{}
};

$MethodInfo _DataLine$Info_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljavax/sound/sampled/AudioFormat;II)V", "(Ljava/lang/Class<*>;[Ljavax/sound/sampled/AudioFormat;II)V", $PUBLIC, $method(static_cast<void(DataLine$Info::*)($Class*,$AudioFormatArray*,int32_t,int32_t)>(&DataLine$Info::init$))},
	{"<init>", "(Ljava/lang/Class;Ljavax/sound/sampled/AudioFormat;I)V", "(Ljava/lang/Class<*>;Ljavax/sound/sampled/AudioFormat;I)V", $PUBLIC, $method(static_cast<void(DataLine$Info::*)($Class*,$AudioFormat*,int32_t)>(&DataLine$Info::init$))},
	{"<init>", "(Ljava/lang/Class;Ljavax/sound/sampled/AudioFormat;)V", "(Ljava/lang/Class<*>;Ljavax/sound/sampled/AudioFormat;)V", $PUBLIC, $method(static_cast<void(DataLine$Info::*)($Class*,$AudioFormat*)>(&DataLine$Info::init$))},
	{"getFormats", "()[Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC},
	{"getMaxBufferSize", "()I", nullptr, $PUBLIC},
	{"getMinBufferSize", "()I", nullptr, $PUBLIC},
	{"isFormatSupported", "(Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $PUBLIC},
	{"matches", "(Ljavax/sound/sampled/Line$Info;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DataLine$Info_InnerClassesInfo_[] = {
	{"javax.sound.sampled.DataLine$Info", "javax.sound.sampled.DataLine", "Info", $PUBLIC | $STATIC},
	{"javax.sound.sampled.Line$Info", "javax.sound.sampled.Line", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DataLine$Info_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.DataLine$Info",
	"javax.sound.sampled.Line$Info",
	nullptr,
	_DataLine$Info_FieldInfo_,
	_DataLine$Info_MethodInfo_,
	nullptr,
	nullptr,
	_DataLine$Info_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.sampled.DataLine"
};

$Object* allocate$DataLine$Info($Class* clazz) {
	return $of($alloc(DataLine$Info));
}

void DataLine$Info::init$($Class* lineClass, $AudioFormatArray* formats, int32_t minBufferSize, int32_t maxBufferSize) {
	$Line$Info::init$(lineClass);
	if (formats == nullptr) {
		$set(this, formats, $new($AudioFormatArray, 0));
	} else {
		$set(this, formats, $fcast($AudioFormatArray, $Arrays::copyOf(formats, $nc(formats)->length)));
	}
	this->minBufferSize = minBufferSize;
	this->maxBufferSize = maxBufferSize;
}

void DataLine$Info::init$($Class* lineClass, $AudioFormat* format, int32_t bufferSize) {
	$Line$Info::init$(lineClass);
	if (format == nullptr) {
		$set(this, formats, $new($AudioFormatArray, 0));
	} else {
		$set(this, formats, $new($AudioFormatArray, {format}));
	}
	this->minBufferSize = bufferSize;
	this->maxBufferSize = bufferSize;
}

void DataLine$Info::init$($Class* lineClass, $AudioFormat* format) {
	DataLine$Info::init$(lineClass, format, $AudioSystem::NOT_SPECIFIED);
}

$AudioFormatArray* DataLine$Info::getFormats() {
	return $fcast($AudioFormatArray, $Arrays::copyOf(this->formats, $nc(this->formats)->length));
}

bool DataLine$Info::isFormatSupported($AudioFormat* format) {
	for (int32_t i = 0; i < $nc(this->formats)->length; ++i) {
		if ($nc(format)->matches($nc(this->formats)->get(i))) {
			return true;
		}
	}
	return false;
}

int32_t DataLine$Info::getMinBufferSize() {
	return this->minBufferSize;
}

int32_t DataLine$Info::getMaxBufferSize() {
	return this->maxBufferSize;
}

bool DataLine$Info::matches($Line$Info* info) {
	$useLocalCurrentObjectStackCache();
	if (!($Line$Info::matches(info))) {
		return false;
	}
	$var(DataLine$Info, dataLineInfo, $cast(DataLine$Info, info));
	bool var$0 = (getMaxBufferSize() >= 0);
	if (var$0 && ($nc(dataLineInfo)->getMaxBufferSize() >= 0)) {
		int32_t var$1 = getMaxBufferSize();
		if (var$1 > dataLineInfo->getMaxBufferSize()) {
			return false;
		}
	}
	bool var$2 = (getMinBufferSize() >= 0);
	if (var$2 && ($nc(dataLineInfo)->getMinBufferSize() >= 0)) {
		int32_t var$3 = getMinBufferSize();
		if (var$3 < dataLineInfo->getMinBufferSize()) {
			return false;
		}
	}
	$var($AudioFormatArray, localFormats, getFormats());
	if (localFormats != nullptr) {
		for (int32_t i = 0; i < localFormats->length; ++i) {
			if (!(localFormats->get(i) == nullptr)) {
				if (!($nc(dataLineInfo)->isFormatSupported(localFormats->get(i)))) {
					return false;
				}
			}
		}
	}
	return true;
}

$String* DataLine$Info::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, format, ""_s);
	$var($AudioFormatArray, formats, getFormats());
	if ($nc(formats)->length == 1 && formats->get(0) != nullptr) {
		$assign(format, $str({" supporting format "_s, formats->get(0)}));
	} else if (formats->length > 1) {
		$assign(format, $str({" supporting "_s, $$str(formats->length), " audio formats"_s}));
	}
	$var($String, buffers, ""_s);
	int32_t min = getMinBufferSize();
	int32_t max = getMaxBufferSize();
	if (min != $AudioSystem::NOT_SPECIFIED && max != $AudioSystem::NOT_SPECIFIED) {
		$assign(buffers, $str({", and buffers of "_s, $$str(min), " to "_s, $$str(max), " bytes"_s}));
	} else if (min > 0) {
		$assign(buffers, $str({", and buffers of at least "_s, $$str(min), " bytes"_s}));
	} else if (max != $AudioSystem::NOT_SPECIFIED) {
		$assign(buffers, $str({", and buffers of up to "_s, $$str(max), " bytes"_s}));
	}
	return $String::format("%s%s%s"_s, $$new($ObjectArray, {
		$($of($Line$Info::toString())),
		$of(format),
		$of(buffers)
	}));
}

DataLine$Info::DataLine$Info() {
}

$Class* DataLine$Info::load$($String* name, bool initialize) {
	$loadClass(DataLine$Info, name, initialize, &_DataLine$Info_ClassInfo_, allocate$DataLine$Info);
	return class$;
}

$Class* DataLine$Info::class$ = nullptr;

		} // sampled
	} // sound
} // javax