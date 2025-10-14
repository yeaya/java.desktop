#include <java/awt/BufferCapabilities$FlipContents.h>

#include <java/awt/AttributeValue.h>
#include <java/awt/BufferCapabilities.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BACKGROUND
#undef COPIED
#undef I_BACKGROUND
#undef I_COPIED
#undef I_PRIOR
#undef I_UNDEFINED
#undef NAMES
#undef PRIOR
#undef UNDEFINED

using $AttributeValue = ::java::awt::AttributeValue;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _BufferCapabilities$FlipContents_FieldInfo_[] = {
	{"I_UNDEFINED", "I", nullptr, $PRIVATE | $STATIC, $staticField(BufferCapabilities$FlipContents, I_UNDEFINED)},
	{"I_BACKGROUND", "I", nullptr, $PRIVATE | $STATIC, $staticField(BufferCapabilities$FlipContents, I_BACKGROUND)},
	{"I_PRIOR", "I", nullptr, $PRIVATE | $STATIC, $staticField(BufferCapabilities$FlipContents, I_PRIOR)},
	{"I_COPIED", "I", nullptr, $PRIVATE | $STATIC, $staticField(BufferCapabilities$FlipContents, I_COPIED)},
	{"NAMES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BufferCapabilities$FlipContents, NAMES)},
	{"UNDEFINED", "Ljava/awt/BufferCapabilities$FlipContents;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BufferCapabilities$FlipContents, UNDEFINED)},
	{"BACKGROUND", "Ljava/awt/BufferCapabilities$FlipContents;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BufferCapabilities$FlipContents, BACKGROUND)},
	{"PRIOR", "Ljava/awt/BufferCapabilities$FlipContents;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BufferCapabilities$FlipContents, PRIOR)},
	{"COPIED", "Ljava/awt/BufferCapabilities$FlipContents;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BufferCapabilities$FlipContents, COPIED)},
	{}
};

$MethodInfo _BufferCapabilities$FlipContents_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BufferCapabilities$FlipContents::*)(int32_t)>(&BufferCapabilities$FlipContents::init$))},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _BufferCapabilities$FlipContents_InnerClassesInfo_[] = {
	{"java.awt.BufferCapabilities$FlipContents", "java.awt.BufferCapabilities", "FlipContents", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _BufferCapabilities$FlipContents_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.BufferCapabilities$FlipContents",
	"java.awt.AttributeValue",
	nullptr,
	_BufferCapabilities$FlipContents_FieldInfo_,
	_BufferCapabilities$FlipContents_MethodInfo_,
	nullptr,
	nullptr,
	_BufferCapabilities$FlipContents_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.BufferCapabilities"
};

$Object* allocate$BufferCapabilities$FlipContents($Class* clazz) {
	return $of($alloc(BufferCapabilities$FlipContents));
}

int32_t BufferCapabilities$FlipContents::I_UNDEFINED = 0;
int32_t BufferCapabilities$FlipContents::I_BACKGROUND = 0;
int32_t BufferCapabilities$FlipContents::I_PRIOR = 0;
int32_t BufferCapabilities$FlipContents::I_COPIED = 0;
$StringArray* BufferCapabilities$FlipContents::NAMES = nullptr;

BufferCapabilities$FlipContents* BufferCapabilities$FlipContents::UNDEFINED = nullptr;

BufferCapabilities$FlipContents* BufferCapabilities$FlipContents::BACKGROUND = nullptr;

BufferCapabilities$FlipContents* BufferCapabilities$FlipContents::PRIOR = nullptr;

BufferCapabilities$FlipContents* BufferCapabilities$FlipContents::COPIED = nullptr;

void BufferCapabilities$FlipContents::init$(int32_t type) {
	$AttributeValue::init$(type, BufferCapabilities$FlipContents::NAMES);
}

$String* BufferCapabilities$FlipContents::toString() {
	return $AttributeValue::toString();
}

int32_t BufferCapabilities$FlipContents::hashCode() {
	return $AttributeValue::hashCode();
}

void clinit$BufferCapabilities$FlipContents($Class* class$) {
	BufferCapabilities$FlipContents::I_UNDEFINED = 0;
	BufferCapabilities$FlipContents::I_BACKGROUND = 1;
	BufferCapabilities$FlipContents::I_PRIOR = 2;
	BufferCapabilities$FlipContents::I_COPIED = 3;
	$assignStatic(BufferCapabilities$FlipContents::NAMES, $new($StringArray, {
		"undefined"_s,
		"background"_s,
		"prior"_s,
		"copied"_s
	}));
	$assignStatic(BufferCapabilities$FlipContents::UNDEFINED, $new(BufferCapabilities$FlipContents, BufferCapabilities$FlipContents::I_UNDEFINED));
	$assignStatic(BufferCapabilities$FlipContents::BACKGROUND, $new(BufferCapabilities$FlipContents, BufferCapabilities$FlipContents::I_BACKGROUND));
	$assignStatic(BufferCapabilities$FlipContents::PRIOR, $new(BufferCapabilities$FlipContents, BufferCapabilities$FlipContents::I_PRIOR));
	$assignStatic(BufferCapabilities$FlipContents::COPIED, $new(BufferCapabilities$FlipContents, BufferCapabilities$FlipContents::I_COPIED));
}

BufferCapabilities$FlipContents::BufferCapabilities$FlipContents() {
}

$Class* BufferCapabilities$FlipContents::load$($String* name, bool initialize) {
	$loadClass(BufferCapabilities$FlipContents, name, initialize, &_BufferCapabilities$FlipContents_ClassInfo_, clinit$BufferCapabilities$FlipContents, allocate$BufferCapabilities$FlipContents);
	return class$;
}

$Class* BufferCapabilities$FlipContents::class$ = nullptr;

	} // awt
} // java