#include <com/sun/media/sound/SimpleInstrument$SimpleInstrumentPart.h>

#include <com/sun/media/sound/ModelPerformer.h>
#include <com/sun/media/sound/SimpleInstrument.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $ModelPerformer = ::com::sun::media::sound::ModelPerformer;
using $SimpleInstrument = ::com::sun::media::sound::SimpleInstrument;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SimpleInstrument$SimpleInstrumentPart_FieldInfo_[] = {
	{"performers", "[Lcom/sun/media/sound/ModelPerformer;", nullptr, 0, $field(SimpleInstrument$SimpleInstrumentPart, performers)},
	{"keyFrom", "I", nullptr, 0, $field(SimpleInstrument$SimpleInstrumentPart, keyFrom)},
	{"keyTo", "I", nullptr, 0, $field(SimpleInstrument$SimpleInstrumentPart, keyTo)},
	{"velFrom", "I", nullptr, 0, $field(SimpleInstrument$SimpleInstrumentPart, velFrom)},
	{"velTo", "I", nullptr, 0, $field(SimpleInstrument$SimpleInstrumentPart, velTo)},
	{"exclusiveClass", "I", nullptr, 0, $field(SimpleInstrument$SimpleInstrumentPart, exclusiveClass)},
	{}
};

$MethodInfo _SimpleInstrument$SimpleInstrumentPart_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SimpleInstrument$SimpleInstrumentPart::*)()>(&SimpleInstrument$SimpleInstrumentPart::init$))},
	{}
};

$InnerClassInfo _SimpleInstrument$SimpleInstrumentPart_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SimpleInstrument$SimpleInstrumentPart", "com.sun.media.sound.SimpleInstrument", "SimpleInstrumentPart", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SimpleInstrument$SimpleInstrumentPart_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SimpleInstrument$SimpleInstrumentPart",
	"java.lang.Object",
	nullptr,
	_SimpleInstrument$SimpleInstrumentPart_FieldInfo_,
	_SimpleInstrument$SimpleInstrumentPart_MethodInfo_,
	nullptr,
	nullptr,
	_SimpleInstrument$SimpleInstrumentPart_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SimpleInstrument"
};

$Object* allocate$SimpleInstrument$SimpleInstrumentPart($Class* clazz) {
	return $of($alloc(SimpleInstrument$SimpleInstrumentPart));
}

void SimpleInstrument$SimpleInstrumentPart::init$() {
}

SimpleInstrument$SimpleInstrumentPart::SimpleInstrument$SimpleInstrumentPart() {
}

$Class* SimpleInstrument$SimpleInstrumentPart::load$($String* name, bool initialize) {
	$loadClass(SimpleInstrument$SimpleInstrumentPart, name, initialize, &_SimpleInstrument$SimpleInstrumentPart_ClassInfo_, allocate$SimpleInstrument$SimpleInstrumentPart);
	return class$;
}

$Class* SimpleInstrument$SimpleInstrumentPart::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com