#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock$State.h>

#include <com/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $JPEGImageReader$CallBackLock$StateArray = $Array<::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock$State>;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $JPEGImageReader$CallBackLock = ::com::sun::imageio::plugins::jpeg::JPEGImageReader$CallBackLock;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JPEGImageReader$CallBackLock$State_FieldInfo_[] = {
	{"Unlocked", "Lcom/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JPEGImageReader$CallBackLock$State, Unlocked)},
	{"Locked", "Lcom/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(JPEGImageReader$CallBackLock$State, Locked)},
	{"$VALUES", "[Lcom/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(JPEGImageReader$CallBackLock$State, $VALUES)},
	{}
};

$MethodInfo _JPEGImageReader$CallBackLock$State_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$JPEGImageReader$CallBackLock$StateArray*(*)()>(&JPEGImageReader$CallBackLock$State::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(JPEGImageReader$CallBackLock$State::*)($String*,int32_t)>(&JPEGImageReader$CallBackLock$State::init$))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JPEGImageReader$CallBackLock$State*(*)($String*)>(&JPEGImageReader$CallBackLock$State::valueOf))},
	{"values", "()[Lcom/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JPEGImageReader$CallBackLock$StateArray*(*)()>(&JPEGImageReader$CallBackLock$State::values))},
	{}
};

$InnerClassInfo _JPEGImageReader$CallBackLock$State_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock", "com.sun.imageio.plugins.jpeg.JPEGImageReader", "CallBackLock", $PRIVATE | $STATIC},
	{"com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock$State", "com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock", "State", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JPEGImageReader$CallBackLock$State_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.imageio.plugins.jpeg.JPEGImageReader$CallBackLock$State",
	"java.lang.Enum",
	nullptr,
	_JPEGImageReader$CallBackLock$State_FieldInfo_,
	_JPEGImageReader$CallBackLock$State_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/imageio/plugins/jpeg/JPEGImageReader$CallBackLock$State;>;",
	nullptr,
	_JPEGImageReader$CallBackLock$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JPEGImageReader"
};

$Object* allocate$JPEGImageReader$CallBackLock$State($Class* clazz) {
	return $of($alloc(JPEGImageReader$CallBackLock$State));
}

JPEGImageReader$CallBackLock$State* JPEGImageReader$CallBackLock$State::Unlocked = nullptr;
JPEGImageReader$CallBackLock$State* JPEGImageReader$CallBackLock$State::Locked = nullptr;
$JPEGImageReader$CallBackLock$StateArray* JPEGImageReader$CallBackLock$State::$VALUES = nullptr;

$JPEGImageReader$CallBackLock$StateArray* JPEGImageReader$CallBackLock$State::$values() {
	$init(JPEGImageReader$CallBackLock$State);
	return $new($JPEGImageReader$CallBackLock$StateArray, {
		JPEGImageReader$CallBackLock$State::Unlocked,
		JPEGImageReader$CallBackLock$State::Locked
	});
}

$JPEGImageReader$CallBackLock$StateArray* JPEGImageReader$CallBackLock$State::values() {
	$init(JPEGImageReader$CallBackLock$State);
	return $cast($JPEGImageReader$CallBackLock$StateArray, JPEGImageReader$CallBackLock$State::$VALUES->clone());
}

JPEGImageReader$CallBackLock$State* JPEGImageReader$CallBackLock$State::valueOf($String* name) {
	$init(JPEGImageReader$CallBackLock$State);
	return $cast(JPEGImageReader$CallBackLock$State, $Enum::valueOf(JPEGImageReader$CallBackLock$State::class$, name));
}

void JPEGImageReader$CallBackLock$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$JPEGImageReader$CallBackLock$State($Class* class$) {
	$assignStatic(JPEGImageReader$CallBackLock$State::Unlocked, $new(JPEGImageReader$CallBackLock$State, "Unlocked"_s, 0));
	$assignStatic(JPEGImageReader$CallBackLock$State::Locked, $new(JPEGImageReader$CallBackLock$State, "Locked"_s, 1));
	$assignStatic(JPEGImageReader$CallBackLock$State::$VALUES, JPEGImageReader$CallBackLock$State::$values());
}

JPEGImageReader$CallBackLock$State::JPEGImageReader$CallBackLock$State() {
}

$Class* JPEGImageReader$CallBackLock$State::load$($String* name, bool initialize) {
	$loadClass(JPEGImageReader$CallBackLock$State, name, initialize, &_JPEGImageReader$CallBackLock$State_ClassInfo_, clinit$JPEGImageReader$CallBackLock$State, allocate$JPEGImageReader$CallBackLock$State);
	return class$;
}

$Class* JPEGImageReader$CallBackLock$State::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com