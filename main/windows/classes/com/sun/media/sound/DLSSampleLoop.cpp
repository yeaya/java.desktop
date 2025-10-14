#include <com/sun/media/sound/DLSSampleLoop.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef LOOP_TYPE_FORWARD
#undef LOOP_TYPE_RELEASE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DLSSampleLoop_FieldInfo_[] = {
	{"LOOP_TYPE_FORWARD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSSampleLoop, LOOP_TYPE_FORWARD)},
	{"LOOP_TYPE_RELEASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DLSSampleLoop, LOOP_TYPE_RELEASE)},
	{"type", "J", nullptr, 0, $field(DLSSampleLoop, type)},
	{"start", "J", nullptr, 0, $field(DLSSampleLoop, start)},
	{"length", "J", nullptr, 0, $field(DLSSampleLoop, length)},
	{}
};

$MethodInfo _DLSSampleLoop_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DLSSampleLoop::*)()>(&DLSSampleLoop::init$))},
	{"getLength", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(DLSSampleLoop::*)()>(&DLSSampleLoop::getLength))},
	{"getStart", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(DLSSampleLoop::*)()>(&DLSSampleLoop::getStart))},
	{"getType", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(DLSSampleLoop::*)()>(&DLSSampleLoop::getType))},
	{"setLength", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSampleLoop::*)(int64_t)>(&DLSSampleLoop::setLength))},
	{"setStart", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSampleLoop::*)(int64_t)>(&DLSSampleLoop::setStart))},
	{"setType", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(DLSSampleLoop::*)(int64_t)>(&DLSSampleLoop::setType))},
	{}
};

$ClassInfo _DLSSampleLoop_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DLSSampleLoop",
	"java.lang.Object",
	nullptr,
	_DLSSampleLoop_FieldInfo_,
	_DLSSampleLoop_MethodInfo_
};

$Object* allocate$DLSSampleLoop($Class* clazz) {
	return $of($alloc(DLSSampleLoop));
}

void DLSSampleLoop::init$() {
}

int64_t DLSSampleLoop::getLength() {
	return this->length;
}

void DLSSampleLoop::setLength(int64_t length) {
	this->length = length;
}

int64_t DLSSampleLoop::getStart() {
	return this->start;
}

void DLSSampleLoop::setStart(int64_t start) {
	this->start = start;
}

int64_t DLSSampleLoop::getType() {
	return this->type;
}

void DLSSampleLoop::setType(int64_t type) {
	this->type = type;
}

DLSSampleLoop::DLSSampleLoop() {
}

$Class* DLSSampleLoop::load$($String* name, bool initialize) {
	$loadClass(DLSSampleLoop, name, initialize, &_DLSSampleLoop_ClassInfo_, allocate$DLSSampleLoop);
	return class$;
}

$Class* DLSSampleLoop::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com