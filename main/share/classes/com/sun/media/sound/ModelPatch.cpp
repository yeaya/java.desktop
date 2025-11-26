#include <com/sun/media/sound/ModelPatch.h>

#include <javax/sound/midi/Patch.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Patch = ::javax::sound::midi::Patch;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelPatch_FieldInfo_[] = {
	{"percussion", "Z", nullptr, $PRIVATE, $field(ModelPatch, percussion)},
	{}
};

$MethodInfo _ModelPatch_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(ModelPatch::*)(int32_t,int32_t)>(&ModelPatch::init$))},
	{"<init>", "(IIZ)V", nullptr, $PUBLIC, $method(static_cast<void(ModelPatch::*)(int32_t,int32_t,bool)>(&ModelPatch::init$))},
	{"isPercussion", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(ModelPatch::*)()>(&ModelPatch::isPercussion))},
	{}
};

$ClassInfo _ModelPatch_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.ModelPatch",
	"javax.sound.midi.Patch",
	nullptr,
	_ModelPatch_FieldInfo_,
	_ModelPatch_MethodInfo_
};

$Object* allocate$ModelPatch($Class* clazz) {
	return $of($alloc(ModelPatch));
}

void ModelPatch::init$(int32_t bank, int32_t program) {
	$Patch::init$(bank, program);
	this->percussion = false;
}

void ModelPatch::init$(int32_t bank, int32_t program, bool percussion) {
	$Patch::init$(bank, program);
	this->percussion = false;
	this->percussion = percussion;
}

bool ModelPatch::isPercussion() {
	return this->percussion;
}

ModelPatch::ModelPatch() {
}

$Class* ModelPatch::load$($String* name, bool initialize) {
	$loadClass(ModelPatch, name, initialize, &_ModelPatch_ClassInfo_, allocate$ModelPatch);
	return class$;
}

$Class* ModelPatch::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com