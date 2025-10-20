#include <javax/sound/sampled/AudioSystem.h>

#include <com/sun/media/sound/JDK13Services.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFileFormat.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/Clip.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineUnavailableException.h>
#include <javax/sound/sampled/Mixer$Info.h>
#include <javax/sound/sampled/Mixer.h>
#include <javax/sound/sampled/SourceDataLine.h>
#include <javax/sound/sampled/TargetDataLine.h>
#include <javax/sound/sampled/UnsupportedAudioFileException.h>
#include <javax/sound/sampled/spi/AudioFileReader.h>
#include <javax/sound/sampled/spi/AudioFileWriter.h>
#include <javax/sound/sampled/spi/FormatConversionProvider.h>
#include <javax/sound/sampled/spi/MixerProvider.h>
#include <jcpp.h>

#undef NOT_SPECIFIED
#undef PCM_SIGNED

using $AudioFileFormat$TypeArray = $Array<::javax::sound::sampled::AudioFileFormat$Type>;
using $AudioFormat$EncodingArray = $Array<::javax::sound::sampled::AudioFormat$Encoding>;
using $AudioFormatArray = $Array<::javax::sound::sampled::AudioFormat>;
using $Line$InfoArray = $Array<::javax::sound::sampled::Line$Info>;
using $Mixer$InfoArray = $Array<::javax::sound::sampled::Mixer$Info>;
using $JDK13Services = ::com::sun::media::sound::JDK13Services;
using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $AudioFileFormat = ::javax::sound::sampled::AudioFileFormat;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $Clip = ::javax::sound::sampled::Clip;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineUnavailableException = ::javax::sound::sampled::LineUnavailableException;
using $Mixer = ::javax::sound::sampled::Mixer;
using $Mixer$Info = ::javax::sound::sampled::Mixer$Info;
using $SourceDataLine = ::javax::sound::sampled::SourceDataLine;
using $TargetDataLine = ::javax::sound::sampled::TargetDataLine;
using $UnsupportedAudioFileException = ::javax::sound::sampled::UnsupportedAudioFileException;
using $AudioFileReader = ::javax::sound::sampled::spi::AudioFileReader;
using $AudioFileWriter = ::javax::sound::sampled::spi::AudioFileWriter;
using $FormatConversionProvider = ::javax::sound::sampled::spi::FormatConversionProvider;
using $MixerProvider = ::javax::sound::sampled::spi::MixerProvider;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _AudioSystem_FieldInfo_[] = {
	{"NOT_SPECIFIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AudioSystem, NOT_SPECIFIED)},
	{}
};

$MethodInfo _AudioSystem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(AudioSystem::*)()>(&AudioSystem::init$))},
	{"getAudioFileFormat", "(Ljava/io/InputStream;)Ljavax/sound/sampled/AudioFileFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioFileFormat*(*)($InputStream*)>(&AudioSystem::getAudioFileFormat)), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioFileFormat", "(Ljava/net/URL;)Ljavax/sound/sampled/AudioFileFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioFileFormat*(*)($URL*)>(&AudioSystem::getAudioFileFormat)), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioFileFormat", "(Ljava/io/File;)Ljavax/sound/sampled/AudioFileFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioFileFormat*(*)($File*)>(&AudioSystem::getAudioFileFormat)), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioFileReaders", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/sampled/spi/AudioFileReader;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&AudioSystem::getAudioFileReaders))},
	{"getAudioFileTypes", "()[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioFileFormat$TypeArray*(*)()>(&AudioSystem::getAudioFileTypes))},
	{"getAudioFileTypes", "(Ljavax/sound/sampled/AudioInputStream;)[Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioFileFormat$TypeArray*(*)($AudioInputStream*)>(&AudioSystem::getAudioFileTypes))},
	{"getAudioFileWriters", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/sampled/spi/AudioFileWriter;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&AudioSystem::getAudioFileWriters))},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioInputStream*(*)($AudioFormat$Encoding*,$AudioInputStream*)>(&AudioSystem::getAudioInputStream))},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioInputStream*(*)($AudioFormat*,$AudioInputStream*)>(&AudioSystem::getAudioInputStream))},
	{"getAudioInputStream", "(Ljava/io/InputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioInputStream*(*)($InputStream*)>(&AudioSystem::getAudioInputStream)), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioInputStream", "(Ljava/net/URL;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioInputStream*(*)($URL*)>(&AudioSystem::getAudioInputStream)), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getAudioInputStream", "(Ljava/io/File;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioInputStream*(*)($File*)>(&AudioSystem::getAudioInputStream)), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
	{"getClip", "()Ljavax/sound/sampled/Clip;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Clip*(*)()>(&AudioSystem::getClip)), "javax.sound.sampled.LineUnavailableException"},
	{"getClip", "(Ljavax/sound/sampled/Mixer$Info;)Ljavax/sound/sampled/Clip;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Clip*(*)($Mixer$Info*)>(&AudioSystem::getClip)), "javax.sound.sampled.LineUnavailableException"},
	{"getDefaultMixer", "(Ljava/util/List;Ljavax/sound/sampled/Line$Info;)Ljavax/sound/sampled/Mixer;", "(Ljava/util/List<Ljavax/sound/sampled/spi/MixerProvider;>;Ljavax/sound/sampled/Line$Info;)Ljavax/sound/sampled/Mixer;", $PRIVATE | $STATIC, $method(static_cast<$Mixer*(*)($List*,$Line$Info*)>(&AudioSystem::getDefaultMixer))},
	{"getFirstMixer", "(Ljavax/sound/sampled/spi/MixerProvider;Ljavax/sound/sampled/Line$Info;Z)Ljavax/sound/sampled/Mixer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Mixer*(*)($MixerProvider*,$Line$Info*,bool)>(&AudioSystem::getFirstMixer))},
	{"getFormatConversionProviders", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/sampled/spi/FormatConversionProvider;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&AudioSystem::getFormatConversionProviders))},
	{"getLine", "(Ljavax/sound/sampled/Line$Info;)Ljavax/sound/sampled/Line;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Line*(*)($Line$Info*)>(&AudioSystem::getLine)), "javax.sound.sampled.LineUnavailableException"},
	{"getMixer", "(Ljavax/sound/sampled/Mixer$Info;)Ljavax/sound/sampled/Mixer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Mixer*(*)($Mixer$Info*)>(&AudioSystem::getMixer))},
	{"getMixerInfo", "()[Ljavax/sound/sampled/Mixer$Info;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Mixer$InfoArray*(*)()>(&AudioSystem::getMixerInfo))},
	{"getMixerInfoList", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/sampled/Mixer$Info;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&AudioSystem::getMixerInfoList))},
	{"getMixerInfoList", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Ljavax/sound/sampled/spi/MixerProvider;>;)Ljava/util/List<Ljavax/sound/sampled/Mixer$Info;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($List*)>(&AudioSystem::getMixerInfoList))},
	{"getMixerProviders", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/sound/sampled/spi/MixerProvider;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&AudioSystem::getMixerProviders))},
	{"getNamedMixer", "(Ljava/lang/String;Ljavax/sound/sampled/spi/MixerProvider;Ljavax/sound/sampled/Line$Info;)Ljavax/sound/sampled/Mixer;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Mixer*(*)($String*,$MixerProvider*,$Line$Info*)>(&AudioSystem::getNamedMixer))},
	{"getNamedMixer", "(Ljava/lang/String;Ljava/util/List;Ljavax/sound/sampled/Line$Info;)Ljavax/sound/sampled/Mixer;", "(Ljava/lang/String;Ljava/util/List<Ljavax/sound/sampled/spi/MixerProvider;>;Ljavax/sound/sampled/Line$Info;)Ljavax/sound/sampled/Mixer;", $PRIVATE | $STATIC, $method(static_cast<$Mixer*(*)($String*,$List*,$Line$Info*)>(&AudioSystem::getNamedMixer))},
	{"getNamedProvider", "(Ljava/lang/String;Ljava/util/List;)Ljavax/sound/sampled/spi/MixerProvider;", "(Ljava/lang/String;Ljava/util/List<Ljavax/sound/sampled/spi/MixerProvider;>;)Ljavax/sound/sampled/spi/MixerProvider;", $PRIVATE | $STATIC, $method(static_cast<$MixerProvider*(*)($String*,$List*)>(&AudioSystem::getNamedProvider))},
	{"getProviders", "(Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;)Ljava/util/List<*>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($Class*)>(&AudioSystem::getProviders))},
	{"getSourceDataLine", "(Ljavax/sound/sampled/AudioFormat;)Ljavax/sound/sampled/SourceDataLine;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SourceDataLine*(*)($AudioFormat*)>(&AudioSystem::getSourceDataLine)), "javax.sound.sampled.LineUnavailableException"},
	{"getSourceDataLine", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/Mixer$Info;)Ljavax/sound/sampled/SourceDataLine;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SourceDataLine*(*)($AudioFormat*,$Mixer$Info*)>(&AudioSystem::getSourceDataLine)), "javax.sound.sampled.LineUnavailableException"},
	{"getSourceLineInfo", "(Ljavax/sound/sampled/Line$Info;)[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Line$InfoArray*(*)($Line$Info*)>(&AudioSystem::getSourceLineInfo))},
	{"getTargetDataLine", "(Ljavax/sound/sampled/AudioFormat;)Ljavax/sound/sampled/TargetDataLine;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TargetDataLine*(*)($AudioFormat*)>(&AudioSystem::getTargetDataLine)), "javax.sound.sampled.LineUnavailableException"},
	{"getTargetDataLine", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/Mixer$Info;)Ljavax/sound/sampled/TargetDataLine;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$TargetDataLine*(*)($AudioFormat*,$Mixer$Info*)>(&AudioSystem::getTargetDataLine)), "javax.sound.sampled.LineUnavailableException"},
	{"getTargetEncodings", "(Ljavax/sound/sampled/AudioFormat$Encoding;)[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioFormat$EncodingArray*(*)($AudioFormat$Encoding*)>(&AudioSystem::getTargetEncodings))},
	{"getTargetEncodings", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioFormat$EncodingArray*(*)($AudioFormat*)>(&AudioSystem::getTargetEncodings))},
	{"getTargetFormats", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AudioFormatArray*(*)($AudioFormat$Encoding*,$AudioFormat*)>(&AudioSystem::getTargetFormats))},
	{"getTargetLineInfo", "(Ljavax/sound/sampled/Line$Info;)[Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Line$InfoArray*(*)($Line$Info*)>(&AudioSystem::getTargetLineInfo))},
	{"isAppropriateMixer", "(Ljavax/sound/sampled/Mixer;Ljavax/sound/sampled/Line$Info;Z)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Mixer*,$Line$Info*,bool)>(&AudioSystem::isAppropriateMixer))},
	{"isConversionSupported", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AudioFormat$Encoding*,$AudioFormat*)>(&AudioSystem::isConversionSupported))},
	{"isConversionSupported", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AudioFormat*,$AudioFormat*)>(&AudioSystem::isConversionSupported))},
	{"isFileTypeSupported", "(Ljavax/sound/sampled/AudioFileFormat$Type;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AudioFileFormat$Type*)>(&AudioSystem::isFileTypeSupported))},
	{"isFileTypeSupported", "(Ljavax/sound/sampled/AudioFileFormat$Type;Ljavax/sound/sampled/AudioInputStream;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AudioFileFormat$Type*,$AudioInputStream*)>(&AudioSystem::isFileTypeSupported))},
	{"isLineSupported", "(Ljavax/sound/sampled/Line$Info;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Line$Info*)>(&AudioSystem::isLineSupported))},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/OutputStream;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($AudioInputStream*,$AudioFileFormat$Type*,$OutputStream*)>(&AudioSystem::write)), "java.io.IOException"},
	{"write", "(Ljavax/sound/sampled/AudioInputStream;Ljavax/sound/sampled/AudioFileFormat$Type;Ljava/io/File;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($AudioInputStream*,$AudioFileFormat$Type*,$File*)>(&AudioSystem::write)), "java.io.IOException"},
	{}
};

$ClassInfo _AudioSystem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.AudioSystem",
	"java.lang.Object",
	nullptr,
	_AudioSystem_FieldInfo_,
	_AudioSystem_MethodInfo_
};

$Object* allocate$AudioSystem($Class* clazz) {
	return $of($alloc(AudioSystem));
}

void AudioSystem::init$() {
}

$Mixer$InfoArray* AudioSystem::getMixerInfo() {
	$useLocalCurrentObjectStackCache();
	$var($List, infos, getMixerInfoList());
	$var($Mixer$InfoArray, allInfos, $fcast($Mixer$InfoArray, $nc(infos)->toArray($$new($Mixer$InfoArray, infos->size()))));
	return allInfos;
}

$Mixer* AudioSystem::getMixer($Mixer$Info* info) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($(getMixerProviders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MixerProvider, provider, $cast($MixerProvider, i$->next()));
			{
				try {
					return $nc(provider)->getMixer(info);
				} catch ($IllegalArgumentException&) {
					$var($RuntimeException, ignored, $catch());
				} catch ($NullPointerException&) {
					$var($RuntimeException, ignored, $catch());
				}
			}
		}
	}
	$throwNew($IllegalArgumentException, $($String::format("Mixer not supported: %s"_s, $$new($ObjectArray, {$of(info)}))));
	$shouldNotReachHere();
}

$Line$InfoArray* AudioSystem::getSourceLineInfo($Line$Info* info) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, vector, $new($Vector));
	$var($Line$InfoArray, currentInfoArray, nullptr);
	$var($Mixer, mixer, nullptr);
	$var($Line$Info, fullInfo, nullptr);
	$var($Mixer$InfoArray, infoArray, getMixerInfo());
	for (int32_t i = 0; i < $nc(infoArray)->length; ++i) {
		$assign(mixer, getMixer(infoArray->get(i)));
		$assign(currentInfoArray, $nc(mixer)->getSourceLineInfo(info));
		for (int32_t j = 0; j < $nc(currentInfoArray)->length; ++j) {
			vector->addElement(currentInfoArray->get(j));
		}
	}
	$var($Line$InfoArray, returnedArray, $new($Line$InfoArray, vector->size()));
	for (int32_t i = 0; i < returnedArray->length; ++i) {
		returnedArray->set(i, $cast($Line$Info, $(vector->get(i))));
	}
	return returnedArray;
}

$Line$InfoArray* AudioSystem::getTargetLineInfo($Line$Info* info) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, vector, $new($Vector));
	$var($Line$InfoArray, currentInfoArray, nullptr);
	$var($Mixer, mixer, nullptr);
	$var($Line$Info, fullInfo, nullptr);
	$var($Mixer$InfoArray, infoArray, getMixerInfo());
	for (int32_t i = 0; i < $nc(infoArray)->length; ++i) {
		$assign(mixer, getMixer(infoArray->get(i)));
		$assign(currentInfoArray, $nc(mixer)->getTargetLineInfo(info));
		for (int32_t j = 0; j < $nc(currentInfoArray)->length; ++j) {
			vector->addElement(currentInfoArray->get(j));
		}
	}
	$var($Line$InfoArray, returnedArray, $new($Line$InfoArray, vector->size()));
	for (int32_t i = 0; i < returnedArray->length; ++i) {
		returnedArray->set(i, $cast($Line$Info, $(vector->get(i))));
	}
	return returnedArray;
}

bool AudioSystem::isLineSupported($Line$Info* info) {
	$useLocalCurrentObjectStackCache();
	$var($Mixer, mixer, nullptr);
	$var($Mixer$InfoArray, infoArray, getMixerInfo());
	for (int32_t i = 0; i < $nc(infoArray)->length; ++i) {
		if (infoArray->get(i) != nullptr) {
			$assign(mixer, getMixer(infoArray->get(i)));
			if ($nc(mixer)->isLineSupported(info)) {
				return true;
			}
		}
	}
	return false;
}

$Line* AudioSystem::getLine($Line$Info* info) {
	$useLocalCurrentObjectStackCache();
	$var($LineUnavailableException, lue, nullptr);
	$var($List, providers, getMixerProviders());
	try {
		$var($Mixer, mixer, getDefaultMixer(providers, info));
		if (mixer != nullptr && mixer->isLineSupported(info)) {
			return mixer->getLine(info);
		}
	} catch ($LineUnavailableException&) {
		$var($LineUnavailableException, e, $catch());
		$assign(lue, e);
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MixerProvider, provider, $cast($MixerProvider, providers->get(i)));
		$var($Mixer$InfoArray, infos, $nc(provider)->getMixerInfo());
		for (int32_t j = 0; j < $nc(infos)->length; ++j) {
			try {
				$var($Mixer, mixer, provider->getMixer(infos->get(j)));
				if (isAppropriateMixer(mixer, info, true)) {
					return $nc(mixer)->getLine(info);
				}
			} catch ($LineUnavailableException&) {
				$var($LineUnavailableException, e, $catch());
				$assign(lue, e);
			} catch ($IllegalArgumentException&) {
				$catch();
			}
		}
	}
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MixerProvider, provider, $cast($MixerProvider, providers->get(i)));
		$var($Mixer$InfoArray, infos, $nc(provider)->getMixerInfo());
		for (int32_t j = 0; j < $nc(infos)->length; ++j) {
			try {
				$var($Mixer, mixer, provider->getMixer(infos->get(j)));
				if (isAppropriateMixer(mixer, info, false)) {
					return $nc(mixer)->getLine(info);
				}
			} catch ($LineUnavailableException&) {
				$var($LineUnavailableException, e, $catch());
				$assign(lue, e);
			} catch ($IllegalArgumentException&) {
				$catch();
			}
		}
	}
	if (lue != nullptr) {
		$throw(lue);
	}
	$throwNew($IllegalArgumentException, $$str({"No line matching "_s, $($nc(info)->toString()), " is supported."_s}));
	$shouldNotReachHere();
}

$Clip* AudioSystem::getClip() {
	$useLocalCurrentObjectStackCache();
	$init($AudioFormat$Encoding);
	$var($AudioFormat, format, $new($AudioFormat, $AudioFormat$Encoding::PCM_SIGNED, (float)AudioSystem::NOT_SPECIFIED, 16, 2, 4, (float)AudioSystem::NOT_SPECIFIED, true));
	$load($Clip);
	$var($DataLine$Info, info, $new($DataLine$Info, $Clip::class$, format));
	return $cast($Clip, AudioSystem::getLine(info));
}

$Clip* AudioSystem::getClip($Mixer$Info* mixerInfo) {
	$useLocalCurrentObjectStackCache();
	$init($AudioFormat$Encoding);
	$var($AudioFormat, format, $new($AudioFormat, $AudioFormat$Encoding::PCM_SIGNED, (float)AudioSystem::NOT_SPECIFIED, 16, 2, 4, (float)AudioSystem::NOT_SPECIFIED, true));
	$load($Clip);
	$var($DataLine$Info, info, $new($DataLine$Info, $Clip::class$, format));
	$var($Mixer, mixer, AudioSystem::getMixer(mixerInfo));
	return $cast($Clip, $nc(mixer)->getLine(info));
}

$SourceDataLine* AudioSystem::getSourceDataLine($AudioFormat* format) {
	$load($SourceDataLine);
	$var($DataLine$Info, info, $new($DataLine$Info, $SourceDataLine::class$, format));
	return $cast($SourceDataLine, AudioSystem::getLine(info));
}

$SourceDataLine* AudioSystem::getSourceDataLine($AudioFormat* format, $Mixer$Info* mixerinfo) {
	$useLocalCurrentObjectStackCache();
	$load($SourceDataLine);
	$var($DataLine$Info, info, $new($DataLine$Info, $SourceDataLine::class$, format));
	$var($Mixer, mixer, AudioSystem::getMixer(mixerinfo));
	return $cast($SourceDataLine, $nc(mixer)->getLine(info));
}

$TargetDataLine* AudioSystem::getTargetDataLine($AudioFormat* format) {
	$load($TargetDataLine);
	$var($DataLine$Info, info, $new($DataLine$Info, $TargetDataLine::class$, format));
	return $cast($TargetDataLine, AudioSystem::getLine(info));
}

$TargetDataLine* AudioSystem::getTargetDataLine($AudioFormat* format, $Mixer$Info* mixerinfo) {
	$useLocalCurrentObjectStackCache();
	$load($TargetDataLine);
	$var($DataLine$Info, info, $new($DataLine$Info, $TargetDataLine::class$, format));
	$var($Mixer, mixer, AudioSystem::getMixer(mixerinfo));
	return $cast($TargetDataLine, $nc(mixer)->getLine(info));
}

$AudioFormat$EncodingArray* AudioSystem::getTargetEncodings($AudioFormat$Encoding* sourceEncoding) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(sourceEncoding);
	$var($List, codecs, getFormatConversionProviders());
	$var($Vector, encodings, $new($Vector));
	$var($AudioFormat$EncodingArray, encs, nullptr);
	for (int32_t i = 0; i < $nc(codecs)->size(); ++i) {
		$var($FormatConversionProvider, codec, $cast($FormatConversionProvider, codecs->get(i)));
		if ($nc(codec)->isSourceEncodingSupported(sourceEncoding)) {
			$assign(encs, codec->getTargetEncodings());
			for (int32_t j = 0; j < $nc(encs)->length; ++j) {
				encodings->addElement(encs->get(j));
			}
		}
	}
	if (!encodings->contains(sourceEncoding)) {
		encodings->addElement(sourceEncoding);
	}
	return $fcast($AudioFormat$EncodingArray, encodings->toArray($$new($AudioFormat$EncodingArray, encodings->size())));
}

$AudioFormat$EncodingArray* AudioSystem::getTargetEncodings($AudioFormat* sourceFormat) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(sourceFormat);
	$var($List, codecs, getFormatConversionProviders());
	$var($List, encs, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(codecs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($FormatConversionProvider, codec, $cast($FormatConversionProvider, i$->next()));
			{
				$Collections::addAll(encs, $($nc(codec)->getTargetEncodings(sourceFormat)));
			}
		}
	}
	if (!encs->contains($(sourceFormat->getEncoding()))) {
		encs->add($(sourceFormat->getEncoding()));
	}
	return $fcast($AudioFormat$EncodingArray, encs->toArray($$new($AudioFormat$EncodingArray, encs->size())));
}

bool AudioSystem::isConversionSupported($AudioFormat$Encoding* targetEncoding, $AudioFormat* sourceFormat) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(targetEncoding);
	$Objects::requireNonNull(sourceFormat);
	if ($nc($(sourceFormat->getEncoding()))->equals(targetEncoding)) {
		return true;
	}
	$var($List, codecs, getFormatConversionProviders());
	for (int32_t i = 0; i < $nc(codecs)->size(); ++i) {
		$var($FormatConversionProvider, codec, $cast($FormatConversionProvider, codecs->get(i)));
		if ($nc(codec)->isConversionSupported(targetEncoding, sourceFormat)) {
			return true;
		}
	}
	return false;
}

$AudioInputStream* AudioSystem::getAudioInputStream($AudioFormat$Encoding* targetEncoding, $AudioInputStream* sourceStream) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(targetEncoding);
	$Objects::requireNonNull(sourceStream);
	if ($nc($($nc($(sourceStream->getFormat()))->getEncoding()))->equals(targetEncoding)) {
		return sourceStream;
	}
	$var($List, codecs, getFormatConversionProviders());
	for (int32_t i = 0; i < $nc(codecs)->size(); ++i) {
		$var($FormatConversionProvider, codec, $cast($FormatConversionProvider, codecs->get(i)));
		if ($nc(codec)->isConversionSupported(targetEncoding, $(sourceStream->getFormat()))) {
			return codec->getAudioInputStream(targetEncoding, sourceStream);
		}
	}
	$var($String, var$0, $$str({"Unsupported conversion: "_s, targetEncoding, " from "_s}));
	$throwNew($IllegalArgumentException, $$concat(var$0, $(sourceStream->getFormat())));
}

$AudioFormatArray* AudioSystem::getTargetFormats($AudioFormat$Encoding* targetEncoding, $AudioFormat* sourceFormat) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(targetEncoding);
	$Objects::requireNonNull(sourceFormat);
	$var($List, codecs, getFormatConversionProviders());
	$var($List, formats, $new($ArrayList));
	bool matchFound = false;
	{
		$var($Iterator, i$, $nc(codecs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($FormatConversionProvider, codec, $cast($FormatConversionProvider, i$->next()));
			{
				$var($AudioFormatArray, elements, $nc(codec)->getTargetFormats(targetEncoding, sourceFormat));
				{
					$var($AudioFormatArray, arr$, elements);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($AudioFormat, format, arr$->get(i$));
						{
							formats->add(format);
							if (sourceFormat->matches(format)) {
								matchFound = true;
							}
						}
					}
				}
			}
		}
	}
	if (targetEncoding->equals($(sourceFormat->getEncoding()))) {
		if (!matchFound) {
			formats->add(sourceFormat);
		}
	}
	return $fcast($AudioFormatArray, formats->toArray($$new($AudioFormatArray, formats->size())));
}

bool AudioSystem::isConversionSupported($AudioFormat* targetFormat, $AudioFormat* sourceFormat) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(targetFormat);
	$Objects::requireNonNull(sourceFormat);
	if (sourceFormat->matches(targetFormat)) {
		return true;
	}
	$var($List, codecs, getFormatConversionProviders());
	for (int32_t i = 0; i < $nc(codecs)->size(); ++i) {
		$var($FormatConversionProvider, codec, $cast($FormatConversionProvider, codecs->get(i)));
		if ($nc(codec)->isConversionSupported(targetFormat, sourceFormat)) {
			return true;
		}
	}
	return false;
}

$AudioInputStream* AudioSystem::getAudioInputStream($AudioFormat* targetFormat, $AudioInputStream* sourceStream) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(sourceStream)->getFormat()))->matches(targetFormat)) {
		return sourceStream;
	}
	$var($List, codecs, getFormatConversionProviders());
	for (int32_t i = 0; i < $nc(codecs)->size(); ++i) {
		$var($FormatConversionProvider, codec, $cast($FormatConversionProvider, codecs->get(i)));
		if ($nc(codec)->isConversionSupported(targetFormat, $($nc(sourceStream)->getFormat()))) {
			return codec->getAudioInputStream(targetFormat, sourceStream);
		}
	}
	$var($String, var$0, $$str({"Unsupported conversion: "_s, targetFormat, " from "_s}));
	$throwNew($IllegalArgumentException, $$concat(var$0, $($nc(sourceStream)->getFormat())));
}

$AudioFileFormat* AudioSystem::getAudioFileFormat($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(stream);
	{
		$var($Iterator, i$, $nc($(getAudioFileReaders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AudioFileReader, reader, $cast($AudioFileReader, i$->next()));
			{
				try {
					return $nc(reader)->getAudioFileFormat(stream);
				} catch ($UnsupportedAudioFileException&) {
					$catch();
				}
			}
		}
	}
	$throwNew($UnsupportedAudioFileException, "Stream of unsupported format"_s);
	$shouldNotReachHere();
}

$AudioFileFormat* AudioSystem::getAudioFileFormat($URL* url) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(url);
	{
		$var($Iterator, i$, $nc($(getAudioFileReaders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AudioFileReader, reader, $cast($AudioFileReader, i$->next()));
			{
				try {
					return $nc(reader)->getAudioFileFormat(url);
				} catch ($UnsupportedAudioFileException&) {
					$catch();
				}
			}
		}
	}
	$throwNew($UnsupportedAudioFileException, "URL of unsupported format"_s);
	$shouldNotReachHere();
}

$AudioFileFormat* AudioSystem::getAudioFileFormat($File* file) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(file);
	{
		$var($Iterator, i$, $nc($(getAudioFileReaders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AudioFileReader, reader, $cast($AudioFileReader, i$->next()));
			{
				try {
					return $nc(reader)->getAudioFileFormat(file);
				} catch ($UnsupportedAudioFileException&) {
					$catch();
				}
			}
		}
	}
	$throwNew($UnsupportedAudioFileException, "File of unsupported format"_s);
	$shouldNotReachHere();
}

$AudioInputStream* AudioSystem::getAudioInputStream($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(stream);
	{
		$var($Iterator, i$, $nc($(getAudioFileReaders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AudioFileReader, reader, $cast($AudioFileReader, i$->next()));
			{
				try {
					return $nc(reader)->getAudioInputStream(stream);
				} catch ($UnsupportedAudioFileException&) {
					$catch();
				}
			}
		}
	}
	$throwNew($UnsupportedAudioFileException, "Stream of unsupported format"_s);
	$shouldNotReachHere();
}

$AudioInputStream* AudioSystem::getAudioInputStream($URL* url) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(url);
	{
		$var($Iterator, i$, $nc($(getAudioFileReaders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AudioFileReader, reader, $cast($AudioFileReader, i$->next()));
			{
				try {
					return $nc(reader)->getAudioInputStream(url);
				} catch ($UnsupportedAudioFileException&) {
					$catch();
				}
			}
		}
	}
	$throwNew($UnsupportedAudioFileException, "URL of unsupported format"_s);
	$shouldNotReachHere();
}

$AudioInputStream* AudioSystem::getAudioInputStream($File* file) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(file);
	{
		$var($Iterator, i$, $nc($(getAudioFileReaders()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AudioFileReader, reader, $cast($AudioFileReader, i$->next()));
			{
				try {
					return $nc(reader)->getAudioInputStream(file);
				} catch ($UnsupportedAudioFileException&) {
					$catch();
				}
			}
		}
	}
	$throwNew($UnsupportedAudioFileException, "File of unsupported format"_s);
	$shouldNotReachHere();
}

$AudioFileFormat$TypeArray* AudioSystem::getAudioFileTypes() {
	$useLocalCurrentObjectStackCache();
	$var($List, providers, getAudioFileWriters());
	$var($Set, returnTypesSet, $new($HashSet));
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($AudioFileWriter, writer, $cast($AudioFileWriter, providers->get(i)));
		$var($AudioFileFormat$TypeArray, fileTypes, $nc(writer)->getAudioFileTypes());
		for (int32_t j = 0; j < $nc(fileTypes)->length; ++j) {
			returnTypesSet->add(fileTypes->get(j));
		}
	}
	$var($AudioFileFormat$TypeArray, returnTypes, $fcast($AudioFileFormat$TypeArray, returnTypesSet->toArray($$new($AudioFileFormat$TypeArray, 0))));
	return returnTypes;
}

bool AudioSystem::isFileTypeSupported($AudioFileFormat$Type* fileType) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(fileType);
	$var($List, providers, getAudioFileWriters());
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($AudioFileWriter, writer, $cast($AudioFileWriter, providers->get(i)));
		if ($nc(writer)->isFileTypeSupported(fileType)) {
			return true;
		}
	}
	return false;
}

$AudioFileFormat$TypeArray* AudioSystem::getAudioFileTypes($AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(stream);
	$var($List, providers, getAudioFileWriters());
	$var($Set, returnTypesSet, $new($HashSet));
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($AudioFileWriter, writer, $cast($AudioFileWriter, providers->get(i)));
		$var($AudioFileFormat$TypeArray, fileTypes, $nc(writer)->getAudioFileTypes(stream));
		for (int32_t j = 0; j < $nc(fileTypes)->length; ++j) {
			returnTypesSet->add(fileTypes->get(j));
		}
	}
	$var($AudioFileFormat$TypeArray, returnTypes, $fcast($AudioFileFormat$TypeArray, returnTypesSet->toArray($$new($AudioFileFormat$TypeArray, 0))));
	return returnTypes;
}

bool AudioSystem::isFileTypeSupported($AudioFileFormat$Type* fileType, $AudioInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(fileType);
	$Objects::requireNonNull(stream);
	$var($List, providers, getAudioFileWriters());
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($AudioFileWriter, writer, $cast($AudioFileWriter, providers->get(i)));
		if ($nc(writer)->isFileTypeSupported(fileType, stream)) {
			return true;
		}
	}
	return false;
}

int32_t AudioSystem::write($AudioInputStream* stream, $AudioFileFormat$Type* fileType, $OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(stream);
	$Objects::requireNonNull(fileType);
	$Objects::requireNonNull(out);
	{
		$var($Iterator, i$, $nc($(getAudioFileWriters()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AudioFileWriter, writer, $cast($AudioFileWriter, i$->next()));
			{
				try {
					return $nc(writer)->write(stream, fileType, out);
				} catch ($IllegalArgumentException&) {
					$catch();
				}
			}
		}
	}
	$throwNew($IllegalArgumentException, $$str({"could not write audio file: file type not supported: "_s, fileType}));
	$shouldNotReachHere();
}

int32_t AudioSystem::write($AudioInputStream* stream, $AudioFileFormat$Type* fileType, $File* out) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(stream);
	$Objects::requireNonNull(fileType);
	$Objects::requireNonNull(out);
	{
		$var($Iterator, i$, $nc($(getAudioFileWriters()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AudioFileWriter, writer, $cast($AudioFileWriter, i$->next()));
			{
				try {
					return $nc(writer)->write(stream, fileType, out);
				} catch ($IllegalArgumentException&) {
					$catch();
				}
			}
		}
	}
	$throwNew($IllegalArgumentException, $$str({"could not write audio file: file type not supported: "_s, fileType}));
	$shouldNotReachHere();
}

$List* AudioSystem::getMixerProviders() {
	$load($MixerProvider);
	return getProviders($MixerProvider::class$);
}

$List* AudioSystem::getFormatConversionProviders() {
	$load($FormatConversionProvider);
	return getProviders($FormatConversionProvider::class$);
}

$List* AudioSystem::getAudioFileReaders() {
	$load($AudioFileReader);
	return getProviders($AudioFileReader::class$);
}

$List* AudioSystem::getAudioFileWriters() {
	$load($AudioFileWriter);
	return getProviders($AudioFileWriter::class$);
}

$Mixer* AudioSystem::getDefaultMixer($List* providers, $Line$Info* info) {
	$useLocalCurrentObjectStackCache();
	$Class* lineClass = $nc(info)->getLineClass();
	$var($String, providerClassName, $JDK13Services::getDefaultProviderClassName(lineClass));
	$var($String, instanceName, $JDK13Services::getDefaultInstanceName(lineClass));
	$var($Mixer, mixer, nullptr);
	if (providerClassName != nullptr) {
		$var($MixerProvider, defaultProvider, getNamedProvider(providerClassName, providers));
		if (defaultProvider != nullptr) {
			if (instanceName != nullptr) {
				$assign(mixer, getNamedMixer(instanceName, defaultProvider, info));
				if (mixer != nullptr) {
					return mixer;
				}
			} else {
				$assign(mixer, getFirstMixer(defaultProvider, info, false));
				if (mixer != nullptr) {
					return mixer;
				}
			}
		}
	}
	if (instanceName != nullptr) {
		$assign(mixer, getNamedMixer(instanceName, providers, info));
		if (mixer != nullptr) {
			return mixer;
		}
	}
	return nullptr;
}

$MixerProvider* AudioSystem::getNamedProvider($String* providerClassName, $List* providers) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MixerProvider, provider, $cast($MixerProvider, providers->get(i)));
		if ($nc($($nc($of(provider))->getClass()->getName()))->equals(providerClassName)) {
			return provider;
		}
	}
	return nullptr;
}

$Mixer* AudioSystem::getNamedMixer($String* mixerName, $MixerProvider* provider, $Line$Info* info) {
	$useLocalCurrentObjectStackCache();
	$var($Mixer$InfoArray, infos, $nc(provider)->getMixerInfo());
	for (int32_t i = 0; i < $nc(infos)->length; ++i) {
		if ($nc($($nc(infos->get(i))->getName()))->equals(mixerName)) {
			$var($Mixer, mixer, provider->getMixer(infos->get(i)));
			if (isAppropriateMixer(mixer, info, false)) {
				return mixer;
			}
		}
	}
	return nullptr;
}

$Mixer* AudioSystem::getNamedMixer($String* mixerName, $List* providers, $Line$Info* info) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$var($MixerProvider, provider, $cast($MixerProvider, providers->get(i)));
		$var($Mixer, mixer, getNamedMixer(mixerName, provider, info));
		if (mixer != nullptr) {
			return mixer;
		}
	}
	return nullptr;
}

$Mixer* AudioSystem::getFirstMixer($MixerProvider* provider, $Line$Info* info, bool isMixingRequired) {
	$useLocalCurrentObjectStackCache();
	$var($Mixer$InfoArray, infos, $nc(provider)->getMixerInfo());
	for (int32_t j = 0; j < $nc(infos)->length; ++j) {
		$var($Mixer, mixer, provider->getMixer(infos->get(j)));
		if (isAppropriateMixer(mixer, info, isMixingRequired)) {
			return mixer;
		}
	}
	return nullptr;
}

bool AudioSystem::isAppropriateMixer($Mixer* mixer, $Line$Info* lineInfo, bool isMixingRequired) {
	if (!$nc(mixer)->isLineSupported(lineInfo)) {
		return false;
	}
	$Class* lineClass = $nc(lineInfo)->getLineClass();
	bool var$0 = isMixingRequired;
	if (var$0) {
		$load($SourceDataLine);
		bool var$1 = $SourceDataLine::class$->isAssignableFrom(lineClass);
		$load($Clip);
		var$0 = (var$1 || $Clip::class$->isAssignableFrom(lineClass));
	}
	if (var$0) {
		int32_t maxLines = $nc(mixer)->getMaxLines(lineInfo);
		return ((maxLines == AudioSystem::NOT_SPECIFIED) || (maxLines > 1));
	}
	return true;
}

$List* AudioSystem::getMixerInfoList() {
	$var($List, providers, getMixerProviders());
	return getMixerInfoList(providers);
}

$List* AudioSystem::getMixerInfoList($List* providers) {
	$useLocalCurrentObjectStackCache();
	$var($List, infos, $new($ArrayList));
	$var($Mixer$InfoArray, someInfos, nullptr);
	$var($Mixer$InfoArray, allInfos, nullptr);
	for (int32_t i = 0; i < $nc(providers)->size(); ++i) {
		$assign(someInfos, $nc(($cast($MixerProvider, $(providers->get(i)))))->getMixerInfo());
		for (int32_t j = 0; j < $nc(someInfos)->length; ++j) {
			infos->add(someInfos->get(j));
		}
	}
	return infos;
}

$List* AudioSystem::getProviders($Class* providerClass) {
	return $JDK13Services::getProviders(providerClass);
}

AudioSystem::AudioSystem() {
}

$Class* AudioSystem::load$($String* name, bool initialize) {
	$loadClass(AudioSystem, name, initialize, &_AudioSystem_ClassInfo_, allocate$AudioSystem);
	return class$;
}

$Class* AudioSystem::class$ = nullptr;

		} // sampled
	} // sound
} // javax