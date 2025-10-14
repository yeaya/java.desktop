#include <javax/sound/midi/Patch.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _Patch_FieldInfo_[] = {
	{"bank", "I", nullptr, $PRIVATE | $FINAL, $field(Patch, bank)},
	{"program", "I", nullptr, $PRIVATE | $FINAL, $field(Patch, program)},
	{}
};

$MethodInfo _Patch_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(Patch::*)(int32_t,int32_t)>(&Patch::init$))},
	{"getBank", "()I", nullptr, $PUBLIC},
	{"getProgram", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Patch_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.Patch",
	"java.lang.Object",
	nullptr,
	_Patch_FieldInfo_,
	_Patch_MethodInfo_
};

$Object* allocate$Patch($Class* clazz) {
	return $of($alloc(Patch));
}

void Patch::init$(int32_t bank, int32_t program) {
	this->bank = bank;
	this->program = program;
}

int32_t Patch::getBank() {
	return this->bank;
}

int32_t Patch::getProgram() {
	return this->program;
}

Patch::Patch() {
}

$Class* Patch::load$($String* name, bool initialize) {
	$loadClass(Patch, name, initialize, &_Patch_ClassInfo_, allocate$Patch);
	return class$;
}

$Class* Patch::class$ = nullptr;

		} // midi
	} // sound
} // javax