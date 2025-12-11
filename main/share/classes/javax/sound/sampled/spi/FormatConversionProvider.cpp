#include <javax/sound/sampled/spi/FormatConversionProvider.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/sound/sampled/AudioFormat$Encoding.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Arrays = ::java::util::Arrays;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioFormat$Encoding = ::javax::sound::sampled::AudioFormat$Encoding;

namespace javax {
	namespace sound {
		namespace sampled {
			namespace spi {

class FormatConversionProvider$$Lambda$equals : public $Predicate {
	$class(FormatConversionProvider$$Lambda$equals, $NO_CLASS_INIT, $Predicate)
public:
	void init$($AudioFormat$Encoding* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* obj) override {
		 return $nc(inst$)->equals(obj);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FormatConversionProvider$$Lambda$equals>());
	}
	$AudioFormat$Encoding* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FormatConversionProvider$$Lambda$equals::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(FormatConversionProvider$$Lambda$equals, inst$)},
	{}
};
$MethodInfo FormatConversionProvider$$Lambda$equals::methodInfos[3] = {
	{"<init>", "(Ljavax/sound/sampled/AudioFormat$Encoding;)V", nullptr, $PUBLIC, $method(static_cast<void(FormatConversionProvider$$Lambda$equals::*)($AudioFormat$Encoding*)>(&FormatConversionProvider$$Lambda$equals::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo FormatConversionProvider$$Lambda$equals::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.sound.sampled.spi.FormatConversionProvider$$Lambda$equals",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* FormatConversionProvider$$Lambda$equals::load$($String* name, bool initialize) {
	$loadClass(FormatConversionProvider$$Lambda$equals, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FormatConversionProvider$$Lambda$equals::class$ = nullptr;

class FormatConversionProvider$$Lambda$matches$1 : public $Predicate {
	$class(FormatConversionProvider$$Lambda$matches$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($AudioFormat* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* format) override {
		 return $nc(inst$)->matches($cast($AudioFormat, format));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FormatConversionProvider$$Lambda$matches$1>());
	}
	$AudioFormat* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FormatConversionProvider$$Lambda$matches$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(FormatConversionProvider$$Lambda$matches$1, inst$)},
	{}
};
$MethodInfo FormatConversionProvider$$Lambda$matches$1::methodInfos[3] = {
	{"<init>", "(Ljavax/sound/sampled/AudioFormat;)V", nullptr, $PUBLIC, $method(static_cast<void(FormatConversionProvider$$Lambda$matches$1::*)($AudioFormat*)>(&FormatConversionProvider$$Lambda$matches$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo FormatConversionProvider$$Lambda$matches$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.sound.sampled.spi.FormatConversionProvider$$Lambda$matches$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* FormatConversionProvider$$Lambda$matches$1::load$($String* name, bool initialize) {
	$loadClass(FormatConversionProvider$$Lambda$matches$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FormatConversionProvider$$Lambda$matches$1::class$ = nullptr;

$MethodInfo _FormatConversionProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FormatConversionProvider::*)()>(&FormatConversionProvider::init$))},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAudioInputStream", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioInputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSourceEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTargetEncodings", "()[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTargetEncodings", "(Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat$Encoding;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTargetFormats", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)[Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC | $ABSTRACT},
	{"isConversionSupported", "(Ljavax/sound/sampled/AudioFormat$Encoding;Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $PUBLIC},
	{"isConversionSupported", "(Ljavax/sound/sampled/AudioFormat;Ljavax/sound/sampled/AudioFormat;)Z", nullptr, $PUBLIC},
	{"isSourceEncodingSupported", "(Ljavax/sound/sampled/AudioFormat$Encoding;)Z", nullptr, $PUBLIC},
	{"isTargetEncodingSupported", "(Ljavax/sound/sampled/AudioFormat$Encoding;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FormatConversionProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.sampled.spi.FormatConversionProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FormatConversionProvider_MethodInfo_
};

$Object* allocate$FormatConversionProvider($Class* clazz) {
	return $of($alloc(FormatConversionProvider));
}

void FormatConversionProvider::init$() {
}

bool FormatConversionProvider::isSourceEncodingSupported($AudioFormat$Encoding* sourceEncoding) {
	$useLocalCurrentObjectStackCache();
	return $nc($($Arrays::stream($(getSourceEncodings()))))->anyMatch(static_cast<$Predicate*>($$new(FormatConversionProvider$$Lambda$equals, static_cast<$AudioFormat$Encoding*>($nc(sourceEncoding)))));
}

bool FormatConversionProvider::isTargetEncodingSupported($AudioFormat$Encoding* targetEncoding) {
	$useLocalCurrentObjectStackCache();
	return $nc($($Arrays::stream($(getTargetEncodings()))))->anyMatch(static_cast<$Predicate*>($$new(FormatConversionProvider$$Lambda$equals, static_cast<$AudioFormat$Encoding*>($nc(targetEncoding)))));
}

bool FormatConversionProvider::isConversionSupported($AudioFormat$Encoding* targetEncoding, $AudioFormat* sourceFormat) {
	$useLocalCurrentObjectStackCache();
	return $nc($($Arrays::stream($(getTargetEncodings(sourceFormat)))))->anyMatch(static_cast<$Predicate*>($$new(FormatConversionProvider$$Lambda$equals, static_cast<$AudioFormat$Encoding*>($nc(targetEncoding)))));
}

bool FormatConversionProvider::isConversionSupported($AudioFormat* targetFormat, $AudioFormat* sourceFormat) {
	$useLocalCurrentObjectStackCache();
	$var($AudioFormat$Encoding, targetEncoding, $nc(targetFormat)->getEncoding());
	return $nc($($Arrays::stream($(getTargetFormats(targetEncoding, sourceFormat)))))->anyMatch(static_cast<$Predicate*>($$new(FormatConversionProvider$$Lambda$matches$1, static_cast<$AudioFormat*>(targetFormat))));
}

FormatConversionProvider::FormatConversionProvider() {
}

$Class* FormatConversionProvider::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FormatConversionProvider$$Lambda$equals::classInfo$.name)) {
			return FormatConversionProvider$$Lambda$equals::load$(name, initialize);
		}
		if (name->equals(FormatConversionProvider$$Lambda$matches$1::classInfo$.name)) {
			return FormatConversionProvider$$Lambda$matches$1::load$(name, initialize);
		}
	}
	$loadClass(FormatConversionProvider, name, initialize, &_FormatConversionProvider_ClassInfo_, allocate$FormatConversionProvider);
	return class$;
}

$Class* FormatConversionProvider::class$ = nullptr;

			} // spi
		} // sampled
	} // sound
} // javax