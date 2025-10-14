#include <sun/java2d/pipe/hw/ContextCapabilities.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CAPS_EMPTY
#undef CAPS_MULTITEXTURE
#undef CAPS_PS20
#undef CAPS_PS30
#undef CAPS_RT_PLAIN_ALPHA
#undef CAPS_RT_TEXTURE_ALPHA
#undef CAPS_RT_TEXTURE_OPAQUE
#undef CAPS_TEXNONPOW2
#undef CAPS_TEXNONSQUARE
#undef FIRST_PRIVATE_CAP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

$FieldInfo _ContextCapabilities_FieldInfo_[] = {
	{"CAPS_EMPTY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContextCapabilities, CAPS_EMPTY)},
	{"CAPS_RT_PLAIN_ALPHA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContextCapabilities, CAPS_RT_PLAIN_ALPHA)},
	{"CAPS_RT_TEXTURE_ALPHA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContextCapabilities, CAPS_RT_TEXTURE_ALPHA)},
	{"CAPS_RT_TEXTURE_OPAQUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContextCapabilities, CAPS_RT_TEXTURE_OPAQUE)},
	{"CAPS_MULTITEXTURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContextCapabilities, CAPS_MULTITEXTURE)},
	{"CAPS_TEXNONPOW2", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContextCapabilities, CAPS_TEXNONPOW2)},
	{"CAPS_TEXNONSQUARE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContextCapabilities, CAPS_TEXNONSQUARE)},
	{"CAPS_PS20", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContextCapabilities, CAPS_PS20)},
	{"CAPS_PS30", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContextCapabilities, CAPS_PS30)},
	{"FIRST_PRIVATE_CAP", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(ContextCapabilities, FIRST_PRIVATE_CAP)},
	{"caps", "I", nullptr, $PROTECTED | $FINAL, $field(ContextCapabilities, caps)},
	{"adapterId", "Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $field(ContextCapabilities, adapterId)},
	{}
};

$MethodInfo _ContextCapabilities_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(ContextCapabilities::*)(int32_t,$String*)>(&ContextCapabilities::init$))},
	{"getAdapterId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCaps", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ContextCapabilities_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.hw.ContextCapabilities",
	"java.lang.Object",
	nullptr,
	_ContextCapabilities_FieldInfo_,
	_ContextCapabilities_MethodInfo_
};

$Object* allocate$ContextCapabilities($Class* clazz) {
	return $of($alloc(ContextCapabilities));
}

void ContextCapabilities::init$(int32_t caps, $String* adapterId) {
	this->caps = caps;
	$set(this, adapterId, adapterId != nullptr ? adapterId : "unknown adapter"_s);
}

$String* ContextCapabilities::getAdapterId() {
	return this->adapterId;
}

int32_t ContextCapabilities::getCaps() {
	return this->caps;
}

$String* ContextCapabilities::toString() {
	$var($StringBuilder, sb, $new($StringBuilder, $$str({"ContextCapabilities: adapter="_s, this->adapterId, ", caps="_s})));
	if (this->caps == ContextCapabilities::CAPS_EMPTY) {
		sb->append("CAPS_EMPTY"_s);
	} else {
		if (((int32_t)(this->caps & (uint32_t)ContextCapabilities::CAPS_RT_PLAIN_ALPHA)) != 0) {
			sb->append("CAPS_RT_PLAIN_ALPHA|"_s);
		}
		if (((int32_t)(this->caps & (uint32_t)ContextCapabilities::CAPS_RT_TEXTURE_ALPHA)) != 0) {
			sb->append("CAPS_RT_TEXTURE_ALPHA|"_s);
		}
		if (((int32_t)(this->caps & (uint32_t)ContextCapabilities::CAPS_RT_TEXTURE_OPAQUE)) != 0) {
			sb->append("CAPS_RT_TEXTURE_OPAQUE|"_s);
		}
		if (((int32_t)(this->caps & (uint32_t)ContextCapabilities::CAPS_MULTITEXTURE)) != 0) {
			sb->append("CAPS_MULTITEXTURE|"_s);
		}
		if (((int32_t)(this->caps & (uint32_t)ContextCapabilities::CAPS_TEXNONPOW2)) != 0) {
			sb->append("CAPS_TEXNONPOW2|"_s);
		}
		if (((int32_t)(this->caps & (uint32_t)ContextCapabilities::CAPS_TEXNONSQUARE)) != 0) {
			sb->append("CAPS_TEXNONSQUARE|"_s);
		}
		if (((int32_t)(this->caps & (uint32_t)ContextCapabilities::CAPS_PS20)) != 0) {
			sb->append("CAPS_PS20|"_s);
		}
		if (((int32_t)(this->caps & (uint32_t)ContextCapabilities::CAPS_PS30)) != 0) {
			sb->append("CAPS_PS30|"_s);
		}
	}
	return sb->toString();
}

ContextCapabilities::ContextCapabilities() {
}

$Class* ContextCapabilities::load$($String* name, bool initialize) {
	$loadClass(ContextCapabilities, name, initialize, &_ContextCapabilities_ClassInfo_, allocate$ContextCapabilities);
	return class$;
}

$Class* ContextCapabilities::class$ = nullptr;

			} // hw
		} // pipe
	} // java2d
} // sun