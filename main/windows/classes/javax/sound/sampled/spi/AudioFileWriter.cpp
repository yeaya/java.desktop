#include <javax/sound/sampled/spi/AudioFileWriter.h>

#include <java/io/File.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

using $AudioFileFormat$TypeArray = $Array<::javax::sound::sampled::AudioFileFormat$Type>;
using $File = ::java::io::File;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;

namespace javax {
	namespace sound {
		namespace sampled {
			namespace spi {

class AudioFileWriter$$Lambda$equals : public $Predicate {
	$class(AudioFileWriter$$Lambda$equals, $NO_CLASS_INIT, $Predicate)
public:
	void init$($AudioFileFormat$Type* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* obj) override {
		 return $nc(inst$)->equals(obj);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AudioFileWriter$$Lambda$equals>());
	}
	$AudioFileFormat$Type* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AudioFileWriter$$Lambda$equals::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AudioFileWriter$$Lambda$equals, inst$)},
	{}
};
$MethodInfo AudioFileWriter$$Lambda$equals::methodInfos[3] = {
	{"<init>", "(Ljavax/sound/sampled/AudioFileFormat$Type;)V", nullptr, $PUBLIC, $method(static_cast<void(AudioFileWriter$$Lambda$equals::*)($AudioFileFormat$Type*)>(&AudioFileWriter$$Lambda$equals::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo AudioFileWriter$$Lambda$equals::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.sound.sampled.spi.AudioFileWriter$$Lambda$equals",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* AudioFileWriter$$Lambda$equals::load$($String* name, bool initialize) {
	$loadClass(AudioFileWriter$$Lambda$equals, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AudioFileWriter$$Lambda$equals::class$ = nullptr;

$MethodInfo _AudioFileWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AudioFileWriter::*)()>(&AudioFileWriter::init$))},
	{"getAudioFileTypes", "()[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAudioFileTypes", "(Ljavax/sound/sampled/AudioInputStream;)[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"isFileTypeSupported", "(Ljavax/sound/sampled/AudioFileFormat$Type;)Z", nullptr, $PUBLIC},
	{"isFileTypeSupported", "(Ljavax/sound/sampled/AudioFileFormat$Type;Ljavax/sound/sampled/AudioInputStream;)Z", nullptr, $PUBLIC},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/OutputStream;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/File;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _AudioFileWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.sampled.spi.AudioFileWriter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AudioFileWriter_MethodInfo_
};

$Object* allocate$AudioFileWriter($Class* clazz) {
	return $of($alloc(AudioFileWriter));
}

void AudioFileWriter::init$() {
}

bool AudioFileWriter::isFileTypeSupported($AudioFileFormat$Type* fileType) {
	$useLocalCurrentObjectStackCache();
	return $nc($($Arrays::stream($(getAudioFileTypes()))))->anyMatch(static_cast<$Predicate*>($$new(AudioFileWriter$$Lambda$equals, static_cast<$AudioFileFormat$Type*>($nc(fileType)))));
}

bool AudioFileWriter::isFileTypeSupported($AudioFileFormat$Type* fileType, $AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	return $nc($($Arrays::stream($(getAudioFileTypes(stream)))))->anyMatch(static_cast<$Predicate*>($$new(AudioFileWriter$$Lambda$equals, static_cast<$AudioFileFormat$Type*>($nc(fileType)))));
}

AudioFileWriter::AudioFileWriter() {
}

$Class* AudioFileWriter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AudioFileWriter$$Lambda$equals::classInfo$.name)) {
			return AudioFileWriter$$Lambda$equals::load$(name, initialize);
		}
	}
	$loadClass(AudioFileWriter, name, initialize, &_AudioFileWriter_ClassInfo_, allocate$AudioFileWriter);
	return class$;
}

$Class* AudioFileWriter::class$ = nullptr;

			} // spi
		} // sampled
	} // sound
} // javax