#include <com/sun/media/sound/JDK13Services.h>

#include <com/sun/media/sound/JSSecurityManager.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Sequencer.h>
#include <javax/sound/midi/Synthesizer.h>
#include <javax/sound/midi/Transmitter.h>
#include <javax/sound/midi/spi/MidiDeviceProvider.h>
#include <javax/sound/midi/spi/MidiFileReader.h>
#include <javax/sound/midi/spi/MidiFileWriter.h>
#include <javax/sound/midi/spi/SoundbankReader.h>
#include <javax/sound/sampled/Clip.h>
#include <javax/sound/sampled/Port.h>
#include <javax/sound/sampled/SourceDataLine.h>
#include <javax/sound/sampled/TargetDataLine.h>
#include <javax/sound/sampled/spi/AudioFileReader.h>
#include <javax/sound/sampled/spi/AudioFileWriter.h>
#include <javax/sound/sampled/spi/FormatConversionProvider.h>
#include <javax/sound/sampled/spi/MixerProvider.h>
#include <jcpp.h>

using $JSSecurityManager = ::com::sun::media::sound::JSSecurityManager;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Properties = ::java::util::Properties;
using $Receiver = ::javax::sound::midi::Receiver;
using $Sequencer = ::javax::sound::midi::Sequencer;
using $Synthesizer = ::javax::sound::midi::Synthesizer;
using $Transmitter = ::javax::sound::midi::Transmitter;
using $MidiDeviceProvider = ::javax::sound::midi::spi::MidiDeviceProvider;
using $MidiFileReader = ::javax::sound::midi::spi::MidiFileReader;
using $MidiFileWriter = ::javax::sound::midi::spi::MidiFileWriter;
using $SoundbankReader = ::javax::sound::midi::spi::SoundbankReader;
using $Clip = ::javax::sound::sampled::Clip;
using $Port = ::javax::sound::sampled::Port;
using $SourceDataLine = ::javax::sound::sampled::SourceDataLine;
using $TargetDataLine = ::javax::sound::sampled::TargetDataLine;
using $AudioFileReader = ::javax::sound::sampled::spi::AudioFileReader;
using $AudioFileWriter = ::javax::sound::sampled::spi::AudioFileWriter;
using $FormatConversionProvider = ::javax::sound::sampled::spi::FormatConversionProvider;
using $MixerProvider = ::javax::sound::sampled::spi::MixerProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class JDK13Services$$Lambda$lambda$getDefaultProvider$0 : public $PrivilegedAction {
	$class(JDK13Services$$Lambda$lambda$getDefaultProvider$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* name) {
		$set(this, name, name);
	}
	virtual $Object* run() override {
		 return $of(JDK13Services::lambda$getDefaultProvider$0(name));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JDK13Services$$Lambda$lambda$getDefaultProvider$0>());
	}
	$String* name = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JDK13Services$$Lambda$lambda$getDefaultProvider$0::fieldInfos[2] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(JDK13Services$$Lambda$lambda$getDefaultProvider$0, name)},
	{}
};
$MethodInfo JDK13Services$$Lambda$lambda$getDefaultProvider$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JDK13Services$$Lambda$lambda$getDefaultProvider$0::*)($String*)>(&JDK13Services$$Lambda$lambda$getDefaultProvider$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JDK13Services$$Lambda$lambda$getDefaultProvider$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.media.sound.JDK13Services$$Lambda$lambda$getDefaultProvider$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* JDK13Services$$Lambda$lambda$getDefaultProvider$0::load$($String* name, bool initialize) {
	$loadClass(JDK13Services$$Lambda$lambda$getDefaultProvider$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JDK13Services$$Lambda$lambda$getDefaultProvider$0::class$ = nullptr;

$FieldInfo _JDK13Services_FieldInfo_[] = {
	{"properties", "Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $staticField(JDK13Services, properties)},
	{}
};

$MethodInfo _JDK13Services_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JDK13Services::*)()>(&JDK13Services::init$))},
	{"getDefaultInstanceName", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$String*(*)($Class*)>(&JDK13Services::getDefaultInstanceName))},
	{"getDefaultProvider", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$String*(*)($Class*)>(&JDK13Services::getDefaultProvider))},
	{"getDefaultProviderClassName", "(Ljava/lang/Class;)Ljava/lang/String;", "(Ljava/lang/Class<*>;)Ljava/lang/String;", $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$String*(*)($Class*)>(&JDK13Services::getDefaultProviderClassName))},
	{"getProperties", "()Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$Properties*(*)()>(&JDK13Services::getProperties))},
	{"getProviders", "(Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;)Ljava/util/List<*>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Class*)>(&JDK13Services::getProviders))},
	{"lambda$getDefaultProvider$0", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)($String*)>(&JDK13Services::lambda$getDefaultProvider$0))},
	{}
};

$ClassInfo _JDK13Services_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.JDK13Services",
	"java.lang.Object",
	nullptr,
	_JDK13Services_FieldInfo_,
	_JDK13Services_MethodInfo_
};

$Object* allocate$JDK13Services($Class* clazz) {
	return $of($alloc(JDK13Services));
}

$Properties* JDK13Services::properties = nullptr;

void JDK13Services::init$() {
}

$List* JDK13Services::getProviders($Class* serviceClass) {
	$var($List, providers, nullptr);
	$load($MixerProvider);
	bool var$6 = !$of($MixerProvider::class$)->equals(serviceClass);
	$load($FormatConversionProvider);
	bool var$5 = var$6 && !$of($FormatConversionProvider::class$)->equals(serviceClass);
	$load($AudioFileReader);
	bool var$4 = var$5 && !$of($AudioFileReader::class$)->equals(serviceClass);
	$load($AudioFileWriter);
	bool var$3 = var$4 && !$of($AudioFileWriter::class$)->equals(serviceClass);
	$load($MidiDeviceProvider);
	bool var$2 = var$3 && !$of($MidiDeviceProvider::class$)->equals(serviceClass);
	$load($SoundbankReader);
	bool var$1 = var$2 && !$of($SoundbankReader::class$)->equals(serviceClass);
	$load($MidiFileWriter);
	bool var$0 = var$1 && !$of($MidiFileWriter::class$)->equals(serviceClass);
	$load($MidiFileReader);
	if (var$0 && !$of($MidiFileReader::class$)->equals(serviceClass)) {
		$assign(providers, $new($ArrayList, 0));
	} else {
		$assign(providers, $JSSecurityManager::getProviders(serviceClass));
	}
	return $Collections::unmodifiableList(providers);
}

$String* JDK13Services::getDefaultProviderClassName($Class* typeClass) {
	$load(JDK13Services);
	$synchronized(class$) {
		$useLocalCurrentObjectStackCache();
		$var($String, value, nullptr);
		$var($String, defaultProviderSpec, getDefaultProvider(typeClass));
		if (defaultProviderSpec != nullptr) {
			int32_t hashpos = defaultProviderSpec->indexOf((int32_t)u'#');
			if (hashpos == 0) {
			} else if (hashpos > 0) {
				$assign(value, defaultProviderSpec->substring(0, hashpos));
			} else {
				$assign(value, defaultProviderSpec);
			}
		}
		return value;
	}
}

$String* JDK13Services::getDefaultInstanceName($Class* typeClass) {
	$load(JDK13Services);
	$synchronized(class$) {
		$useLocalCurrentObjectStackCache();
		$var($String, value, nullptr);
		$var($String, defaultProviderSpec, getDefaultProvider(typeClass));
		if (defaultProviderSpec != nullptr) {
			int32_t hashpos = defaultProviderSpec->indexOf((int32_t)u'#');
			if (hashpos >= 0 && hashpos < defaultProviderSpec->length() - 1) {
				$assign(value, defaultProviderSpec->substring(hashpos + 1));
			}
		}
		return value;
	}
}

$String* JDK13Services::getDefaultProvider($Class* typeClass) {
	$load(JDK13Services);
	$synchronized(class$) {
		$load(JDK13Services);
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		$load($SourceDataLine);
		bool var$6 = !$of($SourceDataLine::class$)->equals(typeClass);
		$load($TargetDataLine);
		bool var$5 = var$6 && !$of($TargetDataLine::class$)->equals(typeClass);
		$load($Clip);
		bool var$4 = var$5 && !$of($Clip::class$)->equals(typeClass);
		$load($Port);
		bool var$3 = var$4 && !$of($Port::class$)->equals(typeClass);
		$load($Receiver);
		bool var$2 = var$3 && !$of($Receiver::class$)->equals(typeClass);
		$load($Transmitter);
		bool var$1 = var$2 && !$of($Transmitter::class$)->equals(typeClass);
		$load($Synthesizer);
		bool var$0 = var$1 && !$of($Synthesizer::class$)->equals(typeClass);
		$load($Sequencer);
		if (var$0 && !$of($Sequencer::class$)->equals(typeClass)) {
			return nullptr;
		}
		$var($String, name, $nc(typeClass)->getName());
		$var($String, value, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(JDK13Services$$Lambda$lambda$getDefaultProvider$0, name)))));
		if (value == nullptr) {
			$assign(value, $nc($(getProperties()))->getProperty(name));
		}
		if (""_s->equals(value)) {
			$assign(value, nullptr);
		}
		return value;
	}
}

$Properties* JDK13Services::getProperties() {
	$load(JDK13Services);
	$synchronized(class$) {
		$init(JDK13Services);
		if (JDK13Services::properties == nullptr) {
			$assignStatic(JDK13Services::properties, $new($Properties));
			$JSSecurityManager::loadProperties(JDK13Services::properties);
		}
		return JDK13Services::properties;
	}
}

$String* JDK13Services::lambda$getDefaultProvider$0($String* name) {
	return $System::getProperty(name);
}

JDK13Services::JDK13Services() {
}

$Class* JDK13Services::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JDK13Services$$Lambda$lambda$getDefaultProvider$0::classInfo$.name)) {
			return JDK13Services$$Lambda$lambda$getDefaultProvider$0::load$(name, initialize);
		}
	}
	$loadClass(JDK13Services, name, initialize, &_JDK13Services_ClassInfo_, allocate$JDK13Services);
	return class$;
}

$Class* JDK13Services::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com