#include <javax/sound/midi/spi/MidiFileWriter.h>

#include <java/io/File.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Arrays.h>
#include <java/util/function/IntPredicate.h>
#include <java/util/stream/IntStream.h>
#include <javax/sound/midi/Sequence.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Arrays = ::java::util::Arrays;
using $IntPredicate = ::java::util::function::IntPredicate;
using $IntStream = ::java::util::stream::IntStream;
using $Sequence = ::javax::sound::midi::Sequence;

namespace javax {
	namespace sound {
		namespace midi {
			namespace spi {

class MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0 : public $IntPredicate {
	$class(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0, $NO_CLASS_INIT, $IntPredicate)
public:
	void init$(int32_t fileType) {
		this->fileType = fileType;
	}
	virtual bool test(int32_t type) override {
		 return MidiFileWriter::lambda$isFileTypeSupported$0(fileType, type);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0>());
	}
	int32_t fileType = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0::fieldInfos[2] = {
	{"fileType", "I", nullptr, $PUBLIC, $field(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0, fileType)},
	{}
};
$MethodInfo MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0::*)(int32_t)>(&MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0::init$))},
	{"test", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.sound.midi.spi.MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0",
	"java.lang.Object",
	"java.util.function.IntPredicate",
	fieldInfos,
	methodInfos
};
$Class* MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0::load$($String* name, bool initialize) {
	$loadClass(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0::class$ = nullptr;

$MethodInfo _MidiFileWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MidiFileWriter::*)()>(&MidiFileWriter::init$))},
	{"getMidiFileTypes", "()[I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMidiFileTypes", "(Ljavax/sound/midi/Sequence;)[I", nullptr, $PUBLIC | $ABSTRACT},
	{"isFileTypeSupported", "(I)Z", nullptr, $PUBLIC},
	{"isFileTypeSupported", "(ILjavax/sound/midi/Sequence;)Z", nullptr, $PUBLIC},
	{"lambda$isFileTypeSupported$0", "(II)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&MidiFileWriter::lambda$isFileTypeSupported$0))},
	{"write", "(Ljavax/sound/midi/Sequence;ILjava/io/OutputStream;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/sound/midi/Sequence;ILjava/io/File;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _MidiFileWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.midi.spi.MidiFileWriter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MidiFileWriter_MethodInfo_
};

$Object* allocate$MidiFileWriter($Class* clazz) {
	return $of($alloc(MidiFileWriter));
}

void MidiFileWriter::init$() {
}

bool MidiFileWriter::isFileTypeSupported(int32_t fileType) {
	$useLocalCurrentObjectStackCache();
	return $nc($($Arrays::stream($(getMidiFileTypes()))))->anyMatch(static_cast<$IntPredicate*>($$new(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0, fileType)));
}

bool MidiFileWriter::isFileTypeSupported(int32_t fileType, $Sequence* sequence) {
	$useLocalCurrentObjectStackCache();
	return $nc($($Arrays::stream($(getMidiFileTypes(sequence)))))->anyMatch(static_cast<$IntPredicate*>($$new(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0, fileType)));
}

bool MidiFileWriter::lambda$isFileTypeSupported$0(int32_t fileType, int32_t type) {
	return fileType == type;
}

MidiFileWriter::MidiFileWriter() {
}

$Class* MidiFileWriter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0::classInfo$.name)) {
			return MidiFileWriter$$Lambda$lambda$isFileTypeSupported$0::load$(name, initialize);
		}
	}
	$loadClass(MidiFileWriter, name, initialize, &_MidiFileWriter_ClassInfo_, allocate$MidiFileWriter);
	return class$;
}

$Class* MidiFileWriter::class$ = nullptr;

			} // spi
		} // midi
	} // sound
} // javax