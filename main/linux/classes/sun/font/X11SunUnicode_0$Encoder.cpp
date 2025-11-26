#include <sun/font/X11SunUnicode_0$Encoder.h>

#include <java/nio/charset/Charset.h>
#include <sun/font/DoubleByteEncoder.h>
#include <sun/font/X11SunUnicode_0.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $DoubleByteEncoder = ::sun::font::DoubleByteEncoder;
using $X11SunUnicode_0 = ::sun::font::X11SunUnicode_0;

namespace sun {
	namespace font {

$FieldInfo _X11SunUnicode_0$Encoder_FieldInfo_[] = {
	{"innerIndex0", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(X11SunUnicode_0$Encoder, innerIndex0)},
	{"index1", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(X11SunUnicode_0$Encoder, index1)},
	{"index2", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(X11SunUnicode_0$Encoder, index2)},
	{}
};

$MethodInfo _X11SunUnicode_0$Encoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(X11SunUnicode_0$Encoder::*)($Charset*)>(&X11SunUnicode_0$Encoder::init$))},
	{"isLegalReplacement", "([B)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11SunUnicode_0$Encoder_InnerClassesInfo_[] = {
	{"sun.font.X11SunUnicode_0$Encoder", "sun.font.X11SunUnicode_0", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _X11SunUnicode_0$Encoder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.X11SunUnicode_0$Encoder",
	"sun.font.DoubleByteEncoder",
	nullptr,
	_X11SunUnicode_0$Encoder_FieldInfo_,
	_X11SunUnicode_0$Encoder_MethodInfo_,
	nullptr,
	nullptr,
	_X11SunUnicode_0$Encoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.X11SunUnicode_0"
};

$Object* allocate$X11SunUnicode_0$Encoder($Class* clazz) {
	return $of($alloc(X11SunUnicode_0$Encoder));
}

$String* X11SunUnicode_0$Encoder::innerIndex0 = nullptr;
$shorts* X11SunUnicode_0$Encoder::index1 = nullptr;
$StringArray* X11SunUnicode_0$Encoder::index2 = nullptr;

void X11SunUnicode_0$Encoder::init$($Charset* cs) {
	$DoubleByteEncoder::init$(cs, X11SunUnicode_0$Encoder::index1, X11SunUnicode_0$Encoder::index2);
}

bool X11SunUnicode_0$Encoder::isLegalReplacement($bytes* repl) {
	return true;
}

void clinit$X11SunUnicode_0$Encoder($Class* class$) {
	$assignStatic(X11SunUnicode_0$Encoder::innerIndex0, $cstr({'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 0x120, 0x121, 0x122, '\0', 0x123, 0x124, 0x125, 0x126, 0x127, 0x128, 0x129, 0x12A, 0x12B, 0x12C, 0x12D, 0x12E, 0x12F, 0x130, 0x131, 0x132, 0x133, 0x134, 0x135, 0x136, 0x137, 0x138, 0x139, 0x13A, 0x13B, 0x13C, 0x13D, 0x13E, 0x13F, 0x140, 0x141, 0x142, 0x143, 0x144, 0x145, 0x146, 0x147, 0x148, 0x149, 0x14A, 0x14B, 0x14C, 0x14D, 0x14E, 0x14F, 0x150, 0x151, 0x152, 0x153, 0x154, 0x155, 0x156, 0x157, '\0', '\0', 0x158, 0x159, 0x15A, 0x15B, 0x15C, 0x15D, 0x15E, 0x15F, 0x160, 0x161, 0x162, 0x163, 0x164, 0x165, 0x166, 0x167, 0x168, 0x169, '\0', '\0', 0x16A, 0x16B, 0x16C, 0x16D, 0x16E, '\0', '\0', '\0', 0x16F, 0x170, 0x171, 0x172, 0x173, 0x174, 0x175, 0x176, 0x177, 0x178, 0x179, 0x17A, 0x17B, 0x17C, 0x17D, 0x17E, 0x17F, 0x180, 0x181, 0x182, 0x183, 0x184, 0x185, 0x186, 0x187, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'}));
	$assignStatic(X11SunUnicode_0$Encoder::index1, $new($shorts, {
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)1,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0
	}));
	$assignStatic(X11SunUnicode_0$Encoder::index2, $new($StringArray, {X11SunUnicode_0$Encoder::innerIndex0}));
}

X11SunUnicode_0$Encoder::X11SunUnicode_0$Encoder() {
}

$Class* X11SunUnicode_0$Encoder::load$($String* name, bool initialize) {
	$loadClass(X11SunUnicode_0$Encoder, name, initialize, &_X11SunUnicode_0$Encoder_ClassInfo_, clinit$X11SunUnicode_0$Encoder, allocate$X11SunUnicode_0$Encoder);
	return class$;
}

$Class* X11SunUnicode_0$Encoder::class$ = nullptr;

	} // font
} // sun