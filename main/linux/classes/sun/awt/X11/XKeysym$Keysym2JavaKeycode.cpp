#include <sun/awt/X11/XKeysym$Keysym2JavaKeycode.h>

#include <sun/awt/X11/XKeysym.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XKeysym$Keysym2JavaKeycode_FieldInfo_[] = {
	{"jkeycode", "I", nullptr, 0, $field(XKeysym$Keysym2JavaKeycode, jkeycode)},
	{"keyLocation", "I", nullptr, 0, $field(XKeysym$Keysym2JavaKeycode, keyLocation)},
	{}
};

$MethodInfo _XKeysym$Keysym2JavaKeycode_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(static_cast<void(XKeysym$Keysym2JavaKeycode::*)(int32_t,int32_t)>(&XKeysym$Keysym2JavaKeycode::init$))},
	{"getJavaKeycode", "()I", nullptr, 0},
	{"getKeyLocation", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _XKeysym$Keysym2JavaKeycode_InnerClassesInfo_[] = {
	{"sun.awt.X11.XKeysym$Keysym2JavaKeycode", "sun.awt.X11.XKeysym", "Keysym2JavaKeycode", $STATIC},
	{}
};

$ClassInfo _XKeysym$Keysym2JavaKeycode_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XKeysym$Keysym2JavaKeycode",
	"java.lang.Object",
	nullptr,
	_XKeysym$Keysym2JavaKeycode_FieldInfo_,
	_XKeysym$Keysym2JavaKeycode_MethodInfo_,
	nullptr,
	nullptr,
	_XKeysym$Keysym2JavaKeycode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XKeysym"
};

$Object* allocate$XKeysym$Keysym2JavaKeycode($Class* clazz) {
	return $of($alloc(XKeysym$Keysym2JavaKeycode));
}

int32_t XKeysym$Keysym2JavaKeycode::getJavaKeycode() {
	return this->jkeycode;
}

int32_t XKeysym$Keysym2JavaKeycode::getKeyLocation() {
	return this->keyLocation;
}

void XKeysym$Keysym2JavaKeycode::init$(int32_t jk, int32_t loc) {
	this->jkeycode = jk;
	this->keyLocation = loc;
}

XKeysym$Keysym2JavaKeycode::XKeysym$Keysym2JavaKeycode() {
}

$Class* XKeysym$Keysym2JavaKeycode::load$($String* name, bool initialize) {
	$loadClass(XKeysym$Keysym2JavaKeycode, name, initialize, &_XKeysym$Keysym2JavaKeycode_ClassInfo_, allocate$XKeysym$Keysym2JavaKeycode);
	return class$;
}

$Class* XKeysym$Keysym2JavaKeycode::class$ = nullptr;

		} // X11
	} // awt
} // sun